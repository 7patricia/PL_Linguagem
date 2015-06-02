#include "tp2.h"
#include "hashfunction.c"

int Hash(char* chave) {
    ub4 h = hash( (unsigned char *)chave, 9, 0);
    return h%HASHSIZE;  
}

void InitializeTable(HashTable t) {
    int i = 0;
    for (i=0;i<HASHSIZE;i++) 
        t[i]=NULL;
}

void ClearTable(HashTable t) {
    int i = 0;
    Entry *aux;
    for (i=0;i<HASHSIZE;i++) {
        while(t[i]) {
            aux=t[i];
            t[i]=t[i]->next;
            free(aux);
        }
    }
}     

int InsertTable(HashTable t, char* chave, int reg, int tam, char* ty) {
    Entry *new, *aux;
    int h=Hash(chave);
    aux=t[h];
    while ((aux)&&(strncmp(aux->nome,chave,9))) {
        aux=aux->next;
    }
    if (! aux) {
        new=(Entry*)malloc(sizeof(Entry));
        strncpy(new->nome,chave,9);
        new->registo=reg;
        new->tamanho=tam;
        new->tipo=ty;
        new->next=t[h];
        t[h]=new; 
    }
    else { // Lida com repetidos (escreve por cima)
        strncpy(aux->nome,chave,9);
        aux->registo=reg;
        aux->tamanho=tam;
        aux->tipo=ty;    
    }
    return 0;
}

int DeleteTable(HashTable t, char* chave, int reg, int tam, char* ty) {
    int h = Hash(chave);
    Entry *aux1,*aux2;
    if (!t[h]) return (-1);
    aux1=NULL; aux2=t[h];
    while ((aux2)&&(strncmp(aux2->nome,chave,9))) {
        aux1=aux2;
        aux2=aux2->next;
    }
    if (! aux2) return (-1);
    reg=aux2->registo;
    tam=aux2->tamanho;
    ty=aux2->tipo;
    if (! aux1) {
        t[h]=t[h]->next;
        free(aux2);
    }
    else {
        aux1->next=aux2->next;
        free(aux2);
    }
    return 0;
}

int RetrieveTable(HashTable t, char* chave, int reg, int tam, char* ty) {
    int h = Hash(chave);
    Entry *aux;
    if (!t[h]) return (-1);
    aux=t[h];
    while ((aux)&&(strncmp(aux->nome,chave,9))) {
        aux=aux->next;
    }
    if (! aux) return (-1);
    reg=aux->registo;
    tam=aux->tamanho;
    ty=aux->tipo;
    return 0;
}
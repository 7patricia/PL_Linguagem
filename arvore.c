#include <stdio.h>

#include <string.h>
#include <stdlib.h>
#include "arvore.h"

Tree initBinTree(){
	Tree t=(Tree)malloc(sizeof(struct node));

	t->nome=(char*)malloc(sizeof(char*));
	t->nome=NULL;
	t->tipo=-1;
	t->tamanho=-1;
	t->registo=-1;
	t->esq=NULL;
	t->dir=NULL;
	
	return t;
}



int existsBinTree(Tree t, char* n){
	Tree aux;

	if(t->nome==NULL)
		return -1;
	aux=t;
	
	while(aux != NULL && (strcmp(n,aux->nome)!=0)){

		if((strcmp(n,aux->nome)>0)) //procura a direita
			aux=aux->dir;

		else //procura a esquerda
			aux=aux->esq;
	}
	
	if(aux==NULL)
	 //se aux==NULL, entao o elemento e nao existe
		return 0;
	return 1;
}

int insertBinTree(Tree t, char* n, int ty, int tam, int reg){
	Tree new;


	
	if(existsBinTree(t,n)==1)
		//
		return -1;
	
	if(!t->nome){
		t->nome=n;
		t->tipo=ty;
		t->tamanho=tam;
		t->registo=reg;
		t->esq=NULL;
		t->dir=NULL;
	}
		
	else{
		new=(Tree)malloc(sizeof(struct node));
		new->nome=n;
		new->tipo=ty;
		new->tamanho=tam;
		new->registo=reg;
		new->esq=NULL;
		new->dir=NULL;
		Tree aux = t;

		while(aux!=NULL){
			if((strcmp(n,aux->nome)>0)){
				if(aux->dir==NULL){ 
					aux->dir=new;
					return 0;}

				else 
					aux=aux->dir;
			}
			else{
				if(aux->esq==NULL){
					aux->esq=new;
					return 0;
				}
				else{ 
					aux=aux->esq;
				}
			}
		}
	}
	
	return 0;	
}

int registoVar (Tree t, char *nomeVar){
	Tree aux;

	if(t->nome==NULL)
		return -1;
	aux=t;
	
	while(aux != NULL && (strcmp(nomeVar,aux->nome)!=0)){

		if((strcmp(nomeVar,aux->nome)>0)) //procura a direita
			aux=aux->dir;

		else //procura a esquerda
			aux=aux->esq;
	}
	
	if(aux==NULL)
	 //se aux==NULL, entao o elemento e nao existe
		return -1;

	return aux->registo; 
}


int tipoVar(Tree t, char* nomeVar){

	Tree aux;

	if(t->nome==NULL)
		return -1;
	aux=t;
	
	while(aux != NULL && (strcmp(nomeVar,aux->nome)!=0)){

		if((strcmp(nomeVar,aux->nome)>0)) //procura a direita
			aux=aux->dir;

		else //procura a esquerda
			aux=aux->esq;
	}
	
	if(aux==NULL)
	 //se aux==NULL, entao o elemento e nao existe
		return -1;

	return aux->tipo;

	return 0;
}


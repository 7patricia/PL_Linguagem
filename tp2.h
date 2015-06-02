#ifndef _TABELA_HASH_H
#define _TABELA_HASH_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define HASHSIZE    400001    // numero primo


typedef struct entry {
  char* nome;
  int registo;
  int tamanho;
  char* tipo;
  struct entry *next;
} Entry;

typedef Entry *HashTable[HASHSIZE];

// funcao de hash  
int Hash(char*chave);

// inicializa a tabela de hash
void InitializeTable(HashTable);

// limpa a tabela de hash
void ClearTable(HashTable);

// insere uma nova associacao entre uma chave nova e a restante informacao
int InsertTable(HashTable, char* chave, int reg, int tam, char* t);

// apaga o elemento de chave k da tabela
int DeleteTable(HashTable, char* chave, int reg, int tam, char* t);

// procura na tabela o elemento de chave k, e retorna-o
int RetrieveTable(HashTable, char* chave, int reg, int tam, char* t);

#endif
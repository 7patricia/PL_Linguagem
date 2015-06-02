#include <stdio.h>
#include <stdlib.h>
#include "arvore.c"

int main(){
	
	Tree t;

	int aux,n;
	
	t=initBinTree();
	printf("nome: %s\n",t->nome);
	printf("tipo: %s\n",t->tipo);
	printf("tam: %d\n",t->tamanho);
	printf("reg: %d\n",t->registo);
	aux=insertBinTree(t,"x","int",1,1);
	printf("aux %d\n",aux);
	aux=insertBinTree(t,"y","int",1,1);
	printf("aux %d\n",aux);
	aux=existsBinTree(t,"y");
	printf("O aux %d\n",aux);
	aux=insertBinTree(t,"z","int",1,1);
	printf("aux %d\n",aux);
	aux=insertBinTree(t,"zz","int",1,1);
	printf("aux %d\n",aux);
	aux=existsBinTree(t,"zzz");
	printf("O aux %d\n",aux);
	aux=insertBinTree(t,"zzz","int",1,1);
	printf("aux %d\n",aux);

	while(t!=NULL){
		printf("cena %s\n",t->nome);
		t=t->dir;
	}

	//aux=insertBinTree(t,30);//printf("%d\n",t->esq->elem);
	/*aux=insertBinTree(t,40);
	aux=insertBinTree(t,100);
	aux=insertBinTree(t,60);
	aux=insertBinTree(t,200);
	aux=insertBinTree(t,150);
	aux=insertBinTree(t,250);
	aux=sum(t,&n);*/
	
	//printf("Sum: %d\n",existsBinTree(t,200));
	
	return 0;
}
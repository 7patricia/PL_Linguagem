
struct listaL {
	char* nome;
	int valor;
	struct listaL* prox;
}ListaL;

//rever 
void insereVariavel (char* n, Listal * list ){

	if (list == NULL) {
		list->nome= n;
		list->prox=NULL;
	}
	while(list->prox!= NULL) list=list-> prox;
	Listal novo= (Listal *) malloc (sizeof(listaL));
	novo->nome=n;
	list->prox=novo;
	novo->prox=NULL;
}

int atribVariavel (char* nom, int value, Listal * list) {
	if (list=NULL) return -1;

		while(list!=NULL){
			if (list->nome==nom){
				 list->valor=value;
				 return 1;
				}
			list=list->prox;
		}

	return -1;
	}





ListaL criaLista () {
	Listal novo= (Listal *) malloc (sizeof(listaL));
	novo->nome=NULL;
	novo->prox=NULL;

	return novo;
}
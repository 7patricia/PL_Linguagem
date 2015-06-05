/**
 *Uma arvore binaria de pesquisa eh uma arvore binaria que verifica a seguinte propriedade: ou a arvore eh vazia ou, nao sendo vazia, todos os valores da sub-arvore esquerda sao menores (ou iguais) do que o da raiz e todos os valores da sub-arvore direita sao maiores do que o que esta na raiz. 
 * Alem disso, as sub-arvores sao tambem arvores binarias de pesquisa.
 */

typedef struct node {
	char* nome;
	int tipo;
	int tamanho;
	int registo;
	struct node *esq;
	struct node *dir;
} Node, *Tree;

/**
 * Inicializa uma arvore binaria de pesquisa.
 * Retorna a arvore inicializada.
 */
Tree initBinTree();

/**
 * Verifica se o elemento e existe na arvore t.
 * Retorna 1 caso exista, 0 caso nao exista e -1 em caso de erro.
 */
int existsBinTree(Tree t, char* nome);

/**
 * Insere o elemento e na arvore t.
 * Retorna -1 em caso de erro e 0 caso corra tudo bem.
 */
int insertBinTree(Tree t, char* nome, int ty, int tam, int reg);


int tipoVar(Tree t, char* nome);
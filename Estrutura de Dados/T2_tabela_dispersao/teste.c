#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//Tabela Hash usando lista encadeada como tratamento de colis�es

# define M 19 //Tamanho da tabela (Escolher numero primo)

//Tipo pessoa
typedef struct{
    int matricula;
    char nome[50];
} Pessoa;

//Definindo a lista encadeada
//Tipo n�
typedef struct no{
    Pessoa pessoa;  //objeto pessoa
    struct no *proximo;  //Ponteiro para pr�ximo n�
} No;

//Tipo lista
typedef struct{
    No *inicio;
    int tam;
} Lista;

Pessoa criarPessoa();
void imprimiPessoa(Pessoa p);
Lista* criarLista();
void inserirInicio(Pessoa p, Lista *lista);
No* buscarNo(int mat, No *inicio);
void imprimirLista(No *inicio);
void inicializar();
int funcaoEspalhamento(int mat);
void inserirTabela();
Pessoa* buscarPessoaTabela(int mat);
void imprimirTabela();
int gravarEmArquivo();

// Tabela que � um vetor de ponteiros para listas
Lista *tabela[M];

Pessoa criarPessoa(){
    Pessoa p;
    printf("Digite o nome da pessoa: ");
    scanf("%*c");
    fgets(p.nome, 50, stdin);
    printf("Digite a matricula: ");
    scanf("%d", &p.matricula);
    return p;
}

//imprime pessoa
void imprimiPessoa(Pessoa p){
    printf("\tNome: %s\tMatricula: %d\n", p.nome, p.matricula);
}

// Criar lista vazia retornando seu endere�o
Lista* criarLista(){
    Lista *l = malloc(sizeof(Lista));
    l->inicio = NULL;
    l->tam = 0;
    return l;
}

//Inserir no in�cio da lista
void inserirInicio(Pessoa p, Lista *lista){
    No *no = malloc(sizeof(No));
    no->pessoa = p;
    no->proximo = lista->inicio;
    lista->inicio = no;
    lista->tam++;
}

//Buscar elemento na lista
No* buscarNo(int mat, No *inicio){
    while(inicio != NULL) {
        if(inicio->pessoa.matricula == mat)
            return inicio;
        else
            inicio = inicio->proximo;
    }
    return NULL; //Caso a m�tricula n�o for encontrada
}

void imprimirLista(No *inicio){
    while(inicio != NULL) {
        imprimiPessoa(inicio->pessoa);
        inicio = inicio->proximo;
    }
}

//Inicializa��o da tabela
void inicializar(){
    int i;
    for(i=0; i < M; i++)
        tabela[i] = criarLista();
}

//Funcao de espalhamento
int funcaoEspalhamento(int mat){
    return mat % M;
}

//Inserir pessoa na tabela
void inserirTabela(){
    Pessoa pes = criarPessoa();
    int indice = funcaoEspalhamento(pes.matricula);
    inserirInicio(pes, tabela[indice]);
}

//Buscar uma pessoa na tabela
Pessoa* buscarPessoaTabela(int mat){
    int indice = funcaoEspalhamento(mat);
    No *no = buscarNo(mat, tabela[indice]->inicio);
    if(no)
        return &no->pessoa;
    else
        return NULL;
}

//Imprimir tabela
void imprimirTabela(){
    int i;
    printf("\n-----------------Tabela---------------------\n");
    for(i=0; i < M; i++){
        printf("%d Lista tamanho: %d\n", i, tabela[i]->tam);
        imprimirLista(tabela[i]->inicio);
    }
    printf("----------------FIM Tabela--------------------\n");
}

int gravarEmArquivo(){
    FILE *ptrArq; //ponteiro para arquivo
    ptrArq = fopen("dadosTabela.bin","wb");

    if(ptrArq != NULL){
        fwrite(tabela, sizeof(Lista), M, ptrArq);
        return 1; //sucesso
    }
    else
        return 0; //fracasso
}

int main() {
    int opcao, mat, g;
    Pessoa *p;
    inicializar();

    do{
        printf("\n0 - Sair\n1 - Inserir nova Pessoa\n2 - Buscar\n3 - Imprimir tabela\n4 - Gravar dados em disco\n");
        scanf("%d", &opcao);
        switch(opcao){
        case 0:
            printf("Saindo...\n");
            break;
        case 1:
            inserirTabela();
            break;
        case 2:
            printf("Qual a matr�cula a ser buscada? ");
            scanf("%d", &mat);
            p = buscarPessoaTabela(mat);
            if(p) {
                printf("Pessoa encontrada: Matr�cula: %d\tNome: %s", p->matricula, p->nome);
            }
            else
                printf("Pessoa n�o encontrada!\n");
            break;
        case 3:
            imprimirTabela();
            break;
        case 4:
            g = gravarEmArquivo();
            if(g)
                printf("\nArquivo gravado com sucesso!\n");
            else
                printf("\nFalha ao gravar arquivo!\n");
            break;
        default:
            printf("Op��o Inv�lida!\n");
        }
    }while(opcao != 0);

    return 0;
}
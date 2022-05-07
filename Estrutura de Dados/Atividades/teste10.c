#include <stdio.h>

typedef struct {
    int ano;
    short mes;
    short dia;
} Data;

typedef struct{
   char ra[10];
   char nome[200];
   int notas[3];
   Data dtNascimento;
}Aluno; 


void capturarDadosAluno(Aluno *aluno){

    printf("\n\n--------- Incluir novo Aluno ---------\n\n");

    printf("Informe o RA: ");
    scanf("%s\n", aluno->ra);

    printf("Informe o nome: ");
    scanf("%s\n", aluno->nome);

    printf("Informe o dia de nascimento: ");
    scanf("%d\n", &aluno->dtNascimento.ano);

    printf("Informe o mes de nascimento: ");
    scanf("%hd\n", &aluno->dtNascimento.mes);

    printf("Informe o ano de nascimento: ");
    scanf("%d\n", &aluno->dtNascimento.ano);

    for (int i = 0; i < 3; i++)
    {
        printf("Informe a nota %d: ", i);
        scanf("%d\n", &aluno->notas[i]);
    }

};


void listaAlunosMedia(Aluno aluno[], int listaAlunosMedia){

    printf("\n\n--------- Media de Notas ---------\n\n");

    for (int i = 0; i < listaAlunosMedia; i++)
    {
        
        float mediaNotas = 0;

        for (int x = 0; x < 3; x++)
        {
            mediaNotas += aluno[i].notas[x];
        }

        mediaNotas = mediaNotas /3;

        printf("\nAluno %s média %f", aluno[i].nome, mediaNotas);
        
    }
    
};

void listaNomeFiltroAno(Aluno aluno[], int listaAlunosMedia){

    printf("\n\n--------- Filtro data de Nascimento ---------\n\n");

    Data dataFiltro;

    printf("Informe o dia: ");
    scanf("%hd\n", &dataFiltro.dia);

    printf("Informe o mes: ");
    scanf("%hd\n", &dataFiltro.mes);

    printf("Informe o ano: ");
    scanf("%d\n", &dataFiltro.ano);

    for (int i = 0; i < listaAlunosMedia; i++)
    {
        
        if(aluno[i].dtNascimento.ano >= dataFiltro.ano){

            if(aluno[i].dtNascimento.mes >= dataFiltro.mes){
                
                if(aluno[i].dtNascimento.dia >= dataFiltro.dia){
                    printf("\n Aluno %s nascido a partir de %d/%d/%d", aluno[i].nome, dataFiltro.dia, dataFiltro.mes, dataFiltro.ano);
                }
            }

        }

    }
    
};


int main(){

    int quantidadeAlunos = 20;
    int posicaoVetor =0;
    Aluno alunos[quantidadeAlunos];

    int opcao = 0;
    do
    {

        printf("Selecione a opção do Menu: \n");
        printf("1 - inserir um novo aluno: RA, nome, vetor com 3 notas e data de nascimento (use aninhamento de estruturas) \n");
        printf("2 - listar os nomes e as médias das notas de todos os alunos \n");
        printf("3 - listar os nomes dos alunos que nasceram depois de um certo ano \n");
        printf("0 - EXIT \n");

        printf("Digita a opção selecionada: ");
        scanf("%d\n", &opcao);

        if(opcao == 1){
            Aluno aluno;
            capturarDadosAluno(&aluno);
            alunos[posicaoVetor] = aluno;
            posicaoVetor++;
            
        }else if(opcao == 2){
            listaAlunosMedia(alunos, quantidadeAlunos);
        }else if (opcao == 3){
            listaNomeFiltroAno(alunos, quantidadeAlunos);
        }
        
    } while (opcao != 0);
    
}

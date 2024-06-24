/*Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura deve conter o nome do aluno,
o nome da disciplina e as notas do aluno em duas provas. Em seguida, leia os dados de três alunos e os armazena nessa estrutura. 
Por fim, exiba o nome do aluno, o nome da disciplina e a média dos alunos que foram aprovados com média igual ou superior a 6. */
#include <stdio.h>
typedef struct {
  char nome[35];
  char disciplina[35];
  float nota1;
  float nota2;
} alunos;

void lerDados(alunos aluno[]);
void ProcessaDados(alunos aluno[]);
void lerDados(alunos aluno[]){
  
  int i;
  for(i = 0; i < 3; i++){

    printf("Digite o nome do aluno: ");
    scanf(" %34[^\n]", aluno[i].nome);

    printf("Digite o nome da disciplina: ");
    scanf(" %34[^\n]", aluno[i].disciplina);

    printf("Digite a nota 1: ");
    scanf(" %f",&aluno[i].nota1);

    printf("Digite a nota 2: ");
    scanf(" %f",&aluno[i].nota2);

  }
}
void ProcessaDados(alunos aluno[]){
  int i;
  float media;
  for(i=0; i<3; i++){

    media = (aluno[i].nota1 + aluno[i].nota2)/2;

    if(media >= 6){
      printf("\nDICIPLINA %s APROVADO! \nAluno: %s\nMÉDIA = %.2f\nNOTA 1 = %.2f\nNOTA 2 = %.2f", aluno[i].disciplina, aluno[i].nome, media, aluno[i].nota1, aluno[i].nota2);
    }
  else {
    printf("\nDICIPLINA %s REPROVADO! \nAluno: %s\nMÉDIA = %.2f\nNOTA 1 = %.2f\nNOTA 2 = %.2f", aluno[i].disciplina, aluno[i].nome, media, aluno[i].nota1, aluno[i].nota2);
    printf("MELHORE!");
  }

  }
}

int main() {
  alunos aluno[3];
  
  lerDados(aluno);
  
  ProcessaDados(aluno);
  
  return 0;
}

 /*Aplique modularização no código do último exemplo desta aula. Crie módulos para entrada,
processamento e saída dos dados.*/

 #include <stdio.h>
 #include <string.h>
 
 typedef struct{
  
   char nome[35];
   float nota1, nota2;
} Aluno;

 Aluno lerDados(Aluno aluno);
 
  Aluno lerDados(Aluno aluno){
  	float media;
 	
 	printf("Qual o seu nome:");
 	 fgets(aluno.nome, 34, stdin);
 	  aluno.nome[strcspn(aluno.nome, "\n")] = '\0';
 	  
	   printf("Qual a sua primeira nota:");
        scanf(" %f", &aluno.nota1);
        
        printf("Qual a sua primeira nota:");
         scanf(" %f", &aluno.nota2);
       
    return aluno;
 }
 
 int main(){
 	
 Aluno aluno;
 float media;
 
 aluno = lerDados(aluno);
 
   media = (aluno.nota1 + aluno.nota2)/ 2;
 
  printf("A media das notas [%.1f] [%.1f] igual a [%.2f]", aluno.nota1, aluno.nota2, media);
 
 return 0;
}

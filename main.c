#include <stdio.h>

int main() {
  int opcao;
  do{
    printf("\nMenu Principal\n");
    printf("1 - Criar tarefa\n");
    printf("2 - Deletar tarefas\n");
    printf("3 - Listar tarefa\n");
    printf("0 - Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);
    printf("Opção escolhida: %d\n", opcao);    
  } while(opcao != 0);
    
    
  
}
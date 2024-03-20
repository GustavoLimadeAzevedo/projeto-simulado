typedef struct Tarefa{
 int prioridade;
 char categoria[100];
 char descricao[300];

} Tarefa;

typedef enum Erro{
OK, ABRIR, FECHAR, LER, ESCREVER, MAX_TAREFAS, SEM_TAREFAS, NAO_ENCONTRADO
} Erro;

Erro criar_tarefa(Tarefa t[], int *pos);
Erro deletar_tarefa(Tarefa t[], int *pos);
Erro listar_tarefas(Tarefa t[], int pos);

Erro salvar_tarefas(Tarefa t[], int pos, int tamanho);
Erro carregar_tarefas(Tarefa t[], int *pos, int tamanho);
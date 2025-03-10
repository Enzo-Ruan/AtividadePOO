// Sobre a seguinte estrutura:

// Crie um programa em C a partir da seguinte estrutura:

//typedef struct Aluno {

    //char nome[100];
    //int faltas;
    //float nota;
    //struct Aluno *prox;

//}aluno_t;

//aluno_t *aluno_root;

// R:

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Aluno {
    char nome[100];
    int faltas;
    float nota;
    struct Aluno *prox; 
} aluno_t;

aluno_t* criar_aluno(const char* nome, int faltas, float nota) {
    aluno_t* novo_aluno = (aluno_t*)malloc(sizeof(aluno_t));
    
    if (novo_aluno == NULL) {
        printf("Erro ao alocar memória para o aluno.\n");
        exit(1); 
    }
    
    strncpy(novo_aluno->nome, nome, sizeof(novo_aluno->nome) - 1);
    novo_aluno->nome[sizeof(novo_aluno->nome) - 1] = '\0'; 
    novo_aluno->faltas = faltas;
    novo_aluno->nota = nota;
    novo_aluno->prox = NULL;  

    return novo_aluno;
}

void inserir_aluno(aluno_t **aluno_root, const char* nome, int faltas, float nota) {
    aluno_t *novo_aluno = criar_aluno(nome, faltas, nota);
    
    if (*aluno_root == NULL) {
       
        *aluno_root = novo_aluno;
    } else {
        
        aluno_t *temp = *aluno_root;
        while (temp->prox != NULL) {
            temp = temp->prox;
        }
        
        temp->prox = novo_aluno;
    }
}

void exibir_alunos(aluno_t* aluno_root) {
    aluno_t *temp = aluno_root;
    while (temp != NULL) {
        printf("Nome: %s\n", temp->nome);
        printf("Faltas: %d\n", temp->faltas);
        printf("Nota: %.2f\n", temp->nota);

        if (temp->nota >= 6.0) {
            printf("Status: Aprovado\n");
        } else {
            printf("Status: Reprovado\n");
        }
        printf("\n");

        temp = temp->prox; 
    }
}

void liberar_lista(aluno_t* aluno_root) {
    aluno_t *temp;
    while (aluno_root != NULL) {
        temp = aluno_root;
        aluno_root = aluno_root->prox;
        free(temp);  
    }
}

int main() {
    aluno_t *aluno_root = NULL;  

    inserir_aluno(&aluno_root, "João Silva", 2, 7.5);
    inserir_aluno(&aluno_root, "Maria Oliveira", 3, 5.4);
    inserir_aluno(&aluno_root, "Carlos Santos", 0, 8.0);

    printf("Lista de Alunos:\n");
    exibir_alunos(aluno_root);

    liberar_lista(aluno_root);

    return 0;
}

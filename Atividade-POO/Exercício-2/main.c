#include <stdio.h>

int main() {

    float nota;
    int frequencia;

    printf("Digite a nota do estudante: ");
    scanf("%f", &nota);
    
    printf("Digite a frequência do estudante (em porcentagem): ");
    scanf("%d", &frequencia);
    
    if (nota >= 7.0 && frequencia >= 75) {
        printf("Estudante aprovado!\n");
    } else {
        printf("Estudante reprovado.\n");
    }
    
    return 0;
}

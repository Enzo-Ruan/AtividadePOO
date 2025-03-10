#include <stdio.h> //funçôes de entrada e saída de dados

int main(){
    int i;

    i = 0;

    //while verifica primeiro, depois executa
    while(i<10) {

        printf("while: %d\n", i);
        i++;
    }

    //do executa, depois verifica
    do{
        
        printf("do:%d\n",i);
        i++;

    }while(i< 10);

return 0;

}

// a) Qual a saída do programa acima?
// R: O while imprime valores de 0 a 9 (executa 10 vezes). O do-while executa pelo menos uma vez, imprimindo do: 10, mesmo que a condição já seja falsa.

// b) Qual a diferença entre o while e do do.while?
// R: while: A condição é verificada antes de executar o bloco de código. Se a condição for falsa desde o início, o código dentro do laço pode não ser executado nem uma vez.
// do...while: A diferença principal é que a condição é verificada após a execução do bloco de código. Isso significa que o bloco de código será executado pelo menos uma vez, independentemente da condição ser verdadeira ou falsa.

// c) Como fica a implementação do bloco
// R: A implementação do bloco de código em um laço while ou do...while é basicamente a mesma, o que muda é a forma como a condição de parada é verificada e quando o laço é executado.

// d) Qual a diferença entre while e for? Quando usar um ou outro?
// R: A principal diferença entre while e for está no tipo de controle e no cenário em que cada um é mais adequado de ser usado. Vou explicar melhor:
// 1. Laço while:
// O laço while é mais genérico e funciona enquanto a condição for verdadeira. Ou seja, ele só executa o bloco de código enquanto a condição especificada for atendida. A condição é verificada antes de cada execução.
// 2. Laço for:
// O laço for é mais estruturado e é ideal para quando você sabe de antemão quantas vezes o laço precisa ser repetido. Ele combina a definição de uma variável de controle, a condição e o incremento (ou decremento) em uma única linha.


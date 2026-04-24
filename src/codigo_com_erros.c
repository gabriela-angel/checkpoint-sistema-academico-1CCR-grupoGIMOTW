//Alteramos as aspas pelas setas no include
#include <stdio.h>

//Colocamos os pontos e vírgulas onde estava faltando
int main() {
    float nota1, nota2, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2); //Adiciona o '&'
//Parênteses nas variáveis de soma
    media = (nota1 + nota2) / 2;
//Arrumamos as condições
    if (5 <= media) {
        printf("Aluno aprovado\n");
    } else {
        printf("Aluno reprovado\n");
    }

    return 0;
}
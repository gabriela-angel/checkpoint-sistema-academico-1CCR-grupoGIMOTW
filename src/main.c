#include<stdio.h>

void calculo_media(void){

    int nota1, nota2, media; // Essas são as variáveis utilizadas para o cálculo da média

    media = (nota1 + nota2) / 2; // Para calcular a média, as notas são somadas e divididas por 2
}

void parte_3(void) {
/* 
O sistema deverá conter uma opção para calcular a derivada de uma função simples do tipo:
f(x) = ax² + bx + c
O programa deverá receber os coeficientes:
a
b
c
E apresentar a derivada correspondente:
f'(x) = 2ax + b
Exemplo
Entrada:
a = 2
b = 3
c = 1
Saída:
f'(x) = 4x + 3
*/

int a, b, c;

printf("a: \n");
scanf("%d", &a);

printf("b: \n");
scanf("%d", &a);

printf("c: \n");
scanf("%d", &a);

int derivada = (2 * a * x) + b;
}

int main() {
    
    int opcao;
    
    printf("========================= \n");
    printf("= SISTEMA EQUIPE GIMOTW =\n");
    printf("=========================\n");

    
    printf("1 - INSERIR NOTAS\n2 - CALCULAR MEDIAS\n3 - VERIFICAR SITUACAO\n4 - EXIBIR RESULTADO\n5 - CALCULAR DERIVADA\n5 - CALCULAR DERIVADA\n6 - SAIR\nDigite a opcao desejada: ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1: // INSERIR NOTAS
        break;

        case 2: // CALCULAR MEDIAS
        break;

        case 3: // VERIFICAR SITUACAO
        break;

        case 4: // EXIBIR RESULTADO
        break;

        case 5: // CALCULAR DERIVADA
        break;

        case 6: // SAIR
        break;

        default:
        printf("OPCAO INVALIDA ");
    }
    
    return 0;
}
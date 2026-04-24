#include <stdio.h>

float nota1 = -1;
float nota2 = -1;
float media = -1;
int situacao = -1;
int nova_nota_inserida = 0;

void calculo_media(void){
    if (nota1 == -1 || nota2 == -1) {
        printf("NOTAS NAO INSERIDAS\n");
        return;
    }

    media = (nota1 + nota2) / 2; // Para calcular a média, as notas são somadas e divididas por 2
}

void calcula_derivada(void) {
    int a, b, c;
    
    printf("a: \n");
    scanf("%d", &a);
    
    printf("b: \n");
    scanf("%d", &b);
    
    printf("c: \n");
    scanf("%d", &c);
    
    if (b >= 0)
        printf("f'(x) = %dx + %d", (2 * a), b);
    else
        printf("f'(x) = %dx - %d", (2 * a), -b);
}

int verificar_situacao() {
    if (media == -1 || nova_nota_inserida) {
        calculo_media();
        nova_nota_inserida = 0;
    }
    if (media >= 6) {
        printf("APROVADO\n");
        return 0;
    }
    else if (media >= 0) {
        printf("REPROVADO\n");
        return 1;
    }
    return -1;
}

void inserir_notas() {
    printf("Nota 1: ");
    scanf("%f", &nota1);
    
    printf("Nota 2: ");
    scanf("%f", &nota2);
    nova_nota_inserida = 1;
}

void exibir_resultado() {    
    printf("\n===== RESULTADO =====\n");
    
    if (nota1 == -1 || nota2 == -1)
        inserir_notas();
    printf("Nota 1: %.2f\n", nota1);
    printf("Nota 2: %.2f\n", nota2);

    if (media == -1 || nova_nota_inserida)
        calculo_media();
    printf("Media: %.2f\n", media);
   
    printf("Situacao: ");
    if (situacao == -1 || nova_nota_inserida) {
        situacao = verificar_situacao();
        nova_nota_inserida = 0;
    }
    else if (situacao == 0)
        printf("APROVADO\n");
    else
        printf("REPROVADO\n");
}

int main() {
    
    int opcao;

    while(opcao != 6){
        printf("\n========================= \n");
        printf("= SISTEMA EQUIPE GIMOTW =\n");
        printf("=========================\n");
        printf("1 - INSERIR NOTAS\n2 - CALCULAR MEDIAS\n3 - VERIFICAR SITUACAO\n4 - EXIBIR RESULTADO\n5 - CALCULAR DERIVADA\n6 - SAIR\nDigite a opcao desejada: ");

        if (scanf("%d", &opcao) != 1) {
            printf("OPCAO INVALIDA\n");
            while(getchar() != '\n')
                continue;
            continue;
        }

        switch(opcao){
            case 1: // INSERIR NOTAS
                inserir_notas();
                break;

            case 2: // CALCULAR MEDIAS
                calculo_media();
                if (media != -1)
                    printf("Média: %.2f", media);
                break;

            case 3:  
                verificar_situacao();
                break;

            case 4: 
                exibir_resultado();
                break;

            case 5: // CALCULAR DERIVADA
                calcula_derivada();
                break;

            case 6:
                printf("FINALIZANDO...\n");
                break;

            default:
                printf("OPCAO INVALIDA\n");
        }
    }
    return 0;
}
#include<stdio.h>

void calculo_media(void){

    int nota1, nota2, media; // Essas são as variáveis utilizadas para o cálculo da média

    media = (nota1 + nota2) / 2; // Para calcular a média, as notas são somadas e divididas por 2
}

void parte_3(void) {
    int a, b, c;
    
    printf("a: \n");
    scanf("%d", &a);
    
    printf("b: \n");
    scanf("%d", &b);
    
    printf("c: \n");
    scanf("%d", &c);
    
    if (b >= 0)
        print("f'(x) = %dx + b", (2 * a), b);
    else
        print("f'(x) = %dx - b", (2 * a), -b);
}

int main() {
    
    int opcao;
    
    printf("========================= \n");
    printf("= SISTEMA EQUIPE GIMOTW =\n");
    printf("=========================\n");

    while(opcao != 6){
        printf("1 - INSERIR NOTAS\n2 - CALCULAR MEDIAS\n3 - VERIFICAR SITUACAO\n4 - EXIBIR RESULTADO\n5 - CALCULAR DERIVADA\n6 - SAIR\nDigite a opcao desejada: ");
        
        if (scanf("%d", &opcao) != 1) {
        printf("OPCAO INVALIDA\n");
        while(getchar() != '\n'); 
        continue;
        }
    
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

            case 6:
            printf("FINALIZANDO...\n");
            break;

            default:
            printf("OPCAO INVALIDA\n");
            break;

        }
    }
    return 0;
}

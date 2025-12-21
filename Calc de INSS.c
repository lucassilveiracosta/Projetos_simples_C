#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h> //Contribuintes individuais, autonomos e facultativos ---> fazer calculo das exceções!!

int main(void)
{
    char sair = 's';
    float salario;
    float INSS;
    char nome[40];
    int grupo, subgrupo;
    printf("\n***Calculo do INSS 2025***");
    printf("\nBem vindo ao sistema de calculo de INSS!");

    printf("\n\nDigite aqui o seu nome completo\n> ");
    fgets(nome, 40, stdin);

    int tam = strlen(nome);
    if(nome[tam - 1] == '\n')
    {
        nome[tam - 1] = '\0'; // Reajuste do \n
    }

    printf("A qual grupo voce pertence?\n1. > ");
    scanf(" %i", &grupo);

    if(grupo == 1)
    {
        // CLT, Empregado doméstico e trabalhadores avulso.

        printf("\nDigite aqui o seu salario\n> "); //Input do salario
        scanf("%f", &salario);
        getchar();

        float salario_calc = salario;

        if(salario_calc <= 1518.00)
        {
            INSS = salario_calc * 0.075;  // 113,85
        }
        else if(salario_calc > 1518.00 && salario_calc <= 2793.88)
        {
            salario_calc = salario_calc - 1518;
            INSS = salario_calc * 0.09;   // 228,68
            INSS = INSS + 113.85;
        }
        else if(salario_calc > 2793.88 && salario_calc <= 4190.83)
        {
            salario_calc = salario_calc - 2793.88;
            INSS = salario_calc * 0.12;   // 373,26
            INSS = INSS + 228.68;
        }
        else if(salario_calc > 4190.83 && salario_calc <= 8157.41)
        {
            salario_calc = salario_calc - 4190.83;
            INSS = salario_calc * 0.14;   // 650,11
            INSS = INSS + 396.32;
        }
        else if(salario_calc > 8157.41)
        {
            INSS = 951.77;
        }


        printf("\nResultado do calculo do INSS de %s:\nValor a ser descontado: R$ %.2f\nSalario atual: R$ %.2f\n\nSalario liquido: R$ %.2f", nome, INSS, salario, salario - INSS);

        printf("\n\nVoce deseja calcular outro INSS?\ns - sim\nn - nao\n> ");
        scanf(" %c", &sair);

        system("cls");
            
    }
    else if(grupo == 2) //Contribuintes individuais, autonomos e facultativos
    {
        printf("\nNesse grupo, qual voce se enquadra?\n1.\n2.\n3.\n> ");
        scanf("%i", &subgrupo);
        
        switch(subgrupo)
        {
            case 1:
                printf("\nVoce selecionou a opcao do Plano Normal");
                printf("\nDigite aqui o seu salario\n> "); //Input do salario
                scanf("%f", &salario);
                getchar();

                if(salario >= 1518.00 && salario <= 8157.41)
                {
                    INSS = salario_calc * 0.2;
                }
                else
                {
                    printf("Voce nao pode participar do Plano Normal.");
                }
            break;
            case 2:
                printf("Voce selecionou a opcao do Plano Simplificado");
                printf("Digite aqui o seu salario\n> ");
                scanf("%f", &salario);
                getchar();
                float salario_calc = salario;

                if(salario == 1518.00)
                {
                    INSS = salario_calc * 0.11;
                }
                else
                {
                    printf("Voce nao pode participar do Plano Simplificado")
                }
            break;
            case 3:
                printf("Voce selecionou o Plano de Baixa Renda ou MEI");
            break;
            default:;
        }
    }
}
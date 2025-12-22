#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h> 


void printarResultados(char* nome, float INSS, float salario)
{
    printf("\nResultado do calculo do INSS de %s:\nValor a ser descontado: R$ %.2f\nSalario atual: R$ %.2f\n\nSalario liquido: R$ %.2f", nome, INSS, salario, salario - INSS);

}

void sairWhile(char *sair)
{
    printf("\n\nVoce deseja calcular outro INSS?\ns - sim\nn - nao\n> ");
    scanf(" %c", sair);
    
}

int main(void)
{
    char sair = 'n';
    do
    {
        int verificador = 0;
        float salario;
        float INSS;
        char nome[40];
        int grupo, subgrupo;
        float salario_calc;

        printf("\n***Calculo do INSS 2025***");
        printf("\nBem vindo ao sistema de calculo de INSS!");

        printf("\n\nDigite aqui o seu nome completo\n> ");
        fgets(nome, 40, stdin);

        int tam = strlen(nome);
        if(nome[tam - 1] == '\n')
        {
            nome[tam - 1] = '\0'; // Reajuste do \n
        }

        printf("\nA qual plano voce pertence?\n1. Plano Progressivo\n2. Plano Normal, Plano Simplificado e Plano de Baixa Renda ou MEI\n> ");
        scanf(" %i", &grupo);

        if(grupo == 1)
        {
            // CLT, Empregado doméstico e trabalhadores avulso.
            printf("\nVoce selecionou o Plano Progressivo");
            printf("\nDigite aqui o seu salario\n> "); //Input do salario
            scanf("%f", &salario);
            getchar();

            salario_calc = salario;

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

            system("cls");
            
            printarResultados(nome, INSS, salario);
            
            sairWhile(&sair);
            system("cls");
                
        }
        else if(grupo == 2) 
        {
            //Contribuintes individuais, autonomos e facultativos

            printf("\nNesse grupo, qual voce se enquadra?\n1. Plano Normal\n2. Plano Simplificado\n3. Plano de Baixa Renda ou MEI\n> ");
            scanf("%i", &subgrupo);
            
            switch(subgrupo)
            {
                case 1:
                    printf("\nVoce selecionou a opcao do Plano Normal");
                    printf("\nDigite aqui o seu salario\n> "); //Input do salario
                    scanf("%f", &salario);
                    getchar();
                    salario_calc = salario;

                    if(salario >= 1518.00 && salario <= 8157.41)
                    {
                        INSS = salario_calc * 0.2;
                        system("cls");
                    }
                    else if(salario < 1518.00)
                    {
                        system("cls");
                        printf("Voce nao pode participar do Plano Normal.");
                        verificador = 1;
                    }
                    else if(salario > 8157.00)
                    {
                        INSS = 8157.00 * 0.2;
                        system("cls");
                    }

                break;
                case 2:
                    printf("\nVoce selecionou a opcao do Plano Simplificado");
                    printf("\nDigite aqui o seu salario\n> ");
                    scanf("%f", &salario);
                    getchar();
                    salario_calc = salario;

                    if(salario == 1518.00)
                    {
                        INSS = salario_calc * 0.11;
                        system("cls");
                    }
                    else
                    {
                        system("cls");
                        printf("\nVoce nao pode participar do Plano Simplificado");
                        verificador = 1;
                    }

                break;
                case 3:
                    printf("\nVoce selecionou o Plano de Baixa Renda ou MEI");
                    printf("\nDigite aqui o seu salario\n> ");
                    scanf("%f", &salario);
                    getchar();
                    salario_calc = salario;

                    if(salario == 1518.00)
                    {
                        INSS = salario_calc * 0.05;
                        system("cls");
                    }
                    else
                    {
                        system("cls");
                        printf("\nVoce nao pode participar do Plano de Baixa Renda ou MEI");
                        verificador = 1;
                    }

                break;
                default:
                    printf("Opcao invalida!");
            }

            
            if(verificador == 0)
            {
                system("cls");
                printarResultados(nome, INSS, salario);
            }

            sairWhile(&sair);
            system("cls");
        }

    }while(sair == 's');
}
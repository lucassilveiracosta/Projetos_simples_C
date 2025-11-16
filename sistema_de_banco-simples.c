#include <stdio.h>fe
#include <time.h>

typedef struct
{
    char numeros[30];
    float saldo;   
} Contas;

void main()
{
    int continuar = 1;
    int opcao;
    
    Contas conta[4];


    conta[0].saldo = 0;
    conta[1].saldo = 0;
    conta[2].saldo = 0;
    conta[3].saldo = 0;

    int stop = 1, validacao;
    do
    {
        int num, n;
        printf("\n\nDigite o numero da sua conta\n> ");
        scanf("%i", &num);

        if(num == 9999)
        {
            system("cls");
            break;
        }


        float creditar, debitar, transferir;
        switch(num)
        {
            case 123:
                while(stop != 0)
                {
                    conta[0].numeros[30] = '123';
                    printf("\n***MENU***");
                    printf("\n1. Creditar");
                    printf("\n2. Debitar");
                    printf("\n3. Transferir");
                    printf("\n4. Imprimir\n> ");
                    scanf("%i", &opcao);
                    
                    switch(opcao)
                    {
                        case 1:
                            printf("\nQuanto voce deseja creditar na conta?\n> ");
                            scanf("%f", &creditar);
                            conta[0].saldo = conta[0].saldo + creditar;
                        break;
                        case 2:
                            printf("\nQuanto voce deseja debitar da conta?\n> ");
                            scanf("%f", &debitar);
                            conta[0].saldo = conta[0].saldo - debitar;
                        break;
                        case 3:
                            printf("\nPara que conta voce deseja transferir?\n> ");
                            scanf("%i", &num);
                            if(num != 123)
                            {
                                switch(num)
                                {
                                    case 456:
                                        n = 1;
                                    break;
                                    case 789:
                                        n = 2;
                                    break;
                                    case 159:
                                        n = 3;
                                    break;
                                    default:
                                        printf("Opcao invalida.");
                                }
                                printf("\nQuanto voce deseja transferir?\n> ");
                                scanf("%f", &transferir);
                                conta[0].saldo = conta[0].saldo - transferir;
                                conta[n].saldo = conta[n].saldo + transferir;
                            }
                            else
                            {
                                printf("\nVoce nao pode transferir para voce mesmo!");
                            } 
                        break;
                        case 4:
                            printf("\nO seu saldo eh R$ %.2f", conta[0].saldo);
                        break;
                        default:
                            printf("\nOpcao invalida.");
                    }

                    printf("\nDeseja continuar nessa conta?\n1 - Sim\n2 - Nao\n> ");
                    scanf("%i", &validacao);

                    if(validacao == 2)
                    {
                        stop = 0;
                    }
                }
            break;
            case 456:
                while(stop != 0)
                {
                    conta[1].numeros[30] = '456';
                    printf("\n***MENU***");
                    printf("\n1. Creditar");
                    printf("\n2. Debitar");
                    printf("\n3. Transferir");
                    printf("\n4. Imprimir\n> ");
                    scanf("%i", &opcao);

                    switch(opcao)
                    {
                        case 1:
                            printf("\nQuanto voce deseja creditar na conta?\n> ");
                            scanf("%f", &creditar);
                            conta[1].saldo = conta[1].saldo + creditar;
                        break;
                        case 2:
                            printf("\nQuanto voce deseja debitar da conta?\n> ");
                            scanf("%f", &debitar);
                            conta[1].saldo = conta[1].saldo - debitar;
                        break;
                        case 3:
                            printf("\nPara que conta voce deseja transferir?\n> ");
                            scanf("%i", &num);
                            if(num != 456)
                            {
                                switch(num)
                                {
                                    case 123:
                                        n = 0;
                                    break;
                                    case 789:
                                        n = 2;
                                    break;
                                    case 159:
                                        n = 3;
                                    break;
                                    default:
                                        printf("Opcao invalida.");
                                }
                                printf("\nQuanto voce deseja transferir?\n> ");
                                scanf("%f", &transferir);
                                conta[1].saldo = conta[1].saldo - transferir;
                                conta[n].saldo = conta[n].saldo + transferir;
                            }
                            else
                            {
                                printf("\nVoce nao pode transferir para voce mesmo!");
                            }  
                        break;
                        case 4:
                            printf("\nO seu saldo eh R$ %.2f", conta[1].saldo);
                        break;
                        default:
                            printf("\nOpcao invalida.");
                    }
                    printf("\nDeseja continuar nessa conta?\n1 - Sim\n2 - Nao\n> ");
                    scanf("%i", &validacao);

                    if(validacao == 2)
                    {
                        stop = 0;
                    }
                }
            break;
            case 789:
                while(stop != 0)
                {
                    conta[2].numeros[30] = '789';
                    printf("\n***MENU***");
                    printf("\n1. Creditar");
                    printf("\n2. Debitar");
                    printf("\n3. Transferir");
                    printf("\n4. Imprimir\n> ");
                    scanf("%i", &opcao); 

                    switch(opcao)
                    {
                        case 1:
                            printf("\nQuanto voce deseja creditar na conta?\n> ");
                            scanf("%f", &creditar);
                            conta[2].saldo = conta[2].saldo + creditar;
                        break;
                        case 2:
                            printf("\nQuanto voce deseja debitar da conta?\n> ");
                            scanf("%f", &debitar);
                            conta[2].saldo = conta[2].saldo - debitar;
                        break;
                        case 3:
                            printf("\nPara que conta voce deseja transferir?\n> ");
                            scanf("%i", &num);
                            if(num != 789)
                            {
                                switch(num)
                                {
                                    case 123:
                                        n = 0;
                                    break;
                                    case 456:
                                        n = 1;
                                    break;
                                    case 159:
                                        n = 3;
                                    break;
                                    default:
                                        printf("\nOpcao invalida.");
                                }
                                printf("\nQuanto voce deseja transferir?\n> ");
                                scanf("%f", &transferir);
                                conta[2].saldo = conta[2].saldo - transferir;
                                conta[n].saldo = conta[n].saldo + transferir;
                            }
                            else
                            {
                                printf("\nVoce nao pode transferir para voce mesmo!");
                            } 
                        break;
                        case 4:
                            printf("\nO seu saldo eh R$ %.2f", conta[2].saldo);
                        break;
                        default:
                            printf("\nOpcao invalida.");
                    }
                    printf("\nDeseja continuar nessa conta?\n1 - Sim\n2 - Nao\n> ");
                    scanf("%i", &validacao);

                    if(validacao == 2)
                    {
                        stop = 0;
                    }
                }
            break;
            case 159:
                while(stop != 0)
                {
                    conta[3].numeros[30] = '159';
                    printf("\n***MENU***");
                    printf("\n1. Creditar");
                    printf("\n2. Debitar");
                    printf("\n3. Transferir");
                    printf("\n4. Imprimir\n> ");
                    scanf("%i", &opcao); 

                    switch(opcao)
                    {
                        case 1:
                            printf("\nQuanto voce deseja creditar na conta?\n> ");
                            scanf("%f", &creditar);
                            conta[3].saldo = conta[3].saldo + creditar;
                        break;
                        case 2:
                            printf("\nQuanto voce deseja debitar da conta?\n> ");
                            scanf("%f", &debitar);
                            conta[3].saldo = conta[3].saldo - debitar;
                        break;
                        case 3:
                            printf("\nPara que conta voce deseja transferir?\n> ");
                            scanf("%i", &num);
                            if(num != 159)
                            {
                                switch(num)
                                {
                                    case 123:
                                        n = 0;
                                    break;
                                    case 456:
                                        n = 1;
                                    break;
                                    case 789:
                                        n = 2;
                                    break;
                                    default:
                                        printf("\nOpcao invalida.");
                                }
                                printf("\nQuanto voce deseja transferir?\n> ");
                                scanf("%f", &transferir);
                                conta[3].saldo = conta[3].saldo - transferir;
                                conta[n].saldo = conta[n].saldo + transferir;
                            }
                            else
                            {
                                printf("\nVoce nao pode transferir para voce mesmo!");
                            }  
                        break;
                        case 4:
                            printf("\nO seu saldo eh R$ %.2f", conta[3].saldo);
                        break;
                        default:
                            printf("\nOpcao invalida.");
                    }
                    printf("\nDeseja continuar nessa conta?\n1 - Sim\n2 - Nao\n> ");
                    scanf("%i", &validacao);

                    if(validacao == 2)
                    {
                        stop = 0;
                    }
                }
            break;
        }
        stop = 1;
    }while(continuar != 0);
}

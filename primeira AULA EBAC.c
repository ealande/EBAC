#include <stdio.h> //biblioteca de comunicação com o usuário
#include <stdlib.h>//biblioteca responsável pela alocação de memória
#include <locale.h> //biblioteca de alocações de texto por região

int main (){
    int opcao=0;//Definindo variáveis
    int laco=1;

    for (laco=1;laco=1;)
    {
    system ("clear");
    
    setlocale (LC_ALL, "Portuguese");//Definindo a linguagem

    printf ("\t###Cartório da EBAC###\n");//início do menu
    printf ("\nESCOLHA A OPÇÃO DO MENU:\n\n");
    printf ("\t1 - Registrar Nomes\n");
    printf ("\t2 - Consultar nomes\n");
    printf ("\t3 - Deletar nomes\n\n");
    printf ("\nDigite sua opção:"); //fim do menu

    scanf ("%d", &opcao);
    
    system ("clear"); //comando do linux
    
    switch (opcao)
    {
        case 1:
        printf ("Você escolheu o registro de nomes!\n");
        system ("pause");
        break;

        case 2:
        printf ("Você escolheu Consultar Nomes!\n");
        system ("pause");
        break;
        
        case 3:
        printf ("Você escolheu Deletar nomes!\n");
        system ("pause");
        break;

        default:
        printf ("\nEsta opção não está disponível.\n");
        system ("pause");
        break;
    }
    }
}
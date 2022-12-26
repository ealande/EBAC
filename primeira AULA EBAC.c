#include <stdio.h> //biblioteca de comunica��o com o usu�rio
#include <stdlib.h>//biblioteca respons�vel pela aloca��o de mem�ria
#include <locale.h> //biblioteca de aloca��es de texto por regi�o
#include <string.h> //biblioteca respons?vel por cuidar das strings
int registro(){//fun��o respons�vel por cadastrar os usu�rios do sistema
	setlocale(LC_ALL, "Portuguese");
	//in�cio cria��o das vari�veis/strings
    char arquivo [40];
	char cpf [40];
    char nome [40];
    char sobrenome [40];
    char cargo [40];
    //final da cria��o das vari�veis/strings
    
    printf ("Digite o CPF a ser cadastrado:"); //coletando informa��o do usu�rio
    scanf ("%s", cpf);//%s refere-se � string
    
    strcpy(arquivo, cpf); //respons�vel por copiar os valores das string
    
    FILE *file; //cria arquivo
    file = fopen(arquivo, "w"); //cria arquivo
    fprintf(file,cpf); //salvo o valor da vari�vel
    fclose(file); //fecha o arquivo
    
    file = fopen (arquivo, "a");
    fprintf (file, ",");
    fclose (file);
    
    printf ("Digite o nome a ser cadastrado:");
    scanf ("%s", nome);
    
    file = fopen (arquivo, "a");
    fprintf(file, nome);
    fclose(file);
    
    file = fopen (arquivo, "a");
    fprintf (file, ",");
    fclose (file);
    
    printf("Digite o sobrenome a ser cadastrado:");
    scanf ("%s", sobrenome);
    
    file = fopen(arquivo, "a");
    fprintf(file,sobrenome);
    fclose(file);
    
    file = fopen (arquivo, "a");
    fprintf (file, ",");
    fclose (file);
    
    printf("Digite o cargo a ser cadastrado: ");
    scanf ("%s",cargo);
    
    file = fopen (arquivo, "a");
    fprintf (file,cargo);
    fclose(file);
    
    system ("pause");
    
}
int consulta () {
	setlocale(LC_ALL, "Portuguese");
	
	char cpf[40];
	char conteudo [200];
	
	printf("Digite o CPF a ser consultado:\n");
	scanf ("%s", cpf);
	
	FILE *file;
	file = fopen(cpf, "r");
	
	if(file == NULL){
		printf ("N�o foi poss�vel o arquivo, n�o foi localizado!\n");
}
	
	while(fgets(conteudo, 200, file) !=NULL){
		printf("\nEssas s�o as informa��es do usu�rio: ");
		printf("%s", conteudo);
		printf("\n\n");
	}
	system ("pause");
}

int deletar (){
    char cpf [40];
    printf ("Digite o CPF a ser deletado:\n");
    scanf ("%s",cpf);
    
    remove(cpf);
    
    FILE *file;
    file = fopen(cpf,"r");

    if(file == NULL) {
        printf ("Usu�rio n�o se encontra no sistema!\n");
        system ("pause");
    }
    if(file != NULL) {
        printf ("Usu�rio deletado com sucesso!\n");
        system ("pause");
    }

}
int main (){
    int opcao=0;//Definindo vari�veis
    int laco=1;

    for (laco=1;laco=1;)
    {
	system ("cls");
    setlocale (LC_ALL, "Portuguese");//Definindo a linguagem

    printf ("\t###Cart�rio da EBAC###\n");//in�cio do menu
    printf ("\nESCOLHA A OP��O DO MENU:\n\n");
    printf ("\t1 - Registrar Nomes\n");
    printf ("\t2 - Consultar nomes\n");
    printf ("\t3 - Deletar nomes\n\n");
    printf ("\nDigite sua op��o:"); //fim do menu

    scanf ("%d", &opcao);

    system ("cls");//respons�vel por liimpar a tela ao final da opera��o
    
    switch (opcao)
    {
        case 1:
        registro();
        break;

        case 2:
        consulta();
        break;
        
        case 3:
       	deletar ();
        break;
		

        default:
        printf ("\nEsta op��o n�o est� dispon�vel.\n");
        system ("pause");
        break;
    }
    }
}



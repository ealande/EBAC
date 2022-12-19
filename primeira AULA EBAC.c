#include <stdio.h> //biblioteca de comunicação com o usuário
#include <stdlib.h>//biblioteca responsável pela alocação de memória
#include <locale.h> //biblioteca de alocações de texto por região
#include <string.h> //biblioteca respons?vel por cuidar das strings
int registro(){
	setlocale(LC_ALL, "Portuguese");
	
    char arquivo [40];
	char cpf [40];
    char nome [40];
    char sobrenome [40];
    char cargo [40];
    
    printf ("Digite o CPF a ser cadastrado:");
    scanf ("%s", cpf);
    
    strcpy(arquivo, cpf); //respons?vel por copiar os valores das string
    
    FILE *file; //cria arquivo
    file = fopen(arquivo, "w"); //cria arquivo
    fprintf(file,cpf); //salvo o valor da vari?vel
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
		printf ("Não foi possível o arquivo, não foi localizado!\n");
}
	
	while(fgets(conteudo, 200, file) !=NULL){
		printf("\nEssas são as informações do usuário: ");
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
    file = fopen(cpf, "r");

    if(file == NULL) {
        printf ("Usuário não se encontra no sistema!\n");
        system ("pause");
    }
    if(file != NULL) {
        printf ("Usuário deletado com sucesso!");
        system ("pause");
    }

}
int main (){
    int opcao=0;//Definindo variáveis
    int laco=1;

    for (laco=1;laco=1;)
    {
	system ("cls");
    setlocale (LC_ALL, "Portuguese");//Definindo a linguagem

    printf ("\t###Cartório da EBAC###\n");//início do menu
    printf ("\nESCOLHA A OPÇÂO DO MENU:\n\n");
    printf ("\t1 - Registrar Nomes\n");
    printf ("\t2 - Consultar nomes\n");
    printf ("\t3 - Deletar nomes\n\n");
    printf ("\nDigite sua opção:"); //fim do menu

    scanf ("%d", &opcao);

    system ("cls");
    
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
        printf ("\nEsta opção não está? disponível.\n");
        system ("pause");
        break;
    }
    }
}



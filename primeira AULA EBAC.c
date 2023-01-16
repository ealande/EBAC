#include <stdio.h> //biblioteca de comunica√ß√£o com o usu√°rio
#include <stdlib.h>//biblioteca respons√°vel pela aloca√ß√£o de mem√≥ria
#include <locale.h> //biblioteca de aloca√ß√µes de texto por regi√£o
#include <string.h> //biblioteca respons·vel por cuidar das strings
int registro(){
	setlocale(LC_ALL, "Portuguese");
	
    char arquivo [40];
	char cpf [40];
    char nome [40];
    char sobrenome [40];
    char cargo [40];
    
    printf ("Digite o CPF a ser cadastrado:");
    scanf ("%s", cpf);
    
    strcpy(arquivo, cpf); //respons·vel por copiar os valores das string
    
    FILE *file; //cria arquivo
    file = fopen(arquivo, "w"); //cria arquivo
    fprintf(file,cpf); //salvo o valor da vari·vel
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
		printf ("N„o foi possÌvel encontrar o arquivo, arquivo n„o localizado!\n");
}
	
	while(fgets(conteudo, 200, file) !=NULL){
		printf("\nEssas s„o as informaÁıes do usu·rio: ");
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
        printf ("Usu·rio n„o se encontra no sistema!\n");
        system ("pause");
    }
    if(file != NULL) {
        printf ("Usu·rio deletado com sucesso!\n");
        system ("pause");
    }
}
int main (){
    int opcao=0;//Definindo vari√°veis
    int laco=1;
    char senhadigitada[10]="a";
    int comparacao;
    
	printf ("\t###CartÛrio da EBAC###\n");//in√≠cio do menu
    printf ("Login de Administrador!\n\n Digite a sua senha:\n");
    scanf ("%s", senhadigitada);
    comparacao = strcmp(senhadigitada, "admin");
    
    if(comparacao == 0){
	

	    for (laco=1;laco=1;)
	    {
		system ("cls");
	    setlocale (LC_ALL, "Portuguese");//Definindo a linguagem
	
	    printf ("\t###CartÛrio da EBAC###\n");//in√≠cio do menu
	    printf ("\nESCOLHA A OP«√O DO MENU:\n\n");
	    printf ("\t1 - Registrar Nomes\n");
	    printf ("\t2 - Consultar nomes\n");
	    printf ("\t3 - Deletar nomes\n");
	    printf ("\t4 - Sair do sistema\n\n");
	    printf ("\nDigite sua opÁ„o:"); //fim do menu
	
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
			
			case 4:
			printf ("Obrigado por utilizar o sistema!\n");
			return 0;
			break;
	
	        default:
	        printf ("\nEsta opÁ„o n„o est· disponÌvel.\n");
	        system ("pause");
	        break;
	    }
	    }

	}
	else {
		printf("Senha incorreta!");
	}


}	    

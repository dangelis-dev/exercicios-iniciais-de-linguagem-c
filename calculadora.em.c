#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	int num1, num2, opcao; 	 
	int resultado; 
	float resul_div; //somente para resultado da divição
	 
	setlocale(LC_ALL,"portuguese");
	
	printf("Menu para operacao aritmetica:\n");
	printf("1 - somar. \n");
	printf("2 - subtrair. \n");
	printf("3 - multiplicar. \n");
	printf("4 - dividir. \n\n");
	
	printf("Informe o primeiro numero inteiro : n1 = ");
	scanf("%d",&num1);
	printf("Informe o segundo numero inteiro : n2 = ");
	scanf("%d",&num2);
	printf("Escolhe a sua opcao: ");
	scanf("%d",&opcao);

	switch(opcao){
		case 1:
			 resultado = num1 + num2;
			 printf("O resultado da soma = %d\n",resultado);
			 break; //sair do estrutura switch
		case 2:
			 resultado = num1 - num2;
			 printf("O resultado da subtracao = %d\n",resultado);
			 break; 
		case 3:
			 resultado = num1 * num2;
			 printf("O resultado da multiplicacao = %d\n",resultado);
			 break; 
		case 4:
			 resul_div = (float) num1 / num2;
			 printf("O resultado da soma = %.2f\n",resul_div);
			 break;
		default: //em outros casos:
			 printf("Você digitou uma opção inválida!\n");
			 break;
	}//fim da estrutura switch
	printf("Fim do programa !!!\n");
	
	system("pause");
	return 0;
}
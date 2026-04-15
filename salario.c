#include<stdio.h>
#include<stdlib.h>
int main() {
	int idade;
	float salario;
	printf("Qual eh sua idade: \n");
	scanf("%d",&idade);
	printf("Qual eh seu salario: \n");
	scanf("%f", &salario);
	printf("Minha idade eh: %d anos \n", idade);
	printf("Valor do meu salario eh: %2.f \n", salario);
	system("pause");
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int busca(int tamanho, int vetor[], int elemento)
{
	int i;
	for (i = 0; i < tamanho; i++)
		if (vetor[i] == elemento){
			return i;
		}
	return -1;
}


int main(){
	
	int *vetor, tamanho, i, elemento, proc;
	printf("\tBusca sequencial\n\n\n");
	printf("Digite o tamanho do seu vetor: ");
	scanf("%d", &tamanho);
	
	while(tamanho<0){
		printf("Usuario, digite o tamanho do seu vetor maior que zero");
		scanf("%d", &tamanho);
	}
	
	vetor=(int*)malloc(tamanho*sizeof(int*));
	for(i=0; i<tamanho; i++){
		printf("Digite os valores do seu vetor: ");
		scanf("%d", &vetor[i]);
	}
	
	printf("Qual elemento voce deseja buscar? ");
	scanf("%d", &elemento);
	proc=busca(tamanho, vetor, elemento);
	
	if(proc<0){
	printf("Valor nao identificado");
	}
	else
	{
		printf("O valor se encontra no vetor[%d]", proc);
	}
}

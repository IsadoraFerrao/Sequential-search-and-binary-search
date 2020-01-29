#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

	int buscabinaria(int tamanho, int vetor[], int elemento)
	{
		int inf = 0;
		int sup = tamanho - 1;
		int meio;
	while (inf <= sup)
	{
		meio = (inf + sup) / 2;
		if (elemento == vetor[meio])
		return meio;
		
	else
		if (elemento < vetor[meio])
			sup = meio - 1;
	else
			inf = meio + 1;
	}
	return -1;
	}
	
	int bouble(int tamanho, int *vetor)
	{
		int flag=1, aux, i;
 	
		while (flag==1) {
		flag=0;
		for (i=0; i<tamanho-1; i++){
			if (vetor[i] > vetor[i+1]){
				aux=vetor[i];
				vetor[i]=vetor[i+1];
				vetor[i+1]=aux;
				flag=1;
			}
		}
			if(flag==1)	{
			bouble(tamanho, vetor);
			}
			
			if(flag==0){
			return *vetor;
			}
		}

	}

int main(){
	
	int *vetor, tamanho, i, elemento, proc, ordenacao, busca;
	printf("\tBusca binaria\n\n\n");
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
	
	ordenacao=bouble(tamanho, vetor);
	proc=buscabinaria(tamanho, vetor, elemento);
	
	if(proc<0){
	printf("Valor nao identificado");
	}
	else
	{
		printf("Valor encontrado");
	}
}

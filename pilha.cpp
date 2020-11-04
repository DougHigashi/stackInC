#include <stdio.h>
#include <stdlib.h>

void inicPilha(struct pilha *pPilha);
void empilha(struct pilha *pPilha, int num);
void desempilha(struct pilha *pPilha);
void exibirPilha(struct pilha *pPilha);

struct pilha{
	int topo;
	int nums[5];
};

struct pilha minhaPilha;
struct pilha *pp = &minhaPilha;

main(){
	inicPilha(pp);
	empilha(pp, 5);
	empilha(pp, 1);
	empilha(pp, 2);
	empilha(pp, 10);//10 é o topo da pilha
	exibirPilha(pp);
	
	desempilha(pp);//retiro o 10 do topo. Agora o 2 e o topo
	exibirPilha(pp);
	
	empilha(pp, 99);//coloco 99 no topo da pilha
	exibirPilha(pp);
}

void inicPilha(struct pilha *pPilha){
	pPilha->topo = -1;
}

void empilha(struct pilha *pPilha, int num){
	pPilha->topo++;
	pPilha->nums[pPilha->topo] = num;
}

void desempilha(struct pilha *pPilha){
	int aux = pPilha->nums[pPilha->topo];
	pPilha->topo--;
	printf("\nNumero %d desempilhado\n", aux);
}

void exibirPilha(struct pilha *pPilha){
	for(int i = pPilha->topo; i > -1 ; i--){
		if(i == pPilha->topo){
			printf("%d - Topo\n", pPilha->nums[pPilha->topo]);
		}else{
			printf("%d\n", pPilha->nums[i]);
		}
	}
	
}


#include <stdio.h>

int main() {
	
	int tamanhoExpressoes = 10, indice;
	char expressaoInf[tamanhoExpressoes], expressaoPos[tamanhoExpressoes];
	
	printf("Digite a expressao na forma infixa: ");
	gets(expressaoInf);
	
	for(indice = 0; indice < tamanhoExpressoes; indice++){
		
		if(expressaoInf[indice-1] >= 40 && expressaoInf[indice-1] <= 47){
			
			expressaoPos[indice] = expressaoPos[indice-1];
			expressaoPos[indice - 1] = expressaoInf[indice];
			
				
		}else{
					
			expressaoPos[indice] = expressaoInf[indice];
			
		}
	}
	puts(expressaoPos);

}

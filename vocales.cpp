#include<stdio.h>
enum {a,e,i,o,u};
void contar(char frase[100],int vocales[5]);
int main(){
	//especifico cuantas vocales son y cuales son
	char frase[100];
	int vocales[5],x;
	for(x=0;x<5;x++){

			vocales[x]=0;
	}
	//hago una especie de menu
	printf("ESCRIBA UNA FRASE: ");
	gets(frase);
	printf("\n La frase escrita es: %s",frase);
	contar(frase,vocales);
	printf("\n VOCAL \t Repite");
	printf("\n A \t %d",vocales[a]);
	printf("\n E \t %d",vocales[e]);
	printf("\n I \t %d",vocales[i]);
	printf("\n O \t %d",vocales[o]);
	printf("\n U \t %d",vocales[u]);
	getchar();

	return 0;

}

void contar(char frase[100], int vocales[5])

{

	for(int x=0;frase[x] !='\0' && frase[x] !='\n';x++){

		switch(frase[x]){
			//sumo una cada vez que encuentre una de las vocales
			case 'a': case 'A': vocales[a]++; 
				break;
			case 'e': case 'E': vocales[e]++;
				 break;
			case 'i': case 'I': vocales[i]++; 
				break;
			case 'o': case 'O': vocales[o]++; 
				break;
			case 'u': case 'U': vocales[u]++; 
				break;

		}

	}

}
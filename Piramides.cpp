#include <stdio.h>
#include <stdlib.h>
// Función principal del programa
int main(int argc, char *argv[])
{
  // Declaración de variables a utilizar
  int contador;
  int filas;
  int posiciones;
  int asteriscos;
  // Solicitud del numero de filas a visualizar
  printf("No. de Filas : ");
  scanf(" %d",&filas);
  // Visualizar primera piramide
  posiciones=filas*2;
  for(contador=1;contador<=posiciones;contador+=2) {
     printf("%*c",posiciones-contador,'*');
     for(asteriscos=1;asteriscos<contador;asteriscos++) {
        printf("*");
     }
     printf("\n");
  }
  // Visualizar segunda piramide
  posiciones=filas*2;
  for(contador=1;contador<=posiciones;contador+=2) {
     printf("%*c",(posiciones/2),'*');
     for(asteriscos=1;asteriscos<contador;asteriscos++) {
        printf("*");
     }
     printf("\n");
  }
    // Visualizar tercera piramide
  posiciones=filas*2;
  for(contador=1;contador<=posiciones;contador+=2) {
     printf("%*c",((posiciones-(contador))/2)+1,'*');
     for(asteriscos=1;asteriscos<contador;asteriscos++) {
        printf("*");
     }
     printf("\n");
  }
  system("PAUSE");
  return 0;
}
/*
  Como podeis observar es una forma de ejecutar el programa
  bastante rebuscada, pero de esta forma da juego para pensar
  en el algoritmo y en la orden printf en su formato especial
  de visualización, ya que el asterico hace que se pueda indicar
  el ancho de visualización.
*/
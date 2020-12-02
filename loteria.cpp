#include <iostream>
#include <windows.h>
#include <stdio.h>

using namespace std;

int main(){
    int cont = 30;
    int loteria,p1,p2,p3,p4,p5;
    int cont1=0,cont2=0,cont3=0,cont4=0,cont5=0;
  //le asigno un color a una variable, en este caso a
    system("color 07");
    char a=219;
   cout<<"\t\t\t\t\t\t\t\t\tGenerando boletos..."<<endl;
   cout << "\t\t\t\t\t\t\t\t";  
   //este for controla la escritura   
   for (int i = 0; i < cont; i++) {         
      Sleep(100);       
      cout << a;  

   }
   //esto para que se para y limpie la pantalla al terminar
   Sleep(100);  
   system("cls");
   //Este for lo he hecho para que genere 5 veces un numero aleatorio 
   for (int i = 1; i <=5; i++)
   {
     loteria=rand()%9;
     p1=rand()%9;
     p2=rand()%9;
     p3=rand()%9;
     p4=rand()%9;
     p5=rand()%9;
     //este if para que compruebe si el priemr numero de la loteria es igual al del boleto,asi cinco veces
     if (loteria=p1)
     {
       cont1++;
     }
     else if (loteria=p2)
     {
       cont2++;
     }
     else if (loteria=p3)
     {
       cont3++;
     }
     else if (loteria=p3)
     {
       cont3++;
     }
     else if (loteria=p4)
     {
       cont4++;
     }
     else if (loteria=p5)
     {
       cont5++;
     }
    
    }

    //este if sirve para controlar el premio del jugador 1
   if (cont1=1)
   {
     cout<<"\t\t\t\t\t\t\tEnhorabuena usted el jugador 1 ha ganado 60.000 euros "<<endl;
      cout<<"\t\t\t\t\t\t\t----------------------------------------------"<<endl;
   }
   else if (cont1=2)
   {
     cout<<"\t\t\t\t\t\t\tEnhorabuena usted el jugador 1 ha ganado 200.000 euros "<<endl;
      cout<<"\t\t\t\t\t\t\t----------------------------------------------"<<endl;
   }
   else if (cont1=3)
   {
     cout<<"\t\t\t\t\t\t\tEnhorabuena usted el jugador 1 ha ganado 500.000 euros "<<endl;
      cout<<"\t\t\t\t\t\t\t----------------------------------------------"<<endl;
   }
  else  if (cont1=4)
   {
     cout<<"\t\t\t\t\t\t\tEnhorabuena usted el jugador 1 ha ganado 1.250.000 euros "<<endl;
      cout<<"\t\t\t\t\t\t\t----------------------------------------------"<<endl;
   }
  else  if (cont1=5)
   {
     cout<<"\t\t\t\t\t\t\tEnhorabuena usted el jugador 1 ha ganado 4.000.000 euros "<<endl;
      cout<<"\t\t\t\t\t\t\t----------------------------------------------"<<endl;
   }
   
   
   
   
   //este if sirve para controlar el premio del jugador 2
    if (cont2=1)
   {
     cout<<"\t\t\t\t\t\t\tEnhorabuena usted el jugador 2 ha ganado 60.000 euros "<<endl;
      cout<<"\t\t\t\t\t\t\t----------------------------------------------"<<endl;
   }
   else if (cont2=2)
   {
     cout<<"\t\t\t\t\t\t\tEnhorabuena usted el jugador 2 ha ganado 200.000 euros "<<endl;
      cout<<"\t\t\t\t\t\t\t----------------------------------------------"<<endl;
   }
    else if (cont2=3)
   {
     cout<<"\t\t\t\t\t\t\tEnhorabuena usted el jugador 2 ha ganado 500.000 euros "<<endl;
      cout<<"\t\t\t\t\t\t\t----------------------------------------------"<<endl;
   }
   else if (cont2=4)
   {
     cout<<"\t\t\t\t\t\t\tEnhorabuena usted el jugador 2 ha ganado 1.250.000 euros "<<endl;
      cout<<"\t\t\t\t\t\t\t----------------------------------------------"<<endl;
   }
   
   else if (cont2=5)
   {
     cout<<"\t\t\t\t\t\t\tEnhorabuena usted el jugador 2 ha ganado 4.000.000 euros "<<endl;
      cout<<"\t\t\t\t\t\t\t----------------------------------------------"<<endl;
   }
   //este if sirve para controlar el premio del jugador 3
    if (cont3=1)
   {
     cout<<"\t\t\t\t\t\t\tEnhorabuena usted el jugador 3 ha ganado 60.000 euros "<<endl;
      cout<<"\t\t\t\t\t\t\t----------------------------------------------"<<endl;
   }
   else if (cont3=2)
   {
     cout<<"\t\t\t\t\t\t\tEnhorabuena usted el jugador 3 ha ganado 200.000 euros "<<endl;
      cout<<"\t\t\t\t\t\t\t----------------------------------------------"<<endl;
   }
   else if (cont3=3)
   {
     cout<<"\t\t\t\t\t\t\tEnhorabuena usted el jugador 3 ha ganado 500.000 euros "<<endl;
      cout<<"\t\t\t\t\t\t\t----------------------------------------------"<<endl;
   }
   else if (cont3=4)
   {
     cout<<"\t\t\t\t\t\t\tEnhorabuena usted el jugador 3 ha ganado 1.250.000 euros "<<endl;
      cout<<"\t\t\t\t\t\t\t----------------------------------------------"<<endl;
   }
   else if (cont3=5)
   {
     cout<<"\t\t\t\t\t\t\tEnhorabuena usted el jugador 3 ha ganado 4.000.000 euros "<<endl;
      cout<<"\t\t\t\t\t\t\t----------------------------------------------"<<endl;
   }
   //este if sirve para controlar el premio del jugador 4
    if (cont4=1)
   {
     cout<<"\t\t\t\t\t\t\tEnhorabuena usted el jugador 4 ha ganado 60.000 euros "<<endl;
      cout<<"\t\t\t\t\t\t\t----------------------------------------------"<<endl;
   }
   else if (cont4=2)
   {
     cout<<"\t\t\t\t\t\t\tEnhorabuena usted el jugador 4 ha ganado 200.000 euros "<<endl;
      cout<<"\t\t\t\t\t\t\t----------------------------------------------"<<endl;
   }
    else if (cont4=3)
   {
     cout<<"\t\t\t\t\t\t\tEnhorabuena usted el jugador 4 ha ganado 500.000 euros "<<endl;
      cout<<"\t\t\t\t\t\t\t----------------------------------------------"<<endl;
   }
    else if (cont4=4)
   {
     cout<<"\t\t\t\t\t\t\tEnhorabuena usted el jugador 4 ha ganado 1.250.000 euros"<<endl;
      cout<<"\t\t\t\t\t\t\t----------------------------------------------"<<endl;
   }
   else if (cont4=5)
   {
     cout<<"\t\t\t\t\t\t\tEnhorabuena usted el jugador 4 ha ganado 4.000.000 euros"<<endl;
      cout<<"\t\t\t\t\t\t\t----------------------------------------------"<<endl;
   }
   //este if sirve para controlar el premio del jugador 5
   if (cont5=1)
   {
     cout<<"\t\t\t\t\t\t\tEnhorabuena usted el jugador 5 ha ganado 60.000 euros "<<endl;
      cout<<"\t\t\t\t\t\t\t----------------------------------------------"<<endl;
   }
   else if (cont5=2)
   {
     cout<<"\t\t\t\t\t\t\tEnhorabuena usted el jugador 5 ha ganado 200.000 euros "<<endl;
      cout<<"\t\t\t\t\t\t\t----------------------------------------------"<<endl;
   }
   
    
  
   
  
   else if (cont5=3)
   {
     cout<<"\t\t\t\t\t\t\tEnhorabuena usted el jugador 5 ha ganado 500.000 euros "<<endl;
      cout<<"\t\t\t\t\t\t\t----------------------------------------------"<<endl;
   }

     
   
  
  else  if (cont5=4)
   {
     cout<<"\t\t\t\t\t\t\tEnhorabuena usted el jugador 5 ha ganado 1.250.000 euros "<<endl;
      cout<<"\t\t\t\t\t\t\t----------------------------------------------"<<endl;
   }
 
   
   
   
   
   else if (cont5=5)
   {
     cout<<"\t\t\t\t\t\t\tEnhorabuena usted el jugador 5 ha ganado 4.000.000 euros "<<endl;
      cout<<"\t\t\t\t\t\t\t----------------------------------------------"<<endl;
   }
   
   

   
   
   
  
   












    
    return 0;
}
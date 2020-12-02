#include <iostream>
#include <windows.h>
#include <stdio.h>

using namespace std;

int main(){
       int cont = 30;



  //le asigno un color a una variable, en este caso a
    system("color 07");
    char a=219;
    int y;
    int cont1=0,cont2=0,cont3=0,cont4=0,cont5=0,cont6=0;
   cout<<"\t\t\t\t\t\t\t\t\tTrucando dado..."<<endl;
   cout << "\t\t\t\t\t\t\t\t";  
   //este for controla la escritura   
   for (int i = 0; i < cont; i++) {         
      Sleep(100);       
      cout << a;  

   }
   //esto para que se para y limpie la pantalla al terminar
   Sleep(100);  
   system("cls");
      //este for es para controlar el numero de veces que escriba el numero random
      for (int i = 0; i <=100; i++)
      {
         y=rand() %6 + 1;
         cout<<"\t\t\t\t\t\t\t\t\tHa salido "<<y<<endl;
         cout<<"\t\t\t\t\t\t\t----------------------------------------------"<<endl;
         Sleep(100);
            switch (y)
            {
               case 1:
                  cont1++;
                  break;
               case 2:
                  cont2++;
                  break;
               case 3:
                  cont3++;
                  break;
               case 4:
                  cont4++;
                  break;
               case 5:
                  cont5++;
                  break;
               case 6:
                  cont6++;
                  break;
            }  
      }
         cout<<"\t\t\t\t\t\t\t\t\tCalculando..."<<endl;
         Sleep(10000);
         system("cls");
         cout<<"\t\t\t\t\t\t\t\t\tHa salido "<<cont1<<" veces el 1"<<endl;
         cout<<"\t\t\t\t\t\t\t\t\tHa salido "<<cont2<<" veces el 2"<<endl;
         cout<<"\t\t\t\t\t\t\t\t\tHa salido "<<cont3<<" veces el 3"<<endl;
         cout<<"\t\t\t\t\t\t\t\t\tHa salido "<<cont4<<" veces el 4"<<endl;
         cout<<"\t\t\t\t\t\t\t\t\tHa salido "<<cont5<<" veces el 5"<<endl;
         cout<<"\t\t\t\t\t\t\t\t\tHa salido "<<cont6<<" veces el 6"<<endl;
            if (cont1>cont2 && cont3>cont4 && cont5>cont6)
            {
               if(cont1>cont3 && cont3>cont5){
                  cout<<"Ha salido más veces el 1"<<endl;
                  cout<<"Y el que menos ha salido ha sido el 5"<<endl;
               }
               else if (cont3>cont1 && cont1>cont5)
               {
                  cout<<"Ha salido mas veces el 3"<<endl;
                  cout<<"Y el que menos ha salido ha sido el 5"<<endl;
               }
               else if (cont5>cont1 && cont1>cont3)
               {
                  cout<<"Ha salido mas veces el 5"<<endl;
                  cout<<"Y el que menos ha salido ha sido el 3"<<endl;
               }
               if(cont1>cont3 && cont3<cont5){
                  cout<<"Ha salido más veces el 1"<<endl;
                  cout<<"Y el que menos ha salido ha sido el 3"<<endl;
               }
               else if (cont3>cont1 && cont1<cont5)
               {
                  cout<<"Ha salido mas veces el 3"<<endl;
                  cout<<"Y el que menos ha salido ha sido el 1"<<endl;
               }
                else if (cont5>cont1 && cont1<cont3)
               {
                  cout<<"Ha salido mas veces el 5"<<endl;
                  cout<<"Y el que menos ha salido ha sido el 1"<<endl;
               }
             }


             if (cont1<cont2 && cont3<cont4 && cont5<cont6)
            {
               if(cont2>cont4 && cont4>cont6){
                  cout<<"Ha salido más veces el 2"<<endl;
                  cout<<"Y el que menos ha salido ha sido el 6"<<endl;
               }
               else if (cont4>cont2 && cont2>cont6)
               {
                  cout<<"Ha salido mas veces el 4"<<endl;
                  cout<<"Y el que menos ha salido ha sido el 6"<<endl;
               }
               else if (cont6>cont2 && cont2>cont4)
               {
                  cout<<"Ha salido mas veces el 6"<<endl;
                  cout<<"Y el que menos ha salido ha sido el 4"<<endl;
               }
               if(cont2>cont4 && cont4<cont6){
                  cout<<"Ha salido más veces el 2"<<endl;
                  cout<<"Y el que menos ha salido ha sido el 4"<<endl;
               }
               else if (cont4>cont2 && cont2<cont6)
               {
                  cout<<"Ha salido mas veces el 4"<<endl;
                  cout<<"Y el que menos ha salido ha sido el 2"<<endl;
               }
                else if (cont6>cont2 && cont2<cont4)
               {
                  cout<<"Ha salido mas veces el 6"<<endl;
                  cout<<"Y el que menos ha salido ha sido el 2"<<endl;
               }
             }
            
      
     
      
      
     





    
return 0;
}
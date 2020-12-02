#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int n;
    int lado;
    int base;
    int lado2;
    int perimetro;
    cout<<"-------------------PERIMETROS-------------------"<<endl;
    cout<<""<<endl;
    cout<<"Que triangulo elige:"<<endl;
    cout<<"Triangulo equlatero : [1]"<<endl;
    cout<<"Triangulo isosceles : [2]"<<endl;
    cout<<"Triangulo escaleno : [3]"<<endl;
    cin>>n;
    switch (n)
    {
    case 1: cout<<"Dame un lado"<<endl;
             cin>>lado; 
             perimetro=lado*3;
             cout<<"El perimetro es de " << perimetro <<endl;
             break;
    case 2: cout <<"Dame la base del triangulo"<<endl;
            cin>>base;
            cout<<"Dame el lado del triangulo"<<endl;
            cin>>lado;
             perimetro=lado*2+base;
            cout<<"El perimetro del triangulo es "<< perimetro <<endl;
            break;
    case 3: cout<<"Dame uno de los lados"<<endl;
            cin>>base;
            cout<<"Dame otro lado"<<endl;
            cin>>lado;
            cout<<"Dame el otro lado"<<endl;
            cin>>lado2;
             perimetro= base+lado+lado2;
            cout<<"El perimetro del triangulo es "<< perimetro<<endl;
            break;
   
    default:cout<<"Gilipollas"<<endl;
        break;
    }








    return 0;
}
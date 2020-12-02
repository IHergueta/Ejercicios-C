#include<iostream>

using namespace std;

int main(){

	int nTriangulo, f, c, k;

	cout<< "Ingrese el numero de triangulos: " <<endl;

	cin>>nTriangulo;

	for (int i=1; i<=nTriangulo; i++) {

		if(i==1)k=1;

		else 	k=2;

		for( f = k; f <= 5; f++){

     		for( c = 1; c <= (5-f) ; c++){

         		cout<<" ";

			}

     		for(c = 1; c <= (f*2-1) ; c++){

           		cout<<"+";

  			}

     		cout<<endl;

		}

	}

	for (int i=1; i<=5; i++) {

		cout<< "   +++" <<endl;

	}

	cin.get();cin.get();

	return 0;

}
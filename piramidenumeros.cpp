#include <iostream>
using namespace std;
int main(){
    int n,j;
    cout<<"dame un numero"<<endl;
    cin>>n;
    cout<<endl;
   
    for (int i = 1; i <= n; i++)//este for controla lo vertical
    {
        for (int j=1; j<=i;j++)//este for controla lo horizontal
        cout<<j<<" ";
        
        
        
        
            
            
        
        cout<<"\n";
        
       
    }
    
    
    



    return 0;
}
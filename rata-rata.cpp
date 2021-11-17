#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    int i, n, N[i];
    float rata,jumlah;
    
    cin>>n;
    cout<<endl;
    
    for(int i=0; i<n; i++){
           cin>>N[i];
           jumlah = jumlah+N[i];
    }
	 cout<<endl; 
    
	  
   	for(int i=0; i<n; i++){
    		cout<<N[i]<<endl;
	}
    rata=jumlah/n;
       
    cout<<endl;
    cout<<"Rata-rata= "<<rata<<endl;
}
  

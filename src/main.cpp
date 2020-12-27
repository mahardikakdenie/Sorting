#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int value1[100];
    int n,z;
    cout<<endl;
    cout<<"Sorting Array : "<<endl;
    cout<<"Masukan Jumlah Data yang di urutkan : ";
    cin>>n;
    cout<<endl;
    
    for(int i = 0 ; i < n ; i++){
        cout<<"Masukan Angka Ke-"<<i+1<<" : ";
        cin>>value1[i];
    }

    for(int p = n/2 ; p > 0 ; p = p/2){
        for(int y = p ; y < n ; y++){
            for(int x = y - p ;x >= 0 ; x -= p ){
                if(value1[x+p] < value1[x]){
                    z=value1[x+p];
                    value1[x+p] = value1[x];
                    value1[x] = z ;
                }
            }
        }
    }
    cout<<endl;

    cout<<"Data yang Di Urutkan : "<<endl;

    for(int i = 0 ; i < n ; i++){
        cout<<value1[i]<<endl;
    }
    return 0;
}

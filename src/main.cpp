#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

const size_t Kelompok2 = 10 ;

void printOlehKelompok2(array <int,Kelompok2> &angka){
    cout<<"Anggkaa : ";
    for(int &a : angka){
        cout<<a<<" ";
    }
    cout<<endl;
}


int main(int argc, char const *argv[])
{
    system("cls");
    array <int, Kelompok2> angka ={9,8,5,4,0,7,6,3,2,1,};

    printOlehKelompok2(angka);

    cout<<endl;

    std::sort(angka.begin(),angka.end());
    printOlehKelompok2(angka);
    
    cin.get();
    return 0;
}


   
   
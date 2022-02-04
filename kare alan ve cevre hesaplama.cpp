#include <iostream>
using namespace std;

int main()
{
    //Kare alan ve cevre hesabi
    
    int K_uzunlugu,alan,cevre;
    
    cout<< "Karenin kenar uzunluğunu girin:";
    cin>> K_uzunlugu;
    alan=K_uzunlugu*K_uzunlugu;
    cevre=4*K_uzunlugu;
    
    cout<<"Karenin alanı:"<<alan<<endl;
    cout<<"Karenin çevresi:"<<cevre<<endl;
    

    return 0;
}
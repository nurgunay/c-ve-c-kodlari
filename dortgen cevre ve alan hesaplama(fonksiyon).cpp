#include <iostream>
using namespace std;

int dortgenCevreHesabi(int uzun_k,int kisa_k)
{
    return 2*(uzun_k + kisa_k);
}


int dortgenAlanHesabi(int uzun_k,int kisa_k)
{
    return uzun_k*kisa_k;
}



int main()
{
    int uzun_k,kisa_k;
    cout<<"Dortgen uzun kenar uzunluğu:";
    cin>>uzun_k;
    
    cout<<"Dortgen kısa kenar uzunluğu:";
    cin>>kisa_k;
    cout<<endl;
    cout<<"Dortgenin çevresi:"<<dortgenCevreHesabi(uzun_k,kisa_k)<<endl<< "Dortgenin alanı:"<<dortgenAlanHesabi(uzun_k,kisa_k);

    return 0;
}
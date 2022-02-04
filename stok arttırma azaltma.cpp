#include <iostream>

using namespace std;
int main()
{
    int stokAdeti;
    char islem;
    
    cout<<"Lütfen stoktaki ürün adet miktarını girin:";
    cin>>stokAdeti;
    
    cout<<"Stoktan ürün miktarı arttırmak için +, ürün miktarı azaltmak için - giriniz:";
    cin>>islem;
    
    int miktar;
    
    // islem degiskenini string ile tutamayız cunku switch hala stringe uyumlu degil ya int ya da char olarak tutmalıyız!
    switch(islem){
        case '+':
        cout<<"Ürün artış miktarı: ";
        cin>>miktar; 
        stokAdeti+=miktar;
        cout<<"Güncel ürün adeti:"<<stokAdeti;
        break;
        
        case '-':
        cout<<"Ürün azalış miktarı:";
        cin>>miktar;
        stokAdeti-=miktar;
        cout<<"Kalan ürün adeti:"<<stokAdeti;
        break;
       
        default:
        cout<<"Depoya sadece ürün eklenebilir ya da çıkarılabilir.";
        break; 
    }

}

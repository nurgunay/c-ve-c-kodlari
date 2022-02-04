#include <iostream>

using namespace std;

int main()
{
    float kupunBirKenari;
    cout<<"Küpün bir kenarının uzunluğunu giriniz:";
    cin>>kupunBirKenari;
    
    cout<<"Küpün yanal alanlarının toplamı:"<<6*(kupunBirKenari*kupunBirKenari)<<endl;
    cout<<"Küpün hacmi:"<<kupunBirKenari*kupunBirKenari*kupunBirKenari;
    

    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    int yaricap;
    float alan,cevre;
    float pi=3.14;
    
    cout<<"Dairenin yarıçap uzunluğunu giriniz:";
    cin>>yaricap;
    
    cevre=2*pi*yaricap;
    alan=pi*(yaricap*yaricap);
    
    cout<<"Dairenin alanı:"<<alan<<endl;
    cout<<"Dairenin çevresi:"<<cevre;

    return 0;
}
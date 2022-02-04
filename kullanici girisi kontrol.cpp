#include <iostream>

using namespace std;

int main()
{
    string mail="admin.admin@ornek.com";
    string sifre="123kullanıcı*";
    
    string kullaniciMail, kullaniciSifre;
    
    cout<<"E-Mail Adresi:";
    cin>> kullaniciMail;
    cout<<"Şifre:";
    cin>> kullaniciSifre;
    

if(kullaniciMail == mail and kullaniciSifre == sifre)
{
    cout<<"Başarıyla giriş yaptınız!";
}

    
else if(kullaniciMail == mail or kullaniciSifre == sifre)
{
    if(kullaniciMail != mail and kullaniciSifre==sifre)
    {
        cout<<"E-Mail Adresi hatalı!";
    }
    
    else if(kullaniciSifre != sifre and kullaniciMail==mail)
    {
        cout<<"Şifre hatalı!";
    }
      
}
    
else
    {
        cout<<"Mail adresi ve şifre hatalı!"<<endl;
    }

    return 0;
}
#include <stdio.h>
#include <iostream>
#include <locale.h>

using namespace std;

int main()
{    
    setlocale(LC_ALL,"Turkish");
    
    int sayi,yuzbinler,onbinler,binler,yuzler,onlar,birler;
    cout<<"6 basamaklı sayı giriniz:";
    cin>>sayi;
    
    yuzbinler=sayi/100000;
    cout<<"Yuzbinler basamağındaki sayı:"<<yuzbinler<<endl;
    
    onbinler=(sayi%100000) / 10000;
    cout<<"Onbinler basamağındaki sayı:"<<onbinler<<endl;
    
    binler=(sayi%10000)/1000;
    cout<<"Binler basamağındaki sayı:"<<binler<<endl;
    
    yuzler=(sayi%1000)/100;
    cout<<"Yuzler basamağındaki sayı:"<<yuzler<<endl;
    
    onlar=(sayi%100)/10;
    cout<<"Onlar basamağındaki sayı:"<<onlar<<endl;
    
    birler=sayi%10;
    cout<<"Birler basamağındaki sayı:"<<birler<<endl;
    
    int toplam=yuzbinler+onbinler+binler+yuzler+onlar+birler;
    cout<<"\nSayı değerlerinin toplamı:"<<toplam;
    return 0;
}
#include <stdio.h>

int main()
{

// Tam sayi ve string türündeki değişkenlerin atanması.
int sayi,sayi2,sonuc;
char islem;

//Yapmak istenen işlemi ve sayıları kullanıcı girişi olarak alma ve görüntüleme.
printf("Yapmak istediginiz islemi giriniz( + , - , * , / ):");
scanf("%s",&islem);

printf("Birinci sayiyi giriniz:");
scanf("%d",&sayi);

printf("Ikinci sayiyi giriniz:");
scanf("%d",&sayi2);

//switch case koşulu başlatma. Kullanıcının girdiği işleme göre uygun olan koşulu gerçekleştirir ve ekrana yazar.
switch(islem)
{
    case '+' :
    sonuc=sayi+sayi2;
    printf("Sonuc:%d",sonuc); break;
    
    case '-' :
    sonuc=sayi-sayi2;
    printf("Sonuc:%d",sonuc); break;
    
    case '*' :
    sonuc=sayi*sayi2;
    printf("Sonuc:%d",sonuc); break;
    
    case '/' :
    sonuc=sayi/sayi2;
    printf("Sonuc:%d",sonuc); break;
    }
}
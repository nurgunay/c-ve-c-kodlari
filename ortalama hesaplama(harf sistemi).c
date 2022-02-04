#include <stdio.h>

int main()
{
     int s1,s2,s3,proje,ort;
    
    printf("\n*** ORTALAMA OGRENME BİLGİ SİSTEMİ ***\n\n");
    
    printf("+ Sınav-1 notunuz:");
    scanf("%d",&s1);
    
    printf("+ Sınav-2 notunuz:");
    scanf("%d",&s2);
    
    printf("+ Sınav-3 notunuz:");
    scanf("%d",&s3);
    
    printf("+ Proje-1 notunuz:");
    scanf("%d",&proje);
    
    ort = (s1 + s2 + s3 + proje) /4;
    
    if (ort<50)
    {
        printf( "Harf notunuz: FF, Ortalamanız:%d",ort);
    }
    
    if (ort>50 && ort<=60)
    {
       printf("Harf notunuz: DD, Ortalamanız:%d",ort);
    }
    
    if (ort>60 && ort<=70)
    {
        printf("Harf notunuz: CC, Ortalamanız:%d",ort);
    }
    
    if (ort>70 && ort<=85)
    {
        printf("Harf notunuz: BB, Ortalamanız:%d",ort);
    }
    
    if (ort>85)
    {
        printf("Harf notunuz: AA, Ortalamanız:%d",ort);
    }
    return 0;
}
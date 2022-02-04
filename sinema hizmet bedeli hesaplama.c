// sinemada alinan hizmetlerin toplam tutari.

#include <stdio.h>

int main()
{
    int bilet,misir,kola,su,toplam;
    
    printf("* Toplam Tutar Hesaplama *\n");
    
    printf("- Bilet adedi:");
    scanf("%d",&bilet);
    
    printf("- Misir adedi:");
    scanf("%d",&misir);
    
    printf("- Kola adedi:");
    scanf("%d",&kola);
    
    printf("- Su adedi:");
    scanf("%d",&su);

    printf("\n");
    toplam= bilet*15 + misir*8 + kola*6 + su*3;
    printf("- Toplam Tutar: %d TL",toplam);

    return 0;
}
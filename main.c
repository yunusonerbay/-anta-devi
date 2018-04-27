#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int urunSayisi;
    float urununSayisi;
    float urununFiyati;
    int paketAgirligi;
    char urun;
    float urunKilolari[50];
    float urunFiyatlari[50];
    int siralanmisFiyatlar[50];
    char urunListesi[50];
    int i;
    printf("Kac tane urun girisi yapacaksiniz?\n");
    scanf("%d",&urunSayisi);


    for( i=0; i<urunSayisi; i++){
        printf("Urun adi\n");
        scanf("%s",&urun);
        printf("Urun kilosu\n");
        scanf("%f",&urununSayisi);
        printf("Urun fiyati\n");
        scanf("%f",&urununFiyati);
        urunFiyatlari[i] = urununFiyati;
        urunKilolari[i] = urununSayisi;
        urunListesi[i] = urun;

    }

    printf("Paket agirliðini giriniz?");
    scanf("%d",&paketAgirligi);

    int paketimiz = 0;

    while(paketimiz<=paketAgirligi){

        int enBuyuk=-1;
        int enBuyukSira;
        float toplam=0;
        for(i=0; i<urunSayisi; i++){
            if(urunFiyatlari[i]>enBuyuk){
                enBuyuk = urunFiyatlari[i];
                enBuyukSira = i;

            }
        }

        if(paketimiz+urunKilolari[enBuyukSira]<=paketAgirligi){
            paketimiz+=urunKilolari[enBuyukSira];
            printf("%c",urunListesi[enBuyukSira]);
            if(paketimiz>=paketAgirligi){
                break;
            }
        }

        urunFiyatlari[enBuyukSira] = 1;


    }

}



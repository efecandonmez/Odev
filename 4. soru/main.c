#include <stdio.h>
#include <stdlib.h>

struct bilgi
{
    char ad[20];
    char soyad[25];
    int numara;
    char adres[150];
};


int main() {
	
	printf("Efe Can Donmez - 1220505047\n\n");
	
    struct bilgi ogr[5];
    int i;

    for(i=1;i<=5;i++) 
	{

        printf("%d)\n ogrencinin adini giriniz:\n",i);
        scanf("%s",&ogr[i].ad);

        printf("ogrencinin soyadini giriniz: \n");
        scanf("%s",&ogr[i].soyad);

        printf("ogrencinin numarasini giriniz: \n");
        scanf("%d",&ogr[i].numara);


        printf("ogrencinin adresini giriniz:\n");
        scanf("%s",&ogr[i].adres);
    }

    printf("Ogrencilerin Bilgileri\n");
    for(i=1;i<=5;i++)
	{
        printf("Ad: %s\n",ogr[i].ad);
        printf("Soyad: %s\n",ogr[i].soyad);
        printf("Numara: %d\n",ogr[i].numara);
        printf("Adres: %s\n",ogr[i].adres);

    }

    return 0;
}
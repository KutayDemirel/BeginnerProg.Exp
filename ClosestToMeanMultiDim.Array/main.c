#include <stdio.h>
#include <stdlib.h>

int main()
{   int OgrNot[10][2];
    int i,temp1,temp2,gecici;
   // int OgrNot[2][10] = {{10,56,48,12,78,62,15,98,9,81},{45,78,12,9,32,17,25,87,72,63}};
   for(int i=0;i<10;i++){
        printf("%d. Ogrencinin Matematik notunu giriniz   :",i+1);
        scanf("%d",&OgrNot[0][i]);
        printf("%d. Ogrencinin Fizik notunu giriniz   :",i+1);
        scanf("%d",&OgrNot[1][i]);
    }
    // Ortalama
    int toplamM = 0,toplamF =0;
    for(i=0;i<10;i++){
        toplamF += OgrNot[1][i];
        toplamM += OgrNot[0][i];
    }
    printf("\n\nMatematik sinavlarin Ortalamasi   : %.2f \n", (double)toplamM/10 );
    printf("Fizik sinavlarin Ortalamasi   : %.2f \n", (double)toplamF/10 );

    // Azalan siralama
    for (gecici=0;gecici<=9;gecici++){
        for(i=0;i<=8;i++){
            if(OgrNot[1][i]<OgrNot[1][i+1]){
                temp1 = OgrNot[1][i];
                temp2 = OgrNot[0][i];
                OgrNot[1][i] = OgrNot[1][i+1];
                OgrNot[0][i] = OgrNot[0][i+1];
                OgrNot[1][i+1] = temp1;
                OgrNot[0][i+1] = temp2;
                }

        }
    }
        printf("Fizik dersi azalan siralamasi:");
    for(i=0;i<=9;i++){
        printf("%4d ", OgrNot[1][i]);
    }


    //Fizik dersi en yuksek olanin matematik notu
    printf("\nFizik dersi en yuksek olan ogrencinin Matematik notu   :%4d \n", OgrNot[0][0]);


    int ort,baslangic,son,mid;
    int kucuk,buyuk;

    ort = toplamM/10;
    baslangic = 0;
    son = 9;

    // Matematik dersi siralama
     for (gecici=0;gecici<=9;gecici++){
        for(i=0;i<=8;i++){
            if(OgrNot[0][i]<OgrNot[0][i+1]){
                temp2 = OgrNot[0][i];
                OgrNot[0][i] = OgrNot[0][i+1];
                OgrNot[0][i+1] = temp2;
                }
        }
    }
    //binary search
    while(baslangic<=son){
        mid = (son+baslangic)/2;
    if (ort<OgrNot[0][mid]){
        if (ort>OgrNot[0][mid+1]){
            buyuk = OgrNot[0][mid];
            kucuk = OgrNot[0][mid+1];
            break;
        }
        else
            baslangic = mid+1;

    }
    else if(ort==OgrNot[0][mid])
        printf("Matematik dersinde ortalamaya en yakın olan not: %d", OgrNot[0][mid]);

    else{
        if(ort<OgrNot[0][mid-1]){
            buyuk = OgrNot[0][mid-1];
            kucuk = OgrNot[0][mid];
            break;
        }
        else
            son = mid-1;
    }
    }
        // farki kucuk olan en yakin olan
        if(ort-kucuk>buyuk-ort){
            printf("Matematik dersinde ortalamaya en yakin olan not: %d", buyuk);
        }
        if(ort-kucuk<buyuk-ort){
            printf("Matematik dersinde ortalamaya en yakin olan not: %d", kucuk);
        }

    return 0;
}

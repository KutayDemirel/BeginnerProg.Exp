#include <stdio.h>
#include <stdlib.h>

int main()
{   int islem;
    int sayi;
    int alt;
    int ust;
    int yukseklik;
    float toplam_f(int);
    float trap(int,int,int);

   printf("1. Denklemin sonucunu hesaplayiniz\n");
    printf("2. Girdiginiz sayi asal sayi midir?\n");
    printf("3. Trapezin alanini hesaplayin\n");
    printf("4. Girdiginiz sayinin faktoriyelini hesaplayiniz\n");
    printf("5. Gunu bulunuz\n");


  printf("Bir islem seciniz\n");
    scanf("%d",&islem);

    switch (islem){
        case 1:
            printf("Bir sayi giriniz:");
            scanf("%d",&sayi);
            printf(" Denklemin sonucu :  %f",toplam_f(sayi));
            break;
        case 2:
            printf("Bir sayi giriniz:");
            scanf("%d",&sayi);
                int kirilma=0;
                    for(int x=2;x<=sayi-1;x++){
                      //      printf("x: %d\n",x); x in kaç olduðu
                    if(sayi% x==0){
                        kirilma = 1;
                        break;
               }
                    }

                if(kirilma==0)
                    printf("Asal sayidir");
                else
                    printf("Asal sayi degildir");

            break;
        case 3:
             printf("Trapez icin alt uzunluk giriniz:");
            scanf("%d",&alt);
            printf("Trapez icin ust uzunluk giriniz:");
            scanf("%d",&ust);
            printf("Trapez icin yukseklik giriniz:");
            scanf("%d",&yukseklik);
            printf("Trapezin alani :%.2f", trap(alt,ust,yukseklik));
            break;
        case 4:
            printf("Bir sayi giriniz :");
            scanf("%d",&sayi);
                unsigned long long sonuc =1;
                int i= 1;
                while(i <=sayi){
                    sonuc *= i;
                    i++;
                }

            printf("faktoriyel sonucu : %llu", sonuc);
            break;
        case 5:
            printf("Gunu bulmak icin 1 ile 7 arasinda bir sayi bulunuz:");
            scanf("%d",&sayi);
                switch(sayi){
                    case 1:
                        printf("Pazartesi");
                        break;
                    case 2:
                        printf("Sali");
                        break;
                    case 3:
                        printf("Carsamba");
                        break;
                    case 4:
                        printf("Persembe");
                        break;
                    case 5:
                        printf("Cuma");
                        break;
                    case 6:
                        printf("Cumartesi");
                        break;
                    case 7:
                        printf("Pazar");
                        break;
                    default:
                        printf("Uygun olmayan bir sayi girdiniz.");
                }
                break;


        default:
            printf("Gecersiz sayi girdiniz");

    }

        return 0;
}
    float toplam_f(int sayi){
        float sonuc = 0;
        for(int x=1;x<=sayi;x++){
            sonuc += (float)((x*x)-3)/(x*x*x);
        }
        return sonuc;
    }
    float trap(int alt,int ust, int yukseklik){
        float alan;
        return alan = (float)((alt+ust)*yukseklik)/2;
    }


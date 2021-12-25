#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n, sayi,tekrar;
    double p, k;
    double result;
    double fact(int);
    double kok(double,double,double);
    double a,b,c;



    do
    {

    printf("1. Fibonacci dizimi hesaplama \n");
    printf("2. n!(n-1)!/(n+1)! hesaplama \n");
    printf("3. Formul Hesaplama \n");
    printf("Listeden yapilmasini istediginiz hesaplamayi seciniz   :\n");
    scanf("%d", &n);

    switch(n){
     case 1:
         printf("Bir sayi giriniz   : \n");
         scanf("%d", &sayi);
         a = 0;
         b = 1;
         if(sayi==0)
            printf("\n Fibonacci dizimi su sekildedir \n 0");
         else if(sayi==1)
            printf("\n Fibonacci dizimi su sekildedir \n 0,1");
         else
            printf("\n Fibonacci dizimi su sekildedir \n 0,1,");
            for(int i = 1;i<sayi;i++){
                c = a + b;
                a = b;
                b = c;
                printf("%g,",c);
            }
        break;
     case 2:
         printf("Bir sayi giriniz   : \n");
         scanf("%d", &sayi);
         p = fact(sayi)*fact(sayi-1)/fact(sayi+1);
         printf("\n %d!*(%d-1)!/(%d+1)! sonucu   : %.2lf \n",sayi,sayi,sayi,p);
        break;
     case 3:
         printf("A sayisi giriniz   : \n");
         scanf("%lf",&a);
         printf("B sayisi giriniz   : \n");
         scanf("%lf",&b);
         printf("C sayisi giriniz   : \n");
         scanf("%lf",&c);
         k = b*b-4*a*c;
         if(k>0){
         p = kok(a,b,c);
         printf("Formulun sonucu   : %lf \n",p);
         }
         else
            printf("Girdiginiz sayinin deltasi negatiftir. \n");
        break;

    }
        printf("\n\n\nTekrar hesaplama yapmak istiyorsaniz herhangi bir karakter giriniz\n\n\n\nDevam etmek istemiyorsaniz -1'i tuslayiniz \n");
        scanf("%d", &tekrar);
    } while(tekrar != -1);

}
    double fact(int x){
        int sonuc=1;
        for(int i=1;i<=x;i++){
        sonuc *= i;
        }
    return sonuc;
}
    double kok(double a,double b, double c){
        double result;
        result = (-b+sqrt(b*b-4*a*c))/2*a ;
    return result;
}


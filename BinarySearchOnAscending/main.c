    int c, baslangic, son, orta ,n ,aranan_deger, dizi[100];

    printf("\n Dizinin eleman sayisini giriniz: ");
    scanf("%d",&n);

    for(c=0;c<n;c++){
        printf("\n Dizinin %d. elemanýný giriniz", c);
        scanf("%d", &dizi[c]);
    }
    printf("\n Aranacak degeri giriniz: ");
    scanf("%d", &aranan_deger);

    baslangic = 0;
    son = n-1 ;
    orta = (baslangic+son)/2;

    while(baslangic<=son){
        if (dizi[orta]<aranan_deger)
            baslangic = orta + 1;
        else if (dizi[orta] == aranan_deger){
            printf("\n Aranan < %d > degeri dizinin %d. elemaný olarak bulundu. \n", aranan_deger, orta);
        }
        else
            son = orta - 1 ;
        //bundann sonraki kot while de else de deðil
        orta = (baslangic + son)/2;
    }
    if(baslangic>son)
       printf("\n Aranan %d degeri bulunmadi. \n", aranan_deger);
  return 0;
}

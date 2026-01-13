#include  <stdio.h>

//İSİM SOYİSİM : RUMEYSA ASLAN
//OGRENCI NO : 2420161089
//BTK AKADEMİ SERTİFİKA BAGLANTISI : https://www.btkakademi.gov.tr/portal/certificate/validate?certificateId=4qguekG8D7

void dizi_yazdir(int dizi [],  int  basIDX, int sonIDX)  {
         int i;
         for  (i=basIDX; i<= sonIDX; i++) {
               printf("%2d ", *(dizi+i));
         }
         
         printf("\n");
}

void arayaeklemeli_siralamaBK(int dizi[],  int BOYUT)  {
    int i, j;
    int anahtar;
    
    for  (i=1; i<BOYUT; ++i) {
        anahtar = dizi[i];
        for (j=i-1;  (j>=0)  && (anahtar<dizi[j]);  j--) {
            dizi [j+1] = dizi [j];
            
        }
        
        dizi[j+1] = anahtar;
        printf("iter. %2d: ", i);
        dizi_yazdir(dizi, 0, BOYUT-1);
        
        
    }
}

int binarySearch(int dizi [], int n, int aranan)  {
    int sol = 0, sag = n -1, orta;
    
    while (sol <=  sag)   {
        orta = sol + ( sag -  sol ) / 2;
        
        if (dizi [orta ] == aranan)
        return orta;
        
        else if (dizi[orta] < aranan)
        sol =  orta + 1;
        
        else 
        sag =  orta - 1;
        
        
}
    return -1;
}

int main ( )  {
    int A[] =  {18, 3, 27, 14, 9, 21};
    int N = sizeof(A)   / sizeof(A [0]);
    
    
    dizi_yazdir(A, 0, N-1);
    arayaeklemeli_siralamaBK(A, N);
    dizi_yazdir(A, 0, N-1);
    
    
    
    int aranan, sonuc;
    
    printf("\nAranacak Sayiyi Gir ");
    scanf("%d" , &aranan);
    
    sonuc = binarySearch(A, N, aranan);
    
    if (sonuc != -1) 
    printf("Sayi Bulundu Indeks: %d\n", sonuc);
    
    else printf ("Sayi Dizide Bulunamadi \n");
    
    
    return 0;
    
}

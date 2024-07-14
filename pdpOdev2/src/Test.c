/*
*
* @author Beyzanur KARAÇAM beyzanur.karacam@ogr.sakarya.edu.tr
* @since 04.05.2024
*
*/



#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "Canli.h"
#include "Bitki.h"
#include "Bocek.h"
#include "Sinek.h"
#include "Pire.h"
#include "Habitat.h"
int main(){
	 FILE *dosya;
    
    int satir_sayisi = 0, sutun_sayisi = 0;
    int sayi;
    int i, j;
    int konum;
    // Dosyayı aç
	
    dosya = fopen("Veri.txt", "r");
	fseek(dosya, 0, SEEK_SET);
    if (dosya == NULL) {
        printf("Dosya açılamadı.");
        return 1;
    }
	
   

    while (fscanf(dosya, "%d", &sayi) == 1) {
      if (satir_sayisi == 0) {
            sutun_sayisi++; // İlk satır okundu, sütun sayısını artır
        }
        if (fgetc(dosya) == '\n') {
            satir_sayisi++; // Yeni satır başladı, satır sayısını artır
        }
    }
	
   satir_sayisi++;
    // Dosyayı tekrar başa sar
    fseek(dosya, 0, SEEK_SET);
	int matris[satir_sayisi][sutun_sayisi];
    // Matrisi dosyadan oku
	canli **canlilar = malloc(satir_sayisi * sizeof(canli));
if (canlilar == NULL) {
    printf("Bellek tahsisi basarisiz oldu.\n");
    exit(EXIT_FAILURE);
}

// Her bir satır için bellek tahsisi yapılması
for (i = 0; i < satir_sayisi; i++) {
    canlilar[i] = malloc(sutun_sayisi * sizeof(canli));
    if (canlilar[i] == NULL) {
        printf("Bellek tahsisi basarisiz oldu.\n");
        exit(EXIT_FAILURE);
    }
}
// Matrisi dosyadan oku ve canlilar dizisine yer ayır
for (i = 0; i < satir_sayisi; i++) {
    for (j = 0; j < sutun_sayisi; j++) {
        fscanf(dosya, "%d", &matris[i][j]);

        konum = sqrt(pow(satir_sayisi - i, 2) + pow(sutun_sayisi - j, 2));
        if (1 <= matris[i][j] && matris[i][j] <= 9) {
           canlilar[i][j]  = bitkiOlustur('B', i, j, matris[i][j], konum)->super;
		   char *gorunum = GorunumYaz(canlilar[i][j]);
		   printf("%s", gorunum);
		     free(gorunum);
        } else if (10 <= matris[i][j] && matris[i][j] <= 20) {
            canlilar[i][j]  = bocekOlustur('C', i, j, matris[i][j], konum)->super;
			char *gorunum = GorunumYaz(canlilar[i][j]);
			printf("%s", gorunum);
			  free(gorunum);
        } else if (21 <= matris[i][j] && matris[i][j] <= 50) {
            canlilar[i][j]  = sinekOlustur('S', i, j, matris[i][j], konum)->super->super;
			char *gorunum = GorunumYaz(canlilar[i][j]);
			printf("%s", gorunum);
			  free(gorunum);
        } else if (51 <= matris[i][j] && matris[i][j] <= 99) {
           canlilar[i][j]  = pireOlustur('P', i, j, matris[i][j], konum)->super->super;
		   char *gorunum = GorunumYaz(canlilar[i][j]);
		   printf("%s", gorunum);
		     free(gorunum);
        }
		printf(" "); 
		
    }
        printf("\n");
    
}
printf("\n\nPress any key to continue...\n");
	getchar();
	fclose(dosya);
	habitat habitatt=oyun_olustur(canlilar,satir_sayisi,sutun_sayisi);
	oyun_baslat(habitatt,(satir_sayisi+sutun_sayisi));
	HabitatYokEt(habitatt);
    return 0;
}
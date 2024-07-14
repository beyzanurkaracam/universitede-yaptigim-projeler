/**
*
* @author Sena Nur Erdem     sena.erdem1@ogr.sakarya.edu.tr
* @since 5 Mayıs 2023
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "Habitat.h"


habitat oyun_olustur(canli **canlilar,int xCanliSayisi,int yCanliSayisi) {
	habitat this = (habitat)malloc(sizeof(struct Habitat));
    if (this == NULL) {
        // Hata işleme
        printf("Bellek tahsisi basarisiz oldu.\n");
        exit(EXIT_FAILURE);
    }

    this->xCanliSayisi = xCanliSayisi;
    this->yCanliSayisi = yCanliSayisi;

    // canlilar üyesine bellek tahsis et
    this->canlilar = (canli **)malloc(xCanliSayisi * sizeof(canli *));
    if (this->canlilar == NULL) {
        // Hata işleme
        printf("Bellek tahsisi basarisiz oldu.\n");
        exit(EXIT_FAILURE);
    }

    // canlilar dizisini atama
    for (int i = 0; i < xCanliSayisi; i++) {
        this->canlilar[i] = (canli *)malloc(yCanliSayisi * sizeof(canli));
        if (this->canlilar[i] == NULL) {
            // Hata işleme
            printf("Bellek tahsisi basarisiz oldu.\n");
            exit(EXIT_FAILURE);
        }

        // Gelen canlilar dizisini this->canlilar dizisine kopyala
        for (int j = 0; j < yCanliSayisi; j++) {
            this->canlilar[i][j] = canli_kopyala(canlilar[i][j]);
        }
    }

    // yokEt fonksiyonunu atama
    this->yokEt = &HabitatYokEt;

    return this;
}

void oyun_baslat(habitat habitatt,int canliSayisi) {
  canli kazanan=habitatt->canlilar[0][0];
	for(int i=0;i<habitatt->xCanliSayisi;i++){
		for(int j=0;j<habitatt->yCanliSayisi;j++){
			oyun_durumunu_yazdir(habitatt);
			printf("\n");
		    system("cls");
		  if ((i==habitatt->xCanliSayisi-1)&&(j==habitatt->yCanliSayisi-1)) {
			printf("Kazanan: %c : (%d,%d)\n", kazanan->isim, kazanan->x, kazanan->y);
			return;
			}	
			
			if(i==0 && j==0){
				kazanan=habitatt->canlilar[0][0];
			}
			else{
				 kazanan=habitatt->canlilar[i][j]->savastir(habitatt->canlilar[i][j],kazanan);

			}

	}
	
	}

}


void oyun_durumunu_yazdir(habitat habitatt) {
    
    for(int i=0;i<habitatt->xCanliSayisi;i++){
		for(int j=0;j<habitatt->yCanliSayisi;j++){
			printf("%c",habitatt->canlilar[i][j]->isim);
			printf(" "); 
    }
	 printf("\n");
	}
    
}


void HabitatYokEt(habitat this){
	if(this==NULL) return;
	for(int i=0;i<this->xCanliSayisi;i++){
		for(int j=0;j<this->yCanliSayisi;j++){
		free(this->canlilar[i][j]);
	}
	}
	free(this);
}

#include "Canli.h"


canli canli_olustur(char isim,int x,int y,int deger,int konum){
	canli this;
	this=(canli)malloc(sizeof(struct Canli));
	this->isim=isim;
	this->x=x;
	this->y=y;
	this->konum=konum;
	this->deger=deger;
	    this->yasayan = 1;
	//this->yemeKabiliyeti=yemeKabiliyeti;
	this->canli_kopyala=&canli_kopyala;
	this->gorunum=&GorunumYaz;
	this->yokEt=&canli_yok_et;
	return this;
}
canli canli_kopyala(canli orjinal) {
    canli kopya = (canli)malloc(sizeof(struct Canli));
kopya=orjinal;
    // Orjinal canli struct'ının değerlerini kopya struct'ına aktar
   /* kopya->isim = orjinal->isim;
    kopya->x = orjinal->x;
    kopya->y = orjinal->y;
    kopya->deger = orjinal->deger;
    kopya->konum = orjinal->konum;*/
	
   return kopya;
}

void canli_yok_et(canli this) {
   if(this==NULL) return;
   free(this);
}
char *GorunumYaz(struct Canli * canli){
	/* Canli **canlilar2 = (Canli **)malloc((xCanliSayisi+yCanliSayisi) * sizeof(Canli *));
	 for (int i = 0; i < xCanliSayisi; i++) {
		 for (int j = 0; j < yCanliSayisi; i++) {
            canlilar2[i][j]=kopya;
        }
	 }*/
	
	 char *gorunum = (char *)malloc(100 * sizeof(char)); // 100 karakterlik bellek ayırdık
    sprintf(gorunum, "%c", 
            canli->isim);
    return gorunum;
}

	 
	 
	

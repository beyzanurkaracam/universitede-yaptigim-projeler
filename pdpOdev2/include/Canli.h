#ifndef CANLI_H
#define CANLI_H
#include "stdio.h"
#include "stdlib.h"
typedef struct Canli* canli;
struct Canli{
	char isim;
	//int yemeKabiliyeti;
	int x;
	int y;
	int konum;
	int deger;
	
	char* (*gorunum)(struct Canli*);
	void (*yokEt)(struct Canli*);
	canli (*canli_kopyala)(struct Canli*);
	canli (*savastir)();
	int yasayan;
	
	
};

canli canli_olustur(char isim,int x,int y,int deger,int konum);
char *GorunumYaz(struct Canli * canli);

void canli_yok_et(canli);
canli canli_kopyala(const canli );

#endif

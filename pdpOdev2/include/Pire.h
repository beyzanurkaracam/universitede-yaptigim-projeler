#ifndef PIRE_H
#define PIRE_H
#include "stdio.h"
#include "stdlib.h"
#include "Canli.h"
#include "Bocek.h"
struct Pire{
	bocek super;
	void (*yokEtPire)(struct Pire*);
};
typedef struct Pire *pire;
pire pireOlustur(char isim,int x,int y,int deger,int konum);
canli SavastirPire(const canli,const canli );
void yokEtPire (pire);
#endif
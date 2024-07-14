#ifndef SINEK_H
#define SINEK_H
#include "stdio.h"
#include "stdlib.h"
#include "Canli.h"
#include "Bocek.h"
struct Sinek{
	bocek super;
	
	void (*yokEtSinek)(struct Sinek*);
};
typedef struct Sinek *sinek;
sinek sinekOlustur(char isim,int x,int y,int deger,int konum);
canli SavastirSinek(const canli,const canli);
void yokEtSinek (sinek);
#endif
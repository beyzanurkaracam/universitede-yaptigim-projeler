#ifndef BOCEK_H
#define BOCEK_H
#include "stdio.h"
#include "stdlib.h"
#include "Canli.h"

struct Bocek{
	canli super;
	char isim;
	int x;
	int y;
	int deger;
	int konum;
	void (*yokEtBocek)(struct Bocek*);
};
typedef struct Bocek *bocek;
Bocek bocekOlustur(char isim,int x,int y,int deger,int konum);
void yokEtBocek (bocek);
#endif
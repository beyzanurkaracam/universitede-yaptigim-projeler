#ifndef BITKI_H
#define BITKI_H

#include "Canli.h"

struct Bitki{
	
	canli super;
	void (*yokEtBitki)(struct Bitki*);
};
typedef struct Bitki *bitki;
bitki bitkiOlustur(char isim,int x,int y,int deger,int konum);
canli SavastirBitki(const canli,const canli p);
void yokEtBitki (bitki);
#endif
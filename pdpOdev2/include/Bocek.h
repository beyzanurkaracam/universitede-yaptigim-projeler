#ifndef BOCEK_H
#define BOCEK_H
#include "Canli.h"

struct Bocek{
	canli super;
	void (*yokEtBocek)(struct Bocek*);
};
typedef struct Bocek *bocek;
bocek bocekOlustur(char isim,int x,int y,int deger,int konum);
canli SavastirBocek(const canli,canli p);
void yokEtBocek (bocek);
#endif
#ifndef HABITAT_H
#define HABITAT_H
#include "stdio.h"
#include "stdlib.h"
#include "Canli.h"
struct Habitat{
	canli **canlilar;
	int xCanliSayisi;
	int yCanliSayisi;
	void (*yokEt)(struct Habitat*);
};
typedef struct Habitat* habitat;
habitat oyun_olustur(canli **canlilar,int xCanliSayisi,int yCanliSayisi);
//habitat HabitatOlustur(Canli **canlilar,int canliSayisi);
void oyun_baslat(habitat,int canliSayisi);
void oyun_durumunu_yazdir(habitat habitatt);
void HabitatYokEt(habitat);
#endif

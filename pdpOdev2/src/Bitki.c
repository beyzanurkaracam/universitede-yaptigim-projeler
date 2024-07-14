#include "Bitki.h"
#include <string.h>

#include <stdlib.h>

bitki bitkiOlustur(char isim,int x,int y,int deger,int konum){
	
	bitki this;
	this=(bitki)malloc(sizeof(struct Bitki));
	this->super=canli_olustur(isim,x,y,deger,konum);
	this->super->savastir=&SavastirBitki;
	this->yokEtBitki=&yokEtBitki;
	return this;
}
canli SavastirBitki(const canli this, const canli p){
	
	if(p->isim == 'P' || p->isim == 'S')
	{
		p->isim = 'X';
		return this;
	}
	else{
		if(p->isim=='B'){
			if(this->deger<p->deger){
				this->isim='X';
				return p;
			}
			else if(this->deger>p->deger){ 
				p->isim='X';
				return this;
			}
			else{
				this->isim='X';
				return p;
			}
	
		}
		this->isim='X';
		
		return p;
	}
	
	
}
void yokEtBitki(bitki this){
	if(this==NULL)return;
	if(this->super!=NULL)this->super->yokEt(this->super);
	free(this);
}

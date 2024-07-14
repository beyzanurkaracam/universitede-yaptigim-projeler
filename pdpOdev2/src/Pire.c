#include "Pire.h"
pire pireOlustur(char isim,int x,int y,int deger,int konum){
	pire this;
	this=(pire)malloc(sizeof(struct Pire));
	this->super=bocekOlustur( isim, x, y, deger, konum);
	this->super->super->savastir=&SavastirPire;
	this->yokEtPire=&yokEtPire;
	return this;
}
canli SavastirPire(const canli this,const canli p){
	
	   if(p->isim=='P'){
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
		else{
		this->isim='X';
		//printf("%c",this->isim);
		return p;
		}
		
	
}
void yokEtPire(pire this){
	if(this==NULL)return;
	if(this->super!=NULL)this->super->yokEtBocek(this->super);
	free(this);
}
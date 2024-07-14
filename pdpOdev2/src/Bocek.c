#include "Bocek.h"

#include <stdlib.h>


bocek bocekOlustur(char isim,int x,int y,int deger,int konum){
	bocek this;
	
	this=(bocek)malloc(sizeof(struct Bocek));
	this->super=canli_olustur(isim,x,y,deger,konum);
	this->super->savastir=&SavastirBocek;
	this->yokEtBocek=&yokEtBocek;
	return this;
}
canli SavastirBocek(const canli this,canli p){
	
	if(p->isim=='B' || p->isim== 'P')
	{
		//printf("a");
		p->isim='X';
		return this;
	}
	else{
		if(p->isim=='C'){
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
void yokEtBocek(bocek this){
	if(this==NULL)return;
	if(this->super!=NULL)this->super->yokEt(this->super);
	free(this);
}
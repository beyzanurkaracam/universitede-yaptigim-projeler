#include "Sinek.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
sinek sinekOlustur(char isim,int x,int y,int deger,int konum){
	sinek this;
	this=(sinek)malloc(sizeof(struct Sinek));
	this->super=bocekOlustur(isim, x, y, deger, konum);
	this->super->super->savastir=&SavastirSinek;
	this->yokEtSinek=&yokEtSinek;
	return this;
}
canli SavastirSinek(const canli this,const canli p){
	
	if(p->isim=='C'|| p->isim== 'P')
	{
		p->isim='X';
		return this;
	}
	else{
		if(p->isim=='S'){
			if(this->deger<p->deger){
				this->isim='X';
				return p;
			}
			else if(this->deger>p->deger){ 
				p->isim='X';
				return this;
			}
			else if(this->deger==p->deger){
				this->isim='X';
				return p;
			}
		
		}
		this->isim='X';
		return p;
	}
	
	
}
void yokEtSinek(sinek this){
	if(this==NULL)return;
	if(this->super!=NULL)this->super->yokEtBocek(this->super);
	free(this);
}

/**
* @file G211210054_2B_FinalÖdevi
* @description 
* @course 2. Öğretim B Grubu
* @assignment Final Ödevi
* @date 24.12.2023
* @author Beyzanur Karaçam
*/
#include "Dugum.hpp"
#include <iostream>

Dugum::Dugum(int &vr, Dugum *right, Dugum *left)
{
	//dugum kurucusu
	this->data=vr;
	this->left = nullptr;
	this->right = nullptr;
	this->stack = new Stack();
	
	yukseklik = 0; //Düğüm yüksekliği kurucu fonksiyonda başlangıç değeri olarak 0 alıyor.
}

Dugum::~Dugum()//Çöp oluşmasını engellemek amacıyla yıkıcı fonksiyonda çöpler temizleniyor.
{
	this->stack->Clear();
	delete (this->stack);
	
}

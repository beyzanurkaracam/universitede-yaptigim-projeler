/**
* @file G211210054_2B_FinalÖdevi
* @description
* @course 2. Öğretim B Grubu
* @assignment Final Ödevi
* @date 24.12.2023
* @author Beyzanur Karaçam
*/
#ifndef AVLTREE_HPP
#define AVLTREE_HPP

#include "Dugum.hpp"

#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;

class AVLTree
{
public:
	Dugum *root;
	AVLTree** trees;
	int avlNo=0;
	int sayi=0;
	void FindLeaves(Dugum* root);
	void FindLeaves();
	void asciiBul(int deger);
	Dugum *AraveEkle(Dugum *,int &item);
	Dugum *SolChildIleDegistir(Dugum *);
	Dugum *SagChildIleDegistir(Dugum *);
	void Postorder(Dugum *) const;
	int Yukseklik(Dugum *) const;
	bool DeleteDugum(Dugum *&);
	AVLTree();
	bool Bosmu() const;
	void Ekle(int &item);
	void Postorder() const;
	void Temizle();
	int Yukseklik() const;
	void StackTemizle();
	int deger;
	~AVLTree();
};
#endif
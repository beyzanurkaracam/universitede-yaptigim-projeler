/**
* @file G211210054_2B_FinalÖdevi
* @description 
* @course 2. Öğretim B Grubu
* @assignment Final Ödevi
* @date 24.12.2023
* @author Beyzanur Karaçam
*/
#ifndef DUGUM_HPP
#define DUGUM_HPP


#include "Stack.hpp"

#include <iostream>

class Dugum
{
public:
  
	Stack *stack;
	int data;
	Dugum *left;
	Dugum *right;
	int yukseklik;
    int total=0;
	int derinlik = 0;

	Dugum(int &vr , Dugum *_right = nullptr, Dugum *_left = nullptr);
	~Dugum();
};
#endif
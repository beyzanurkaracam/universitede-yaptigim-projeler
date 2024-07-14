/***********************************************************************\
* @file Dugum.cpp
* @description İç içe bağlı liste ile verileri kontrol etmek 
* @course Veri Yapıları 
* @assignment 1
* @date 26/11/2023
* @author Beyzanur Karaçam beyza5834@icloud.com
\***********************************************************************/

#include "Dugum.hpp"
#include <iostream>
using namespace std;

Dugum::Dugum(Sayi* list,Dugum* next,int value)
{
    this->list=list;
    this->next=next;
    this->value=value;
}

// değer verildiyse ilk atamalarını yapıyor. Değer verilmediyse NULL atıyor.

Dugum::~Dugum()
{
    delete list;
}
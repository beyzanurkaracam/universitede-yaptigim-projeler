/***********************************************************************\
* @file Basamak.cpp
* @description İç içe bağlı liste ile verileri kontrol etmek 
* @course Veri Yapıları 
* @assignment 1
* @date 26/11/2023
* @author Beyzanur Karaçam beyza5834@icloud.com
\***********************************************************************/

#include "Basamak.hpp"

Basamak::Basamak(int value,Basamak* next)
{
    this->value=value;
    this->next=next;
   
}

// değer verildiyse ilk atamalarını yapıyor. Değer verilmediyse ya 0 ya da NULL atıyor.

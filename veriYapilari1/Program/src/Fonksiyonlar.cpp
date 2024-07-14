/***********************************************************************\
* @file Fonksiyonlar.cpp
* @description İç içe bağlı liste ile verileri kontrol etmek 
* @course Veri Yapıları 
* @assignment 1
* @date 26/11/2023
* @author Beyzanur Karaçam beyza5834@icloud.com
\***********************************************************************/

#include "Fonksiyonlar.hpp"
#include "Sayi.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <Windows.h>
using namespace std;

Sayi** GetFromText(string adress,int &sayilarSayisi)
{
		ifstream dosya(adress);

    int sayi;
    int sayac = 0;

    while (dosya >> sayi) {
        sayac++; 
    }
	sayilarSayisi=sayac;
	
dosya.close();
    cout << "Dosyada " << sayac << " adet sayi bulunuyor." << endl;
    Sayi** lists = new Sayi*[sayac]; 
	 

   ifstream dosya2(adress);
    for (int i = 0; i < sayac; i++) {
		lists[i] = new Sayi;
        int basamak = 0;
		 dosya2 >> sayi;
		 
       int temp=sayi;
        while (temp != 0) {
            temp /= 10; 
            basamak++;
        }
		
		
		 
		 
		 int temp2=sayi;
         int* numbers = new int[basamak];	
        for (int j = basamak - 1; j >=0; j--) {
			
            numbers[j] = temp2 % 10; 
            temp2=temp2/10;
			
			
			
        }
		 
		
		  
		for(int k=0;k<basamak;k++){
				lists[i]->Add(numbers[k]);
				  
			}
			lists[i]->tamSayiAl(numbers,basamak);
			 
		 
    }

    dosya.close();

    return lists;
}


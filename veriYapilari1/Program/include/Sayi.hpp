#ifndef Sayi_hpp
#define Sayi_hpp
#include "Basamak.hpp"
#include<iostream>

using namespace std;

class Sayi
{
private:
    Basamak* head;
    int length;
    double total;
    Basamak* FindPreviousByPosition(int index); 
	int alincakSayi;
	int tamSayi;
   
	
	

public:
    Basamak* Head(); 
    Sayi(); 
	void tamSayiAl(int numbers[],int basamak);
	int tamSayiVer();
	void enBuyukSayi(int numbers[],int basamak,int sayac);
	void tekSayiBasa(Sayi*& list);
	void reverse(Sayi*& list);
	void yazdir();
    int GetLength();  // satir listesinin düğümlerinin sayısı.
    bool IsEmpty();  // satir listesi bosmu diye kontrol ediyor.
    void Add(int item);
    void Insert(int index, int value);
	void Print();
    friend ostream& operator<<(ostream& print, Sayi*& list);
    ~Sayi();
};

#endif

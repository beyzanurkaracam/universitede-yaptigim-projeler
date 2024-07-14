/***********************************************************************\
* @file SayilarListesi.cpp
* @description İç içe bağlı liste ile verileri kontros etmek 
* @course Veri Yapıları 2-B
* @assignment 1
* @date 26/11/2023
* @author Beyzanur Karaçam beyza5834@icloud.com
\***********************************************************************/

#include "SayilarListesi.hpp"
#include "Fonksiyonlar.hpp"
#include <iostream>
#include <time.h>
#include <iomanip>

using namespace std;

SayilarListesi::SayilarListesi()
{
    start=NULL;
    size=0;
}

Dugum* SayilarListesi::FindPreviousNodeByIndex(int index)
{
    if(index<=0 && index>size ) throw  "out of bound";
    Dugum* temp=start;
    for (size_t i = 0; i < index-1; i++)
    {
        temp=temp->next;
    }
    return temp;
}

void SayilarListesi::Add(Sayi* list)
{
	
  insert(size,list);
}
void SayilarListesi::insert(int index, Sayi* list){
	Dugum* yeniDugum = new Dugum(list);
	if(index==0) {start= new Dugum(list,start);
	start = yeniDugum;
	yeniDugum->value=yeniDugum->list->tamSayiVer();
	}
	else{
		 Dugum* temp=FindPreviousNodeByIndex(index);
        temp->next=new Dugum(list,temp->next);
	
		temp->next->value=yeniDugum->list->tamSayiVer();
		
			cout<<yeniDugum->value;
	}
	size++;
	
 
	
}
void SayilarListesi::removeAt(int position) {
    if (position < 0 || position >= size) {
        throw "Aralık dışı";
    }

    Dugum* del = nullptr;

    if (position == 0) {
        del = start;
        start = start->next;
    } else {
        Dugum* prev = start;
        for (int i = 0; i < position - 1; i++) {
            prev = prev->next;
        }
        del = prev->next;
        prev->next = del->next;
    }

    delete del;
    size--;
}
 

void SayilarListesi::AddLinkedListArray(Sayi** lists,int sayilarSayisi) // getfromtextte listeleri oluşturdum buraya transfer ettim.
{ 
	
    for (int i = 0; i<sayilarSayisi; i++)
    { 
       Add(lists[i]);
		
    }
    cout<<endl;
}

  void SayilarListesi::enBuyukSayi()
{
	if (size == 0) {
		cout<<"Eleman kalmadi"<<endl;
	 
 
       return;
	}
	 
    Dugum* temp =  start;
	  
    Dugum* greatest =  start;
	
    Dugum* prev = nullptr;
    int maxIndex = 0;
    int currentIndex = 0;

	 
    // En büyük düğümü bulma
    while (temp != nullptr) {
        if ( temp->value > greatest->value ) {
			 
            greatest = temp;
			
            maxIndex = currentIndex;
        }
	 
        temp = temp->next;
        currentIndex++;
    }
 
 
	 removeAt(maxIndex);
     
    
	 
}
  
  // Listedeki her Sayi nesnesindeki öğelerin sırasını tersine çevirir.

  void SayilarListesi::Reverse() {
	
Dugum* temp =  start;
if (temp == nullptr) {
        cout << "Liste bos. Ters cevirme islemi yapilmayacak." <<endl;
		
        return;
    }
while(temp!=nullptr){
	temp->list->reverse(temp->list);
	temp=temp->next;
}
 
 
} 
// Tek rakamları listedeki her Sayi nesnesinin başına taşır.
void SayilarListesi::tekBasa() {
	
Dugum* temp =  start;
if (temp == nullptr) {
        cout << "Liste bos. Tek sayilari islemi yapilmayacak." <<endl;
		
        return;
    }
while(temp!=nullptr){
	temp->list->tekSayiBasa(temp->list);
	temp=temp->next;
}
    
 
} 
ostream& operator<<(ostream& print, SayilarListesi*& list)
{
    
    print<<setw(15)<<"Dugum Adresi"<<setw(15)<<"veri"<<endl;
    Dugum* temp=list->start;
	
    for (int i = 0; i < list->size; i++)
    {
		print<<setw(15)<<temp<<setw(15)<<temp->value<<endl;
        print<<setw(15)<<temp->list<<endl;
        temp=temp->next;
    }
    print<<endl;
    return print;
}
 
 
SayilarListesi::~SayilarListesi()
{
 
}




 
/***********************************************************************\
* @file Sayi.cpp
* @description İç içe bağlı liste ile verileri kontrol etmek 
* @course Veri Yapıları 
* @assignment 1
* @date 26/11/2023
* @author Beyzanur Karaçam beyza5834@icloud.com
\***********************************************************************/

#include "Sayi.hpp"
#include <iostream>
#include <iomanip>

using namespace std;

Basamak* Sayi::FindPreviousByPosition(int index)  // istenilen indexin bir önceki düğümünü döndürüyor.
{
    if(index<1 || index>length ) throw "Yanlis bir index girdiniz..";
    
    Basamak* temp=head;
    for (size_t i = 0; temp!=NULL && index-1!=i; i++)
    {
        temp=temp->next;
    }
    return temp;    
}
Basamak* Sayi::Head()
{
    return head;
}
Sayi::Sayi()
{
    head=NULL;
    length=0;
   
   
}

int Sayi::GetLength()
{
    return length;
}

bool Sayi::IsEmpty() // satir listesinin içi boşmu diye kontrol ediyor.
{
    if(head==NULL) return true;
    return false;
}
void Sayi::Print()
{
    Basamak* temp=head;
    for (size_t i = 0; i < length; i++)
    {
        cout<<i+1<<". eleman:"<<temp->value<<endl;
        temp=temp->next;
    }   
}

void Sayi::Add(int value)
{
    Insert(length,value);
	
}

void Sayi::Insert(int index, int value) // istenilen bir index'e istenilen bir değeri ekliyor.
{
    if (index < 0 || index > length) {
            throw "index out of range";
        }

        if (head == nullptr && index == 0) {
            head = new Basamak(value, head);
            ++length;
            return;
        }

        if (index == 0) {
            head = new Basamak(value, head);
            ++length;
            return;
        }

        Basamak* temp = FindPreviousByPosition(index);

        if (temp == nullptr) {
            throw "previous node not found";
        }

        temp->next = new Basamak(value, temp->next);
        ++length;
		
}

void Sayi::tamSayiAl(int numbers[],int basamak){
	
      tamSayi = 0;
    for (int i = 0; i < basamak; i++) {
        tamSayi = tamSayi * 10 + numbers[i];
    }
	 
 

  }
  
   int Sayi::tamSayiVer(){
	   
	 
      return tamSayi;
   }
   
 
   
 void Sayi::tekSayiBasa(Sayi*& list){
	 
  Basamak* current = list->head; // Listenin başını temsil eden head değişkenine erişim sağlanır

    if (current == nullptr || current->next == nullptr) {
        // Liste boş veya tek elemanlıysa işlem yapmaya gerek yok
        return;
    }

    Basamak* teklerBas = nullptr;
    Basamak* teklerSon = nullptr;
    Basamak* ciftlerBas = nullptr;
    Basamak* ciftlerSon = nullptr;

    // Listenin sonuna kadar döngü
    while (current != nullptr) {
        Basamak* temp = current;
        current = current->next;
        temp->next = nullptr;

        if (temp->value % 2 != 0) { // Eğer değer tekse
            if (teklerBas == nullptr) {
                teklerBas = temp;
                teklerSon = temp;
            } else {
                teklerSon->next = temp;
                teklerSon = teklerSon->next;
            }
        } else { // Eğer değer çiftse
            if (ciftlerBas == nullptr) {
                ciftlerBas = temp;
                ciftlerSon = temp;
            } else {
                ciftlerSon->next = temp;
                ciftlerSon = ciftlerSon->next;
            }
        }
		
    }

    if (teklerBas != nullptr) {
        teklerSon->next = ciftlerBas;
        list->head = teklerBas; // Listenin başını güncelle, artık teklerin başı listemizin başı
    } else {
        list->head = ciftlerBas; // Eğer tek sayı yoksa, listemiz çiftlerle aynı olacak
    }
		  
  }
   
    
void   Sayi:: reverse(Sayi*& list){
	   
	   
    Basamak* prev = nullptr;
    Basamak* current = list->head;
    Basamak* next = nullptr;

    // Bağlı listeyi tersine çevirme
    while (current != nullptr) {
        next = current->next; // Bir sonraki düğümü geçici olarak sakla
        current->next = prev; // Düğümün next'ini önceki düğüme bağla
        prev = current; // Önceki düğümü güncelle
        current = next; // Şu anki düğümü bir sonraki düğüm olarak güncelle
    }

    // Tersine çevrilmiş bağlı listeyi yazdırma
    list->head = prev; // Tersine çevrilen listenin başını güncelle
    current = list->head; // Güncellenmiş listenin başı

    while (current != nullptr) {
        cout << current->value << " ";
        current = current->next;
    }
    cout << endl;

	  
	   
	   
   }

 ostream& operator<<(ostream& print, Sayi*& list)
{
      
    Basamak* temp=list->head;
	
	
    for (int i = 0; i < list->length; i++)
    {
      print<<setw(15)<<temp<<setw(15)<<temp->value<<endl;
	  
        temp=temp->next;
		
    }
    print<<endl;
    return print;
}
Sayi::~Sayi()
{
    
}




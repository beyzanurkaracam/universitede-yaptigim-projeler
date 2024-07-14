#ifndef SayilarListesi_hpp
#define SayilarListesi_hpp
#include "Dugum.hpp"

class SayilarListesi
{
private:
    Dugum* start;
    int size;
    
    Dugum* FindPreviousNodeByIndex(int index);  // indexin bir önceki elemanı
    int NodeSize(int index);  // indexteki elemanın listesinde kaç tane düğüm var.
    void DugumunListesiPrint(int openedPage, int selectedDugum,int pageNumber,int selectedSayiDugum);  
    // Yonetici dugumlerin listesisini bastım.
    void DugumleriPrint(int openedPage, int selectedYoneticiDugum,int pageNumber);
    // Yonetici dugumleri bastım.


    // void SayiYazdir(int hangisi,string sekil,int openedPage, int selectedDugum,int pageNumber);
    // void Cizgi(int openedPage, int selectedDugum,int pageNumber);

public:
     void removeAt(int index);
    SayilarListesi(); // bailangıç değerlerini atadım
    friend ostream& operator<<(ostream& print, SayilarListesi*& list);
	void enBuyukSayi();
    void Add(Sayi* ); // herhangi bir satir listesi eklemek için
	void insert(int index, Sayi* list);
	void tekBasa();
	void Reverse();
    void AddLinkedListArray(Sayi** lists,int sayilarSayisi );  // sınıf dışı bir yeden okuduğum listeleri burda bu sınıfa aktardım.
      // Bizden istenilen sekilde bağlı listeleri basıyor.
     
    ~SayilarListesi();
};
#endif

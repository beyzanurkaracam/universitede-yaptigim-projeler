/**********************************************************************\
**				         	SAKARYA ÜNİVERSİTESİ
**				  BİLGİSAYAR VE BİLİŞİM BİLİMLERİ FAKÜLTESİ
**				     BİLGİSAYAR MÜHENDİSLİĞİ BÖLÜMÜ
**					       VERİ YAPILARI DERSİ
**
**		   	  ÖDEV NUMARASI.............:   1
**			  ÖĞRENCİ ADI...............:   Beyzanur Karaçam
**			  ÖĞRENCİ NUMARASI..........:  G211210054
**			  DERS GRUBU................:   2-B
\***********************************************************************/

/***********************************************************************\
* @file Sayi.cpp
* @description İç içe bağlı liste ile verileri kontrol etmek 
* @course Veri Yapıları 
* @assignment 1
* @date 26/11/2023
* @author Beyzanur Karaçam beyza5834@icloud.com
\***********************************************************************/

#include <iostream>
#include "Basamak.hpp"
#include "Dugum.hpp"
#include "Sayi.hpp"
#include "SayilarListesi.hpp"
#include "Fonksiyonlar.hpp"

using namespace std;
int main(int argc,char** argv)
{
   
	  SayilarListesi* sayilar=new SayilarListesi();
    int sayilarSayisi=0;
	int sec,konum;
    Sayi **list = GetFromText("veriler.txt",sayilarSayisi);
	 
	 
	 sayilar->AddLinkedListArray(list,sayilarSayisi);
	 cout<<sayilar<<endl;
				


	
do{
		system("CLS");
		cout<<sayilar<<endl;
		cout<<"1.Tek Basamaklari Basa Al"<<endl;
		cout<<"2.Basamaklari Tersle"<<endl;
		cout<<"3.En Buyuk Cikar"<<endl;
		cout<<"4.Cikis"<<endl;
		cout<<"Secim:";
		 
		cin>>sec;
			  
		switch(sec){
			case 1:
	             sayilar->tekBasa();
			break;
			
			case 2:
                 sayilar->Reverse();
			break;
			
			case 3:
		         sayilar->enBuyukSayi();
				 
				break;
				
			case 4:
			
				break;
			default:
				 
				break;
		}
	}while(sec != 4);

	
	
    delete sayilar;

 
    return 0;
}
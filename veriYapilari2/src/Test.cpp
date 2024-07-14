/**
* @file G211210054_2B_FinalÖdevi
* @description Main'in bulunduğu, son aşamada ödevi çalıştırdığımız Test.cpp adlı dosya.
* @course 2. Öğretim B Grubu
* @assignment Final Ödevi
* @date 24.12.2023
* @author Beyzanur Karaçam
*/
#include "AVLTree.hpp"
#include "Dugum.hpp"
#include <iostream>
#include <sstream>
#include <fstream>
#include <set>
#include <unistd.h>
#include <Windows.h>
using namespace std;

int main()
{
    ifstream Dosya("Veri.txt");
	ifstream Read;
    string yazi="";
    Read.open("Veri.txt", ios::in);
	int rowCount=0;
	int kucukSirasi=true;
	
    while (getline(Read, yazi))// satır sayısını bulmak için file'ın içerisinde döndüm
    {
       
        rowCount++;
		
    }
	
    Read.close();
    Read.open("Veri.txt", ios::in);
    yazi="";
	AVLTree** agaclar=new AVLTree*[rowCount];
	  
	for (int i = 0; i < rowCount; i++)  // read end of file
    {
		agaclar[i] = new AVLTree();
        getline(Read, yazi);
        istringstream iss(yazi);
         

    int num;

    while (iss >> num) { // Satırdaki her bir sayıyı oku
 
                agaclar[i]->Ekle(num); // Okunan sayıyı ağaca ekle
				
    }
   
		
		agaclar[i] ->Postorder();
	    agaclar[i] ->FindLeaves();
		agaclar[i] ->asciiBul( agaclar[i] ->root->total);
	    agaclar[i]->avlNo=i+1; 
	 
      		
    }
	

 
   while(rowCount!=1){
		
       int indexB = 0;
       int enBuyuk = agaclar[0]->root->stack->Top(agaclar[0]->root->stack);
	   int indexK = 0;
       int enKucuk = agaclar[0]->root->stack->Top(agaclar[0]->root->stack);
  
   if(kucukSirasi==true){
	   
	     for (int i = 0; i < rowCount; i++) {
        
        if (agaclar[i]->root->stack->Top(agaclar[i]->root->stack) < enKucuk) {
             enKucuk=agaclar[i]->root->stack->Top(agaclar[i]->root->stack) ;
            indexK = i;
			
        }

    }
	
        agaclar[indexK]->root->stack->Pop(agaclar[indexK]->root->stack);
		kucukSirasi=false;
		
		
	  if (agaclar[indexK]->root->stack->IsEmpty()) {
        // Diğer ağaçları kaydır
		
        agaclar[indexK]=nullptr;
       
        for (int i = indexK; i < rowCount - 1; i++) {
            agaclar[i] = agaclar[i + 1];
        }

        
       --rowCount;
	   
			kucukSirasi=true;
			system("cls"); 
			for (int i = 0; i < rowCount; ++i) {
       
			 
			agaclar[i]->StackTemizle();
            agaclar[i]->FindLeaves();
			agaclar[i] ->asciiBul( agaclar[i] ->root->total);  
			
   
    }
			
    }
	  
   }
   else
   {
	   int indexB = 0;
       int enBuyuk = agaclar[0]->root->stack->Top(agaclar[0]->root->stack);
	   
	   for (int i = 0; i < rowCount; i++) {
		   
        if (agaclar[i]->root->stack->Top(agaclar[i]->root->stack) > enBuyuk) {
            enBuyuk = agaclar[i]->root->stack->Top(agaclar[i]->root->stack);
            indexB = i;
        }
    }
	
    
        agaclar[indexB]->root->stack->Pop(agaclar[indexB]->root->stack);
	    kucukSirasi=true;
		
	if (agaclar[indexB]->root->stack->IsEmpty()==true) {
		 
        agaclar[indexB]=nullptr;
			
       
        for (int i = indexB; i < rowCount - 1; i++) {
			
            agaclar[i] = agaclar[i + 1];
        }
		
         
         --rowCount;
		 
      
		 kucukSirasi=true;
		 system("cls"); 
		   for (int i = 0; i < rowCount; ++i) {
			 
			agaclar[i]->StackTemizle();
            agaclar[i]->FindLeaves();
			agaclar[i] ->asciiBul( agaclar[i] ->root->total); 
    }
	 	
    }
	}

	} 
	
	cout<<endl;
	
 
	
		  agaclar[0]->FindLeaves();
		  cout<<"SON KARAKTER: ";
		  agaclar[0] ->asciiBul( agaclar[0] ->root->total);
		  cout<<endl;
		  cout<<"AVL NO: " << agaclar[0]->avlNo<<endl;

   delete[] agaclar;
    
	return 0;
}
int avlNo(int sira){
	return sira;
}
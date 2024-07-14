/**
* @file G211210054_2B_FinalÖdevi
* @description 
* @course 2. Öğretim B Grubu
* @assignment Final Ödevi
* @date 24.12.2023
* @author Beyzanur Karaçam
*/
#include "AVLTree.hpp"
#include "Stack.hpp"

#include <iostream>

using namespace std;

Dugum *AVLTree::AraveEkle(Dugum *subDugum, int &item)
{
	//cout<<"1"<<endl;

			if(subDugum == NULL) subDugum = new Dugum(item);
			
        
			else if(item < subDugum->data){
				subDugum->left = AraveEkle(subDugum->left,item);
				
				if(Yukseklik(subDugum->left) == Yukseklik(subDugum->right)+2){
					if(item < subDugum->left->data)
						subDugum = SolChildIleDegistir(subDugum);
					else{
						subDugum->left = SagChildIleDegistir(subDugum->left);
						subDugum = SolChildIleDegistir(subDugum);
					}
				}
			}
			else if(item > subDugum->data){
				subDugum->right = AraveEkle(subDugum->right,item);
				
				if(Yukseklik(subDugum->right) == Yukseklik(subDugum->left)+2){
					if(item > subDugum->right->data)
						subDugum = SagChildIleDegistir(subDugum);
					else{
						subDugum->right = SolChildIleDegistir(subDugum->right);
						subDugum = SagChildIleDegistir(subDugum);
					}
				}
			}
			else{
				
				
				}
			
			
			subDugum->yukseklik = Yukseklik(subDugum);
			return subDugum;
	
	
	
	return subDugum;
}
Dugum *AVLTree::SolChildIleDegistir(Dugum *subDugum) //AVL ağacındaki sağa dönüş gereken durumda kullanacağımız fonksiyon.
{
	Dugum *tmp = subDugum->left;
			subDugum->left = tmp->right;
			tmp->right = subDugum;
			
			subDugum->yukseklik = Yukseklik(subDugum);
			tmp->yukseklik = 1+max(Yukseklik(tmp->left),subDugum->yukseklik);
			
			return tmp;
}
Dugum *AVLTree::SagChildIleDegistir(Dugum *subDugum) //Dengeleme gereken durumda _lefta dönüş yaptıracak fonksiyon.
{
	Dugum *tmp = subDugum->right;
			subDugum->right = tmp->left;
			tmp->left = subDugum;
			
			subDugum->yukseklik = Yukseklik(subDugum);
			tmp->yukseklik = 1+max(Yukseklik(tmp->right),subDugum->yukseklik);
			
			return tmp;
}
void AVLTree::asciiBul(int deger){
	 
		int asciiDeger=0;
                asciiDeger= deger%(90-65 + 1) + 65;
				cout<<static_cast<char>(asciiDeger);
				root->total=0;
}
void AVLTree::Postorder(Dugum *subDugum) const
{
	
	if(subDugum != NULL){
				Postorder(subDugum->left);
				Postorder(subDugum->right);
				
			}
			
	
}
void AVLTree::FindLeaves(Dugum *subDugum) {
	
  if (subDugum != NULL) {
        FindLeaves(subDugum->left);
        FindLeaves(subDugum->right);

        if (subDugum->left == nullptr && subDugum->right == nullptr) {
            // Yaprak düğüm
            root->stack->Push(subDugum->data);
        } else  {
            // Yaprak değilse işlem yapılabilir (örneğin, düğüm verisini toplama ekleme)
            root->total += subDugum->data;
        }
    }
	
}



int AVLTree::Yukseklik(Dugum *subDugum) const
{
	if(subDugum == NULL) return -1;
			return 1+max(Yukseklik(subDugum->left),Yukseklik(subDugum->right));
}

bool AVLTree::DeleteDugum(Dugum *&subDugum)
{
	Dugum *delDugum = subDugum;
			
			if(subDugum->right == NULL) subDugum = subDugum->left;
			else if(subDugum->left == NULL) subDugum = subDugum->right;
			else{
				delDugum = subDugum->left;
				Dugum *parentDugum = subDugum;
				while(delDugum->right != NULL){
					parentDugum = delDugum;
					delDugum = delDugum->right;
				}
				subDugum->data = delDugum->data;
				if(parentDugum == subDugum) subDugum->left = delDugum->left;
				else parentDugum->right = delDugum->left;
			}
			delete delDugum;
			return true;
}



AVLTree::AVLTree()
{
	root = NULL;
	
}
bool AVLTree::Bosmu() const
{
	return root == NULL;
}
void AVLTree::Ekle(int &item)
{
	
	root = AraveEkle(root, item);
	
	
}

void AVLTree::Postorder() const
{
	Postorder(root);
}


void AVLTree::Temizle()
{
	while (!Bosmu())
		DeleteDugum(root);
}
int AVLTree::Yukseklik() const // Parametreiz Yukseklik fonksiyonu int türünden veri return ediyor.
{
	return Yukseklik(root); //Ağaç yüksekliğini bulmak için root parametre olarak gönderilir.
}
void AVLTree::FindLeaves() {
	root->total=0;
	FindLeaves(root);
}
void AVLTree::StackTemizle(){ //Stacki tekrardan kurar
	
	 root->stack->Clear();	
}


AVLTree::~AVLTree()//Çöp oluşumunu engellemek için yıkıcı fonksiyonda Temizle() fonksiyonumuzu çağırıyoruz.
{
	Temizle();
	   for (int i = 0; i < sayi; ++i) {
        delete trees[i]; // Ağaçları bellekten temizle
    }
    delete[] trees; // Diziyi sil
}

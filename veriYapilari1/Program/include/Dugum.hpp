#ifndef Dugum_hpp
#define Dugum_hpp
#include "Sayi.hpp"

class Dugum
{
public:
    Sayi* list;
    Dugum* next;
    int value;

    Dugum(Sayi* list=NULL,Dugum* next=NULL,int value=0);
    ~Dugum();  // list verisi de bir pointer olduğundan onu silmek için bir destructor.

};

#endif
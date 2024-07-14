#ifndef Basamak_hpp
#define Basamak_hpp

class Basamak
{
public:
    int value;
    Basamak* next;
	
    Basamak(int value=0,Basamak* next=nullptr);
};

#endif
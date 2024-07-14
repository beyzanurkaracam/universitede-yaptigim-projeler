/************************
**					          SAKARYA ÜNÝVERSÝTESÝ
**			         BÝLGÝSAYAR VE BÝLÝÞÝM BÝLÝMLERÝ FAKÜLTESÝ
**				         BÝLGÝSAYAR MÜHENDÝSLÝÐÝ BÖLÜMÜ
**				          PROGRAMLAMAYA GÝRÝÞÝ DERSÝ
**
**				ÖDEV NUMARASI:2
**				ÖÐRENCÝ ADI:BEYZANUR KARAÇAM
**				ÖÐRENCÝ NUMARASI:G211210054
**				DERS GRUBU:C
*************************/

#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;
class complexNumbers
{
private:
    double real;
    double imaginer;
public:
    complexNumbers() :real(0), imaginer(0) {};


    void getValue() // to get value of real and imaginer
    {
        cout << "real: "; cin >> real;

        cout << "imaginer: "; cin >> imaginer;

    }
    complexNumbers operator +(complexNumbers obj) //to sum the complex numbers
    {
        complexNumbers sum;
        sum.real = real + obj.real;
        sum.imaginer = imaginer + obj.imaginer;
        return sum;
    }
    complexNumbers operator -(complexNumbers obj) //to extract the complex numbers
    {
        complexNumbers extraction;
        extraction.real = real - obj.real;
        extraction.imaginer = imaginer - obj.imaginer;
        return extraction;
    }
    complexNumbers operator *(complexNumbers obj) //to multiply the complex numbers
    {
        complexNumbers multiplication;
        multiplication.real = real * obj.real - imaginer * obj.imaginer;
        multiplication.imaginer = real * obj.imaginer + imaginer * obj.real;
        return multiplication;

    }
    complexNumbers operator /(complexNumbers obj) //to divide the complex numbers
    {
        complexNumbers divide;
        float realnumber = obj.real * obj.real + obj.imaginer * obj.imaginer;
        divide.real = (real * obj.real - imaginer * (-1 * obj.imaginer)) / realnumber;
        divide.imaginer = (real * (-1 * obj.imaginer) + imaginer * obj.real) / realnumber;
        return divide;

    }
    complexNumbers operator +=(complexNumbers obj) //to sum the complex numbers with the help of plus equal sign
    {
        complexNumbers plusEqual;
        plusEqual.real += obj.real;
        plusEqual.imaginer += obj.imaginer;
        return  plusEqual;
    }
    complexNumbers operator -=(complexNumbers obj) // to extract the complex numbers with the help of minus equal sign
    {
        complexNumbers minusequal;
        minusequal.real -= obj.real;
        minusequal.imaginer -= obj.imaginer;
        return  minusequal;
    }
    complexNumbers operator *=(complexNumbers obj) // to multiply the complex numbers with the help of multiplication equal sign
    {
        double temp = this->real;
        this->real *= obj.real;
        real += (-1 * (imaginer * obj.imaginer));
        this->imaginer *= obj.real;
        imaginer += temp * obj.imaginer;
        return *this;
    }
    complexNumbers operator /=(complexNumbers obj) // to divide the complex numbers with the help of slash equal sign
    {
        double dividing = obj.real * obj.real + obj.imaginer * obj.imaginer;
        double temporary = this->real;
        this->real /= dividing;
        this->imaginer = (temporary * (-1 * obj.imaginer) + imaginer * obj.real);
        this->imaginer /= dividing;
        return *this;
    }
    float convertRadiansToDegress(float r) //for radian
    {
        const double pi = 3.14;
        return r + 100 / pi;
    }
    void polarNotation() // to calculate the polar notation
    {
        cout << "the polar notation: ";
        cout << sqrt(pow(real, 2) + pow(imaginer, 2)) << ' ';
        cout << convertRadiansToDegress(atan(real / imaginer)) << endl;

    }
    void print() //to print the values 
    {
        if (imaginer < 0)
            cout << real << " " << imaginer << "i" << endl;
        else
            cout << real << "+" << imaginer << "i" << endl;
    }

};

int main()
{
    complexNumbers k1, k2; //for the values
    k1.getValue();
    k2.getValue();
    complexNumbers k3; //for the results

    char choose1, choose2;

    do
    {
        //options for the mathematical operations
        cout << "choose a mathematical operation: " << endl;
        cout << "press + for addition" << endl;
        cout << "press - for extraction" << endl;
        cout << "press * for multiplication" << endl;
        cout << "press / for division" << endl;
        cout << "press += for equal additon" << endl;
        cout << "press -= for equal extraction" << endl;
        cout << "press /= for equal division" << endl;
        cout << "press *= for equal multiplication" << endl;
        cout << "press p for polar notation" << endl;

        cin >> choose1;
        switch (choose1)
        {
        case '+': // to call the additon operation

            k3 = k1 + k2;
            k3.print();
            break;
        case'-': // to call the multiplication operation

            k3 = k1 - k2;
            k3.print();
            break;
        case'*': // to call the extraction operation

            k3 = k1 * k2;
            k3.print();
            break;
        case'/': // to call the division operation

            k3 = k1 / k2;
            k3.print();
            break;
        case'+=': //to call the equal additon
            k1 += k2;
            k1.print();
            break;
        case'-=': //to call the equal extraction
            k1 -= k2;
            k1.print();
            break;
        case'*=': //to call the equal multiplication
            k1 *= k2;
            k1.print();
            break;
        case'/=': // to call the equal division
            k1 /= k2;
            k1.print();
            break;
        case'p': // to call the polar notation
            k1.polarNotation();
            break;
        }
        cout << "if you want to continue press c or C ..." << endl;
        cout << "if you dont want to continue press s or S ..." << endl;
        cout << "choose2: "; cin >> choose2;
        system("CLS");

    } while (!(choose2 == 's' || choose2 == 'S'));

}
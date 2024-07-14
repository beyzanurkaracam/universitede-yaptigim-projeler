/**********************************************************************
**					          SAKARYA ÜNİVERSİTESİ
**			         BİLGİSAYAR VE BİLİŞİM BİLİMLERİ FAKÜLTESİ
**				         BİLGİSAYAR MÜHENDİSLİĞİ BÖLÜMÜ
**				          PROGRAMLAMAYA GİRİŞİ DERSİ
**
**				ÖDEV NUMARASI:1
**				ÖĞRENCİ ADI:BEYZANUR KARAÇAM
**				ÖĞRENCİ NUMARASI:G211210054
**				DERS GRUBU:C
***********************************************************************/
#include <iostream>
#include <locale.h>
#include <cmath>
#include <windows.h>
#include <stdlib.h>
#include <locale.h>



using namespace std;

string name[30] =  // for the random names 
{
    "Beyza",
    "Tarik",
    "Ertugrul",
    "Dicle",
    "Ebru",
    "Ferhat",
    "Berat",
    "Mesut",
    "Aysel",
    "Mustafa",
    "Sidika",
    "Esma",
    "Rumeysa",
    "Merve",
    "Yagmur",
    "Sumeyye",
    "Zelal",
    "Gulsum",
    "Rabia",
    "Nursena",
    "Alp",
    "Fatih",
    "Selma",
    "Sefa",
    "Alaattin",
    "Maside",
    "Duygu",
    "Elif",
    "Mehmet",
    "Suden",
};
string surname[30] //for the random surnmaes
{
    "Karacam",
    "Kalyoncu",
    "Bolek",
    "Parlakci",
    "Kocaaslan",
    "Adiyaman",
    "Yilmaz",
    "Dogan",
    "Eriden",
    "Baslik",
    "Yalcin",
    "Kayacan",
    "Kaya",
    "Ada",
    "Bayram",
    "Samci",
    "Oner",
    "Mavi",
    "İnci",
    "Goktas",
    "Ozaslan",
    "Akbaba",
    "İsik",
    "Korkmaz",
    "Kocak",
    "Ziyagil",
    "Yoreoglu",
    "Haznedar",
    "Birlik",
    "Yıldız",
};


struct Date // this struct for date
{
    int day;
    int month;
    int year;
};


int randomNumber1()//to generate random numbers
{
    int a;
    a = rand() % 30;
    return a;

}
int randomNumber2()//to generate random numbers
{
    int b;
    b = rand() % 40;
    return b;

}
int randomNumber3()//to generate random numbers
{
    int c;
    c = rand() % 30 + 40;
    return c;
}
int randomNumber4()//to generate random numbers
{
    int d;
    d = rand() % 10 + 70;
    return d;
}
int randomNumber5()//to generate random numbers
{
    int e;
    e = rand() % 20 + 80;
    return e;
}
int randomNumber6()//to generate random numbers
{
    int f;
    f = rand() % 100;
    return f;
}
int randomNumber7()//To generate random numbers
{
    int h;
    h = rand() % 30 + 1;//Generates 1 to 31
    return h;
}
int randomNumber8()//To generate random numbers
{
    int j;
    j = rand() % 11 + 1;//Generates 1 to 12
    return j;
}
int randomNumber9()//To generate random numbers
{
    int k;
    k = rand() % 24 + 1980;//Generates 1980 to 2004 
    return k;
}
int randomNumber10() // for sutudents' no
{
    int m;
    m = rand() % 100;
    return m;
}
string Translate(double Note)//Convert note to characters
{

    if (Note >= 90 && Note <= 100)
    {
        return "AA";
    }
    else if (Note >= 85 && Note <= 89)
    {
        return "BA";
    }
    else if (Note >= 80 && Note <= 84)
    {
        return "BB";
    }
    else if (Note >= 70 && Note <= 79)
    {
        return "CB";
    }
    else if (Note >= 60 && Note <= 69)
    {
        return "CC";
    }
    else if (Note >= 55 && Note <= 59)
    {
        return "DC";
    }
    else if (Note >= 50 && Note <= 54)
    {
        return "DD";
    }
    else if (Note >= 40 && Note <= 49)
    {
        return "FD";
    }
    else if (Note >= 0 && Note <= 39)
    {
        return "FF";
    }
    else
    {
        return "WRONG NOTE";
    }

}

struct Student // this struct for student informations
{
    string name;
    string surname;
    int no;
    int quiz1;
    int quiz2;
    int assignment1;
    int assignment2;
    int project;
    int midtermexam;
    int finalexam;
    double avry;
    double avr;
    Date date;
};

void valueName_Surname(Student ogr[])//I assigned the first and last name values
{

    for (int i = 0; i < 100; i++) // This loop for random names and surnames
    {
        ogr[i] = { name[randomNumber1()], surname[randomNumber1()] };
    }
}

void random2(Student ogr[])//I assigned the notes
{
    for (int i = 0; i < 10; i++)//for the first 10 student
    {
        ogr[i].quiz1 = randomNumber2();
        ogr[i].quiz2 = randomNumber2();
        ogr[i].midtermexam = randomNumber2();
        ogr[i].finalexam = randomNumber2();
        ogr[i].project = randomNumber2();
        ogr[i].assignment1 = randomNumber2();
        ogr[i].assignment2 = randomNumber2();
    }
}

void random3(Student ogr[])//I assigned the notes
{
    for (int i = 10; i < 60; i++) // 50 student's grade informations
    {
        ogr[i].quiz1 = randomNumber3();
        ogr[i].quiz2 = randomNumber3();
        ogr[i].midtermexam = randomNumber3();
        ogr[i].finalexam = randomNumber3();
        ogr[i].project = randomNumber3();
        ogr[i].assignment1 = randomNumber3();
        ogr[i].assignment2 = randomNumber3();
    }
}

void random4(Student ogr[])//I assigned the notes
{
    for (int i = 60; i < 75; i++) // 15 student's grade informations
    {

        ogr[i].quiz1 = randomNumber4();
        ogr[i].quiz2 = randomNumber4();
        ogr[i].midtermexam = randomNumber4();
        ogr[i].finalexam = randomNumber4();
        ogr[i].project = randomNumber4();
        ogr[i].assignment1 = randomNumber4();
        ogr[i].assignment2 = randomNumber4();
    }
}

void random5(Student ogr[])//I assigned the notes
{
    for (int i = 75; i < 100; i++) // 25 student's grade informations
    {

        ogr[i].quiz1 = randomNumber5();
        ogr[i].quiz2 = randomNumber5();
        ogr[i].midtermexam = randomNumber5();
        ogr[i].finalexam = randomNumber5();
        ogr[i].project = randomNumber5();
        ogr[i].assignment1 = randomNumber5();
        ogr[i].assignment2 = randomNumber5();
    }
}

void random6(Student ogr[]) {//I set the grades

    for (int i = 0; i < 100; i++)//To reach 100 students
    {
        int avr, avry;
        avr = ogr[i].midtermexam * 50 / 100 + ogr[i].quiz1 * 7 / 100 + ogr[i].quiz2 * 7 / 100 + ogr[i].assignment1 * 10 / 100 + ogr[i].assignment2 * 10 / 100 + ogr[i].project * 16 / 100;
        avry = avr * 55 / 100 + ogr[i].finalexam * 45 / 100;
        ogr[i].date.day = randomNumber7();
        ogr[i].date.month = randomNumber8();
        ogr[i].date.year = randomNumber9();
        ogr[i].no = randomNumber10();
    }
}
void menu(Student ogr[])
{
    Date t1;
    char select;
    double standardDeviation = 0;
    double sum1 = 0;
    double classaverage;
    int sum = 0;
    double avr = 0;
    double avry = 0;
    int choose1;
    double maxgrade = 0;
    double mingrade = 100;

    do
    {
        cout << "FIRST OPTIONS" << endl;
        cout << "press 1 key for random informations..." << endl;
        cout << "press 2 key to enter manual information..." << endl;
        cout << "press 3 key for options..." << endl;
        cin >> choose1;
        system("CLS");
        switch (choose1)
        {

        case 1:
            for (int i = 0; i < 100; i++) //information of all students
            {
                cout << "Name: " << ogr[i].name << endl;
                cout << "Surname: " << ogr[i].surname << endl;
                cout << "Student No: " << ogr[i].no << endl;
                cout << "Quiz1: " << ogr[i].quiz1 << endl;
                cout << "Quiz2: " << ogr[i].quiz2 << endl;
                cout << "Midterm Exam: " << ogr[i].midtermexam << endl;
                cout << "Final Exam: " << ogr[i].finalexam << endl;
                cout << "Assignment1: " << ogr[i].assignment1 << endl;
                cout << "Assignment2: " << ogr[i].assignment2 << endl;
                cout << "Date: " << ogr[i].date.day << ".";
                cout << ogr[i].date.month << ".";
                cout << ogr[i].date.year << endl;
                cout << endl;
            }
            break;


        case 2:
            double avr, avry;
            for (int i = 0; i < 100; i++) // to get manual information
            {
                ogr[i] = { name[randomNumber1()], surname[randomNumber1()] };
                cout << "Name: ";
                cin >> ogr[i].name;
                cout << "Surname: ";
                cin >> ogr[i].surname;
                cout << "enter the quiz1 grade: ";
                cin >> ogr[i].quiz1;
                cout << "enter the quiz2 grade: ";
                cin >> ogr[i].quiz2;
                cout << "enter the midterm exam grade: ";
                cin >> ogr[i].midtermexam;
                cout << "enter the final exam grade: ";
                cin >> ogr[i].finalexam;
                cout << "enter the assignment2 grade: ";
                cin >> ogr[i].assignment2;
                cout << "enter the assignment2 grade: ";
                cin >> ogr[i].assignment2;
                // avr= average except final grade avry=grade average of the year
                avr = ogr[i].midtermexam * 50 / 100 + ogr[i].quiz1 * 7 / 100 + ogr[i].quiz2 * 7 / 100 + ogr[i].assignment1 * 10 / 100 + ogr[i].assignment2 * 10 / 100 + ogr[i].project * 16 / 100;
                avry = avr * 55 / 100 + ogr[i].finalexam * 45 / 100;
                cout << "END OF THE YEAR AVERAGE: " << avry << "/";
                cout << Translate(ogr[i].avry) << endl;
                char ch;
                cout << "if you want to continue, press the a or A key... " << endl;
                cout << "if you want to see first options, press the B or b key... " << endl;
                cin >> ch;
                if (ch == 'a' && 'A')
                    continue;
                if (ch == 'b' && 'B')
                    break;

            }
            break;
        case 3:
            int options;
            cout << "choose a option 1-8..." << endl;
            cout << "choose a option 1-8..." << endl;
            cout << "1) CLASS LIST" << endl;
            cout << "2) MAX GRADE" << endl;
            cout << "3) MIN GRADE" << endl;
            cout << "4) CLASS' AVERAGE" << endl;
            cout << "5) CLASS' STANDARD DEVITION" << endl;
            cout << "6) CLASS LIST BY RANGE OF SUCCESS" << endl;
            cout << "7) LIST OF STUDENTS UNDER THE DESIRED AVERAGE VALUE" << endl;
            cout << "8) LIST OF STUDENTS OVER THE DESIRED AVERAGE VALUE" << endl;
            cin >> options;


            switch (options)
            {

                for (int i = 0; i < 100; i++)
                {
                    double avr, avry;
                    avr = ogr[i].midtermexam * 50 / 100 + ogr[i].quiz1 * 7 / 100 + ogr[i].quiz2 * 7 / 100 + ogr[i].assignment1 * 10 / 100 + ogr[i].assignment2 * 10 / 100 + ogr[i].project * 16 / 100;
                    avry = avr * 55 / 100 + ogr[i].finalexam * 45 / 100;
                }
            case 1:
                for (int i = 0; i < 20; i++) // calculating average grade for 20 students
                {

                    ogr[i] = { name[randomNumber1()], surname[randomNumber1()] };
                    cout << ogr[i].name << "  ";
                    cout << ogr[i].surname << endl;
                    ogr[i].quiz1 = randomNumber6();
                    ogr[i].quiz2 = randomNumber6();
                    ogr[i].midtermexam = randomNumber6();
                    ogr[i].finalexam = randomNumber6();
                    ogr[i].project = randomNumber6();
                    ogr[i].assignment1 = randomNumber6();
                    ogr[i].assignment2 = randomNumber6();
                    cout << "Quiz1: " << ogr[i].quiz1 << endl;
                    cout << "Quiz2: " << ogr[i].quiz2 << endl;
                    cout << "Midterm Exam: " << ogr[i].midtermexam << endl;
                    cout << "Final Exam: " << ogr[i].finalexam << endl;
                    cout << "Assignment1: " << ogr[i].assignment1 << endl;
                    cout << "Assignment2: " << ogr[i].assignment2 << endl;
                    avr = ogr[i].midtermexam * 50 / 100 + ogr[i].quiz1 * 7 / 100 + ogr[i].quiz2 * 7 / 100 + ogr[i].assignment1 * 10 / 100 + ogr[i].assignment2 * 10 / 100 + ogr[i].project * 16 / 100;
                    avry = avr * 55 / 100 + ogr[i].finalexam * 45 / 100;

                    cout << "END OF THE YEAR AVERAGE: " << avry << "/";
                    cout << Translate(ogr[i].avry) << endl;
                    char ch;

                }
                char con;
                cout << "if you want to continue, press a or A..." << endl;
                cout << "if you want to see , press b or B..." << endl;
                cin >> con;
                if (con == 'a' || con == 'A')
                {
                    system("cls");
                }
                else if (con == 'B' || con == 'b')
                    break;

                for (int i = 20; i < 40; i++) //to calculate the average grade for other 20 students
                {

                    ogr[i] = { name[randomNumber1()], surname[randomNumber1()] };
                    cout << ogr[i].name << "  ";
                    cout << ogr[i].surname << endl;
                    ogr[i].quiz1 = randomNumber6();
                    ogr[i].quiz2 = randomNumber6();
                    ogr[i].midtermexam = randomNumber6();
                    ogr[i].finalexam = randomNumber6();
                    ogr[i].project = randomNumber6();
                    ogr[i].assignment1 = randomNumber6();
                    ogr[i].assignment2 = randomNumber6();
                    cout << "Quiz1: " << ogr[i].quiz1 << endl;
                    cout << "Quiz2: " << ogr[i].quiz2 << endl;
                    cout << "Midterm Exam: " << ogr[i].midtermexam << endl;
                    cout << "Final Exam: " << ogr[i].finalexam << endl;
                    cout << "Assignment1: " << ogr[i].assignment1 << endl;
                    cout << "Assignment2: " << ogr[i].assignment2 << endl;

                    avr = ogr[i].midtermexam * 50 / 100 + ogr[i].quiz1 * 7 / 100 + ogr[i].quiz2 * 7 / 100 + ogr[i].assignment1 * 10 / 100 + ogr[i].assignment2 * 10 / 100 + ogr[i].project * 16 / 100;
                    avry = avr * 55 / 100 + ogr[i].finalexam * 45 / 100;
                    cout << "END OF THE YEAR AVERAGE: " << avry << "/";
                    cout << Translate(ogr[i].avry) << endl;
                    char ch;

                }

                cout << "if you want to continue, press a or A..." << endl;
                cout << "if you want to see first options, press b or B..." << endl;
                cin >> con;
                if (con == 'a' || con == 'A')
                    system("cls");
                else if (con == 'b' || con == 'B')
                    break;

                for (int i = 40; i < 60; i++) //to calculate the average grade for other 20 students
                {
                    ogr[i] = { name[randomNumber1()], surname[randomNumber1()] };
                    cout << ogr[i].name << "  ";
                    cout << ogr[i].surname << endl;
                    ogr[i].quiz1 = randomNumber6();
                    ogr[i].quiz2 = randomNumber6();
                    ogr[i].midtermexam = randomNumber6();
                    ogr[i].finalexam = randomNumber6();
                    ogr[i].project = randomNumber6();
                    ogr[i].assignment1 = randomNumber6();
                    ogr[i].assignment2 = randomNumber6();
                    cout << "Quiz1: " << ogr[i].quiz1 << endl;
                    cout << "Quiz2: " << ogr[i].quiz2 << endl;
                    cout << "Midterm Exam: " << ogr[i].midtermexam << endl;
                    cout << "Final Exam: " << ogr[i].finalexam << endl;
                    cout << "Assignment1: " << ogr[i].assignment1 << endl;
                    cout << "Assignment2: " << ogr[i].assignment2 << endl;

                    avr = ogr[i].midtermexam * 50 / 100 + ogr[i].quiz1 * 7 / 100 + ogr[i].quiz2 * 7 / 100 + ogr[i].assignment1 * 10 / 100 + ogr[i].assignment2 * 10 / 100 + ogr[i].project * 16 / 100;
                    avry = avr * 55 / 100 + ogr[i].finalexam * 45 / 100;
                    cout << "END OF THE YEAR AVERAGE: " << avry << "/";
                    cout << Translate(ogr[i].avry) << endl;
                    char ch;
                }

                cout << "if you want to continue, press a or A..." << endl;
                cout << "if you want to see first toptions, press b or B..." << endl;
                cin >> con;
                if (con == 'a' || con == 'A')
                    system("cls");
                else if (con == 'b' || con == 'B')
                    break;
                for (int i = 60; i < 80; i++) //to calculate the average grade for other 20 students
                {
                    ogr[i] = { name[randomNumber1()], surname[randomNumber1()] };
                    cout << ogr[i].name << "  ";
                    cout << ogr[i].surname << endl;
                    ogr[i].quiz1 = randomNumber6();
                    ogr[i].quiz2 = randomNumber6();
                    ogr[i].midtermexam = randomNumber6();
                    ogr[i].finalexam = randomNumber6();
                    ogr[i].project = randomNumber6();
                    ogr[i].assignment1 = randomNumber6();
                    ogr[i].assignment2 = randomNumber6();
                    cout << "Quiz1: " << ogr[i].quiz1 << endl;
                    cout << "Quiz2: " << ogr[i].quiz2 << endl;
                    cout << "Midterm Exam: " << ogr[i].midtermexam << endl;
                    cout << "Final Exam: " << ogr[i].finalexam << endl;
                    cout << "Assignment1: " << ogr[i].assignment1 << endl;
                    cout << "Assignment2: " << ogr[i].assignment2 << endl;

                    avr = ogr[i].midtermexam * 50 / 100 + ogr[i].quiz1 * 7 / 100 + ogr[i].quiz2 * 7 / 100 + ogr[i].assignment1 * 10 / 100 + ogr[i].assignment2 * 10 / 100 + ogr[i].project * 16 / 100;
                    avry = avr * 55 / 100 + ogr[i].finalexam * 45 / 100;
                    cout << "END OF THE YEAR AVERAGE: " << avry << "/";
                    cout << Translate(ogr[i].avry) << endl;
                    char ch;
                }

                cout << "if you want to continue, press a or A..." << endl;
                cout << "if you want to see first options, press b or B..." << endl;
                cin >> con;
                if (con == 'a' || con == 'A')
                    system("cls");
                else if (con == 'b' || con == 'B')
                    break;
                for (int i = 80; i < 100; i++) //to calculate the average grade for other 20 students
                {
                    ogr[i] = { name[randomNumber1()], surname[randomNumber1()] };
                    cout << ogr[i].name << "  ";
                    cout << ogr[i].surname << endl;
                    ogr[i].quiz1 = randomNumber6();
                    ogr[i].quiz2 = randomNumber6();
                    ogr[i].midtermexam = randomNumber6();
                    ogr[i].finalexam = randomNumber6();
                    ogr[i].project = randomNumber6();
                    ogr[i].assignment1 = randomNumber6();
                    ogr[i].assignment2 = randomNumber6();
                    cout << "Quiz1: " << ogr[i].quiz1 << endl;
                    cout << "Quiz2: " << ogr[i].quiz2 << endl;
                    cout << "Midterm Exam: " << ogr[i].midtermexam << endl;
                    cout << "Final Exam: " << ogr[i].finalexam << endl;
                    cout << "Assignment1: " << ogr[i].assignment1 << endl;
                    cout << "Assignment2: " << ogr[i].assignment2 << endl;
                    avr = ogr[i].midtermexam * 50 / 100 + ogr[i].quiz1 * 7 / 100 + ogr[i].quiz2 * 7 / 100 + ogr[i].assignment1 * 10 / 100 + ogr[i].assignment2 * 10 / 100 + ogr[i].project * 16 / 100;
                    avry = avr * 55 / 100 + ogr[i].finalexam * 45 / 100;
                    cout << "END OF THE YEAR AVERAGE: " << avry << "/";
                    cout << Translate(ogr[i].avry) << endl;
                    char ch;
                }
                cout << "if you want to continue, press a or A..." << endl;
                cout << "if you want to see first options, press b or B..." << endl;
                cin >> con;
                if (con == 'a' || con == 'A')
                    system("cls");
                else if (con == 'b' || con == 'B')
                    break;
            case 2:

                for (int i = 1; i < 100; i++) // to generate the maximum grade
                {
                    ogr[i].quiz1 = randomNumber6();
                    ogr[i].quiz2 = randomNumber6();
                    ogr[i].midtermexam = randomNumber6();
                    ogr[i].finalexam = randomNumber6();
                    ogr[i].project = randomNumber6();
                    ogr[i].assignment1 = randomNumber6();
                    ogr[i].assignment2 = randomNumber6();
                    ogr[i].avr = ogr[i].midtermexam * 50 / 100 + ogr[i].quiz1 * 7 / 100 + ogr[i].quiz2 * 7 / 100 + ogr[i].assignment1 * 10 / 100 + ogr[i].assignment2 * 10 / 100 + ogr[i].project * 16 / 100;
                    ogr[i].avry = ogr[i].avr * 55 / 100 + ogr[i].finalexam * 45 / 100;
                    if (ogr[i].avry > maxgrade)
                    {
                        maxgrade = ogr[i].avry;
                    }
                }
                cout << "MAX GRADE: " << maxgrade << endl;
                break;
            case 3:

                for (int i = 1; i < 100; i++) // to generate the minimum grade
                {
                    ogr[i].quiz1 = randomNumber6();
                    ogr[i].quiz2 = randomNumber6();
                    ogr[i].midtermexam = randomNumber6();
                    ogr[i].finalexam = randomNumber6();
                    ogr[i].project = randomNumber6();
                    ogr[i].assignment1 = randomNumber6();
                    ogr[i].assignment2 = randomNumber6();
                    ogr[i].avr = ogr[i].midtermexam * 50 / 100 + ogr[i].quiz1 * 7 / 100 + ogr[i].quiz2 * 7 / 100 + ogr[i].assignment1 * 10 / 100 + ogr[i].assignment2 * 10 / 100 + ogr[i].project * 16 / 100;
                    ogr[i].avry = ogr[i].avr * 55 / 100 + ogr[i].finalexam * 45 / 100;
                    if (ogr[i].avry < mingrade)
                    {
                        mingrade = ogr[i].avry;
                    }
                }
                cout << "MIN GRADE: " << mingrade << endl;
                break;
            case 4:
                for (int i = 0; i < 100; i++) // to generate the class average 
                {
                    ogr[i].quiz1 = randomNumber6();
                    ogr[i].quiz2 = randomNumber6();
                    ogr[i].midtermexam = randomNumber6();
                    ogr[i].finalexam = randomNumber6();
                    ogr[i].project = randomNumber6();
                    ogr[i].assignment1 = randomNumber6();
                    ogr[i].assignment2 = randomNumber6();
                    ogr[i].avr = ogr[i].midtermexam * 50 / 100 + ogr[i].quiz1 * 7 / 100 + ogr[i].quiz2 * 7 / 100 + ogr[i].assignment1 * 10 / 100 + ogr[i].assignment2 * 10 / 100 + ogr[i].project * 16 / 100;
                    ogr[i].avry = ogr[i].avr * 55 / 100 + ogr[i].finalexam * 45 / 100;
                    sum = sum + ogr[i].avry;
                }
                cout << "SUM: " << sum << endl;
                cout << "CLASS AVERAGE: " << sum / 100 << endl;
                break;
            case 5:
                for (int i = 0; i < 100; i++)

                {
                    ogr[i].quiz1 = randomNumber6();
                    ogr[i].quiz2 = randomNumber6();
                    ogr[i].midtermexam = randomNumber6();
                    ogr[i].finalexam = randomNumber6();
                    ogr[i].project = randomNumber6();
                    ogr[i].assignment1 = randomNumber6();
                    ogr[i].assignment2 = randomNumber6();
                    ogr[i].avr = ogr[i].midtermexam * 50 / 100 + ogr[i].quiz1 * 7 / 100 + ogr[i].quiz2 * 7 / 100 + ogr[i].assignment1 * 10 / 100 + ogr[i].assignment2 * 10 / 100 + ogr[i].project * 16 / 100;
                    ogr[i].avry = ogr[i].avr * 55 / 100 + ogr[i].finalexam * 45 / 100;
                    sum1 = sum1 + ogr[i].avry;
                }
                classaverage = sum1 / 100;//I divided the sum of all grades by 100 for the average.
                for (int i = 0; i < 100; i++)
                {
                    avr = ogr[i].midtermexam * 50 / 100 + ogr[i].quiz1 * 7 / 100 + ogr[i].quiz2 * 7 / 100 + ogr[i].assignment1 * 10 / 100 + ogr[i].assignment2 * 10 / 100 + ogr[i].project * 16 / 100;
                    avry = avr * 55 / 100 + ogr[i].finalexam * 45 / 100;
                    standardDeviation += pow(avry - classaverage, 2);//standard deviation formula start
                }
                cout << "STANDARD DEVIATION:" << sqrt(standardDeviation / 99) << endl;//standard deviation formula
                standardDeviation = 0;// I reseted it to get the same result again.
                sum = 0;
                break;
            case 6:

                int x, y;
                cout << "write the range of grades..." << endl;
                cout << "min: ";
                cin >> x;
                cout << "max: ";
                cin >> y;
                for (int i = 0; i < 100; i++) // to find out the ranges of grades i ask 
                {
                    ogr[i] = { name[randomNumber1()], surname[randomNumber1()] };
                    ogr[i].quiz1 = randomNumber6();
                    ogr[i].quiz2 = randomNumber6();
                    ogr[i].midtermexam = randomNumber6();
                    ogr[i].finalexam = randomNumber6();
                    ogr[i].project = randomNumber6();
                    ogr[i].assignment1 = randomNumber6();
                    ogr[i].assignment2 = randomNumber6();
                    ogr[i].avr = ogr[i].midtermexam * 50 / 100 + ogr[i].quiz1 * 7 / 100 + ogr[i].quiz2 * 7 / 100 + ogr[i].assignment1 * 10 / 100 + ogr[i].assignment2 * 10 / 100 + ogr[i].project * 16 / 100;
                    ogr[i].avry = ogr[i].avr * 55 / 100 + ogr[i].finalexam * 45 / 100;
                    if (ogr[i].avry >= x && ogr[i].avry < y)
                    {
                        cout << ogr[i].name << "  " << ogr[i].surname << "  " << ogr[i].avry << endl;
                    }

                }
                break;
            case 7:
                int z;
                cout << "write the max grade: "; //to find out the grades between 0 and number
                cin >> z;
                for (int i = 0; i < 100; i++)
                {
                    ogr[i] = { name[randomNumber1()], surname[randomNumber1()] };
                    ogr[i].quiz1 = randomNumber6();
                    ogr[i].quiz2 = randomNumber6();
                    ogr[i].midtermexam = randomNumber6();
                    ogr[i].finalexam = randomNumber6();
                    ogr[i].project = randomNumber6();
                    ogr[i].assignment1 = randomNumber6();
                    ogr[i].assignment2 = randomNumber6();
                    ogr[i].avr = ogr[i].midtermexam * 50 / 100 + ogr[i].quiz1 * 7 / 100 + ogr[i].quiz2 * 7 / 100 + ogr[i].assignment1 * 10 / 100 + ogr[i].assignment2 * 10 / 100 + ogr[i].project * 16 / 100;
                    ogr[i].avry = ogr[i].avr * 55 / 100 + ogr[i].finalexam * 45 / 100;

                    if (ogr[i].avry < z)
                    {

                        cout << ogr[i].name << "  " << ogr[i].surname << "  " << ogr[i].avry << endl;
                    }
                }
                break;
            case 8:
                int t;
                cout << "write the min grade: "; //to find out the grades between number and 100
                cin >> t;
                for (int i = 0; i < 100; i++)
                {

                    ogr[i] = { name[randomNumber1()], surname[randomNumber1()] };
                    ogr[i].quiz1 = randomNumber6();
                    ogr[i].quiz2 = randomNumber6();
                    ogr[i].midtermexam = randomNumber6();
                    ogr[i].finalexam = randomNumber6();
                    ogr[i].project = randomNumber6();
                    ogr[i].assignment1 = randomNumber6();
                    ogr[i].assignment2 = randomNumber6();
                    ogr[i].avr = ogr[i].midtermexam * 50 / 100 + ogr[i].quiz1 * 7 / 100 + ogr[i].quiz2 * 7 / 100 + ogr[i].assignment1 * 10 / 100 + ogr[i].assignment2 * 10 / 100 + ogr[i].project * 16 / 100;
                    ogr[i].avry = ogr[i].avr * 55 / 100 + ogr[i].finalexam * 45 / 100;

                    if (ogr[i].avry > t)
                    {

                        cout << ogr[i].name << "  " << ogr[i].surname << "  " << ogr[i].avry << endl;
                    }
                }
                break;
            }
            break;

        }
        cout << "if you want to continue press c or C key..." << endl;
        cout << "if you want to stop press s or S key..." << endl;
        cin >> select;
    } while (select == 'c' || select == 'C');
}
int main()
{
    system("color 57"); //for background and text color
    setlocale(LC_ALL, "Turkish"); //for turkis characters
    Student ogr[100];
    Date t1;
    valueName_Surname(ogr);
    random2(ogr);
    random3(ogr);
    random4(ogr);
    random5(ogr);
    random6(ogr);
    menu(ogr);

}
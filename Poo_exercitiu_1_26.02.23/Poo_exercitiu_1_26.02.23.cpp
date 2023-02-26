#include "pch.h"
#include <iostream>

using namespace System; 
using namespace std;

struct Persoana {
    unsigned vs;
    char nume[20];
    char prenume[20];
};
class Pers {
private:
    unsigned vs;
    char nume[20];
    char prenume[20];
public:
    Pers(unsigned vs1, char* num1, char* prenum1) {
        vs = vs1;
        strcpy_s(nume, 20, num1);
        strcpy_s(prenume, 20, prenum1);
    }
    Pers() {}
    unsigned show_vs() { return this->vs; }
    char* show_nume() { return this->nume; }
};
int main()
{
    int  Pers ;
    char nume;
    char prenume;
    int i;
    
   

    cout << "Introduceti numarul de persoane dorit :";
    cin >> Pers;


    for (i = 0; i < Pers; i++)

    {
        string nume;
        string prenume;
        int vs;

        cout << "Introduceti numele persoanei: ";
        cin >> nume;

        cout << "Introduceti prenumele persoanei: ";
        cin >> prenume;

        cout << "Introduceti varsta peroanei: ";
        cin >> vs;

        cout << "Nume: " << nume << endl << "Prenume " << prenume << endl << "Varsta " << vs << endl;


     }
    

    return 0;
}





// unsigned int a1 = 0;
//a1 = 17;
//p1.vs = 20;
//strcpy_s(p1.nume, 4, "Ion");
//strcpy_s(p1.nume, 7, "George");
//cout << p1.nume << "\t" << p1.prenume << p1.vs << endl;
//cout << "Hello C++.NET (cout)" << endl;
//Pers p2(20, "Ionescu", "George");
//Pers* p3 = new Pers(21, "Ionescu", "Mihaela");
//cout << p2.show_nume() << "\t" << p2.show_vs() << endl;
//cout << p3->show_nume() << "\t" << p3->show_vs() << endl;
//Console::ReadKey();
//return 0;
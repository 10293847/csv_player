#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <cstdlib>
#include <climits>
#include <sstream>

#include "main_funkcje.h"
#include "typ_dane.h"

using namespace std;
extern DANE wszystko;


DANE::DANE()
{
    cout << "\nobiekt DANE utworzony!\n";
}

DANE::~DANE()
{
    cout << "\nobiekt DANE zniszczony!\n";
}


void DANE::change_values()
{
cout << "\nMENU - LICZBY:\n";
cout << "d. ** dodawanie\n";
cout << "o. ** odejmowanie\n";
cout << "m. ** mnozenie\n";
cout << "z. ** dzielenie\n";

char wybor = '1';
cout << "ktora opcja?: ";
cin >> wybor;

    if (wybor == 'd' || wybor == 'o' || wybor == 'm' || wybor == 'z')
    {
        float ile =0;
        cout << "podaj ile dodac/odjac  , przez ile pomnozyc/podzielic \n";
        cin >> ile;
        if (wybor == 'z' && ile == 0)
        {
            cout << "operacja niedozwolona! ";
            return;
        }

        for (int i=0; i<main_containter.size(); i++)
        {
            for (int j=0; j<main_containter.at(i).size(); j++)
            {
                if(main_containter_typ.at(i).at(j) == "L")
                {
                   if (wybor == 'd')
                   {
                        main_containter.at(i).at(j) =
                        to_string(atof(main_containter.at(i).at(j).c_str()) + ile);
                   }
                   if (wybor == 'o')
                   {
                        main_containter.at(i).at(j) =
                        to_string(atof(main_containter.at(i).at(j).c_str()) - ile);
                   }
                   if (wybor == 'm')
                   {
                        main_containter.at(i).at(j) =
                        to_string(atof(main_containter.at(i).at(j).c_str()) * ile);
                   }
                   if (wybor == 'z')
                   {
                        main_containter.at(i).at(j) =
                        to_string(atof(main_containter.at(i).at(j).c_str()) / ile);
                   }
                }
            }
        }
    }
}




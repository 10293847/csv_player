#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <climits>

#include "main_funkcje.h"

#include "typ_dane.h"

using namespace std;

DANE wszystko;


int main()
{

    cout << "PROJEKT CSV  v1.0\n\n";
    char wybor = '1';
    menu1();

    while (wybor != 'e')
    {
        cin.clear();

        cin.ignore(INT_MAX, '\n');

        cout << "\nwybierz opcje: [\'0\'-menu, \'r\'-clear, \'c\'-clear & menu]: ";
        cin >> wybor;

                switch(wybor)
                {
                    case '1':
                    cout <<"\nwybrana opcja: 1 -  read_file(); "<<endl;
                    wszystko.read_file();
                    cout << "\nok\n";
                    break;

                    case '2':
                    cout <<"\nwybrana opcja: 2 -  show_all(); "<<endl;
                    wszystko.show_all_data();
                    break;

                    case '3':
                    cout <<"\nwybrana opcja: 3 -  html_table(); "<<endl;
                    wszystko.html_table();
                    cout << "\n html_table()  - dane w pliku table.html\n";
                    cout << "\nok\n";
                    break;

                    case '4':
                    cout <<"\nwybrana opcja: 4 -  parse_item(string a); "<<endl;
                    format_dane();
                    cout << "\nok\n";
                    break;

                    case '5':
                    cout <<"\nwybrana opcja: 5 -  zapis do pliku good.csv; "<<endl;
                    wszystko.csv_write();
                    cout << "\nok\n";
                    break;

                    case '6':
                    cout <<"\nwybrana opcja: 6 -  wyswietl wszystkie typy danych "<<endl;
                    wszystko.show_all_types();
                    cout << "\nok\n";
                    break;

                    case '7':
                    cout <<"\nwybrana opcja: 7 -  funkcje liczbowe "<<endl;
                    wszystko.change_values();
                    cout << "\nok\n";
                    break;


                    case 'e':
                    cout << "\n\nprogram zakonczony pomyslnie" << "\n\n";
                    return 0;
                    break;

                    case 'r':
                    system("clear");
                    cout << "nacisnij enter";
                    break;


                    case 'c':
                    cout <<"\nwybrana opcja: c - clear&menu"<<endl;
                    system("clear");
                    menu1();
                    break;

                    case '0':
                    menu1();
                    break;

                    default:
                    cout << "nie ma takiej opcji!\n";
                    break;
                }
    }

    if (wybor == 'e')
    {
        cout << "\n\nprogram zakonczony pomyslnie" << "\n\n";
        return 0;
    }
    else
    {
        cout << "eeeeeee...autor nie przewidzial mozliwosci wybierania nieistniejacych opcji....uuuuuups";
    }
return 0;
}


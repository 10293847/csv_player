#ifndef TYP_DANE_H
#define TYP_DANE_H

#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;


class DANE
{
    private:
    vector< vector<string> > main_containter;
    vector< vector<string> > main_containter_typ;

    public:

    DANE();
    ~DANE();

    void read_file();

    void show_all_data();
    void show_all_types();

    void change_values();

    void csv_write();
    void html_table();
    void cut_line(string linia);
    string parse_item(string a);

    string czy_data(string s);
    string czy_liczba(string s);
};

#endif

#ifndef __TAMBAH
#define __TAMBAH
#include <string>
#include <iostream>

#include "01-server.hpp"

using namespace std;

class Tambah : public Kalkulator {
    public:
        void Penjumlahan(){
            cout<<"\n[+] Penjumlahan"<<endl;
            cout<<"Inputan 1 : ";cin>>bil1;
            cout<<"Inputan 2 : ";cin>>bil2;
        }

        void Display(){
            cout<<"\n[+] Hasil Penjumlahan  "<<endl;
            Hasil = bil1 + bil2 ;
            cout<<"Hasil Dari "<<bil1<<" + "<<bil2<<" = "<<Hasil<<endl;
        }
};

#endif
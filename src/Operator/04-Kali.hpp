#ifndef __KALI
#define __KALI
#include <string>
#include <iostream>

#include "01-server.hpp"

using namespace std;

class Kali : public Kalkulator{
    public:
        void Perkalian(){
            cout<<"\n[*] Perkalian "<<endl;
            cout<<"Inputan 1 : ";cin>>bil1;
            cout<<"Inputan 2 : ";cin>>bil2;
        }

        void Display(){
            cout<<"\n[*] Hasil Perkalian "<<endl;
            Hasil = bil1 * bil2 ;
            cout<<"Hasil Dari "<<bil1<<" * "<<bil2<<" = "<<Hasil<<endl;
        }
};

#endif
#ifndef __MODULUS
#define __MODULUS
#include <string>
#include <iostream>
#include <cmath>

#include "01-server.hpp"

using namespace std;

class Modulus : public Kalkulator {
    public:
        void Mod(){
            cout<<"\n[mod] Modulus (Sisa Pembagian )"<<endl;
            cout<<"Inputan 1 : ";cin>>bil1;
            cout<<"Inputan 2 : ";cin>>bil2;
        }

        void Display(){
            cout<<"\n1Hasil Modulus"<<endl;
            Hasil = bil1 % bil2 ;
            cout<<"Hasil dari "<<bil1<<" Mod "<<bil2<<" = "<<Hasil<<endl; 
        }
};

#endif
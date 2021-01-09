#ifndef __KURANG
#define __KURANG
#include <string>
#include <iostream>

#include "01-server.hpp"

using namespace std;

class Kurang : public Kalkulator{
    public:
        void Pengurangan (){
            cout<<"\n[-] Pengurangan "<<endl;
            cout<<"Inputan 1 : ";cin>>bil1;
            cout<<"Inputan 2 : ";cin>>bil2;
        }

        void Display (){
            cout<<"\n[-] Hasil Pengurangan "<<endl;
            Hasil = bil1 - bil2 ;
            cout<<"Hasil Dari "<<bil1<<" - "<<bil2<<" = "<<Hasil<<endl;
        }
};

#endif
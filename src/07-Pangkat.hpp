#ifndef __PANGKAT
#define __PANGKAT
#include <string>
#include <iostream>
#include <cmath>

#include "01-server.hpp"

using namespace std;

class Pangkat : public Kalkulator{
    public:
        void Pow (){
            cout<<"\n[^] Pangkat "<<endl;
            cout<<"Inputan 1 : ";cin>>bil1;
            cout<<"Inputan 2 : ";cin>>bil2;
            cout<<"\n[^] Hasil Pangkat "<<endl;

            cout<<"Hasil dari : "<<bil1<<" ^ "<<bil2<<" = "<<pow(bil1,bil2)<<endl;
        }

};

#endif
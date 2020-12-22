#ifndef __BAGI
#define __BAGI
#include <string>
#include <iostream>
#include <iomanip>

#include "01-server.hpp"

using namespace std;

class Bagi : public Kalkulator{
    private:
       
    public:
        void Pembagian(){
            cout<<"\n[/] Pembagian "<<endl;
            cout<<"Inputan 1 : ";cin>>bil1;
            cout<<"Inputan 2 : ";cin>>bil2;
        }
        void Display(){
            cout<<"\n[/] Hasil Pembagian "<<endl;
            Hasil = bil1 / bil2 ;
            cout<<"Hasil dari "<<bil1<<" / "<<bil2<<" = " <<setiosflags(ios::fixed)<<setprecision(1)<<Hasil<<endl;
        }
};

#endif

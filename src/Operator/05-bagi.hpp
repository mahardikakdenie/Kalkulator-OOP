#ifndef __BAGI
#define __BAGI
#include <string>
#include <iostream>
#include <iomanip>

#include "01-server.hpp"

using namespace std;

class Bagi : public Kalkulator{
    private:
       float bil3,bil4;
    public:
        void Pembagian(){
            cout<<"\n[/] Pembagian "<<endl;
            cout<<"Inputan 1 : ";cin>>bil3;
            cout<<"Inputan 2 : ";cin>>bil4;
        }
        void Display(){
            cout<<"\n[/] Hasil Pembagian "<<endl;
            Hasil = bil3 / bil4;
            cout<<"Hasil dari "<<bil3<<" / "<<bil4<<" = " <<Hasil<<endl;
        }
};

#endif

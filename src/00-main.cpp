#include <iostream>
#include <string>

#include "Server/Server.cpp"

using namespace std;

int main(int argc, char const *argv[])
{
    char lagi;
    do
    {
       
        

        system("cls");
    MainMenu:
        cout << "---------Kalkulator Bangun Datar---------" << endl;
        cout << "1.Penjumlahan" << endl;
        cout << "2.Pengurangan" << endl;
        cout << "3.Perkalian" << endl;
        cout << "4.Pembagian" << endl;
        cout << "5.Mod(sisa Bagi)" << endl;
        cout << "6.Pangkat " << endl;
        int pil;
        cout << "Pilih : ";
        cin >> pil;
        if (pil == 1)
        {
            Tambah Op1;
            Op1.Penjumlahan();
            Op1.Display();
        }
        else if (pil == 2)
        {
            Kurang Op2;
            Op2.Pengurangan();
            Op2.Display();
        }
        else if (pil == 3)
        {
            Kali Op3;
            Op3.Perkalian();
            Op3.Display();
        }
        else if (pil == 4)
        {
            Bagi Op4;
            Op4.Pembagian();
            Op4.Display();
        }
        else if (pil == 5)
        {
             Modulus Op5;
            Op5.Mod();
            Op5.Display();
        }
        else if (pil == 6)
        {
            Pangkat Op6;
            Op6.Pow();
        }
        else
        {
            goto MainMenu;
        }
        cout << endl;
        cout << "lagi [Y / N]";
        cin >> lagi;
    } while (lagi == 'y' || lagi == 'Y');
}

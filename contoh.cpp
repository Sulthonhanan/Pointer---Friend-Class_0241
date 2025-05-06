#include <iostream>
using namespace std;

class Persegi_Panjang
{
    public:
        int panjang, lebar;


        public:

        void input()
        {
            cout << "Masukan Panjangnya :";
            cin >> panjang;
            cout << "Masukan Lebarnya :";
            cin >> lebar;
        }

        int LuasPersegi_panjang (int a, int b)
        {
            return a * b;
        }

};
#include <iostream>
using namespace std;

class mahasiswa
{
    public:
    int nim;
    void shownim()
    {
        cout << "No induk = " << nim << endl; 
    }
};

int main()
{
    mahasiswa mhs{1}; //objek mhs
    mhs.shownim();   // Member Akses Operator

    mahasiswa &refmhs = mhs;
    refmhs.nim = 2;   //objek mhs
    mhs.shownim();   // Member Akses Operator

    mahasiswa *pmhs = &mhs;
    pmhs->nim = 3;     //objek mhs
    pmhs->shownim();  // Member Akses Operator
    return 0;
}
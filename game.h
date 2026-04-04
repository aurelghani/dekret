#include <iostream>
using namespace std;

struct Statistik {
    int ekonomi = 50;
    int masyarakat = 50;
    int militer = 50;
    int lingkungan = 50;
};

Statistik statistik;

void tampilkanStatistik() {
    cout << "-----------------------------" << endl;
    cout << "Ekonomi     : " << statistik.ekonomi << "%" << endl;
    cout << "Masyarakat  : " << statistik.masyarakat << "%" << endl;
    cout << "Militer     : " << statistik.militer << "%" << endl;
    cout << "Lingkungan  : " << statistik.lingkungan << "%" << endl;
    cout << "-----------------------------" << endl;
}

int main() {
    tampilkanStatistik();
    return 0;
}

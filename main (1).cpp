// Program Untuk Mengkonversi Suhu dari Celcius //
#include <iostream>

using namespace std;

int main ()
{
    cout << "<Program C++ Untuk Mengkonversi Satuan Suhu Dari Celcius" << endl;
    cout << "========================================================" << endl;
    cout << endl;
    
    float celc, fahr, kelv, ream;
    
    cout << "Input Suhu Celcius : ";
    cin >> celc;
    cout << endl;
    
    fahr = (9.0/5.0 * celc) + 32;
    kelv = celc + 273.15;
    ream = celc * (4.0/5.0);
    
    cout << celc << " Derajat Celcius = " << fahr << " Derajat Fahrenheit ";
    cout << endl;
    cout << celc << " Derajat Celcius = " << kelv << " Derajat Kelvin ";
    cout << endl;
    cout << celc << " Derajat Celcius = " << ream << " Derajat Reamur ";
    cout << endl;
    
    return 0;
}
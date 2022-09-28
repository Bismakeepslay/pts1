#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int luas, keliling;
    int r ;
    float phi;
          phi = 3.14;
          
    cout << "masukan r=  "; cin >> r;
    
    
    luas = phi * r * r;
    cout << "luas lingkaran= " <<luas <<endl;
keliling = 2 * phi * r;
    cout << "keliling lingkaran= " <<keliling <<endl;
}
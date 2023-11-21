#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double x, akar, pangkat;
    cout << "Masukkan nilai x: ";
    cin >> x;
    
    akar = sqrt (x);
    pangkat = pow (x, 2);
    
cout << "akar dari" << x << " = " << akar << endl;
cout << "pangkat dari" << x << " = " << pangkat << endl;
system ("PAUSE");
return 0;
}

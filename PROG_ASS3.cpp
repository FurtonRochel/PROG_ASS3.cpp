//
#include <iostream>
using namespace std;
int main ()
{
    int a = 7, b = 11, c = 12, d = 20, e = 24 ;
float F = (a+b*c) < (c*a-b) ;
float G = (c+d) <= (e-d++) || (a*b-d) ;
float H = !(e-c/a) >= (e/a+b) < (e-a) ;
float I = (e-c+d-b) <= (b+a+d-b- ++a) ;
float J = !(a+b+c) >= (c*a) || (e/c+b) ;


cout << F <<  endl;
cout << G << endl;
cout << H << endl;
cout << I << endl;
cout << J << endl;

return 0;
}


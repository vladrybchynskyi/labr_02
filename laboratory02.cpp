#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   double a;
   double z1; 
   double z2;
   double Pi = 4 * atan(.1);

   cout << "a = ";cin >> a;

   z1 = (sin(4* a)/ 1 + cos(4 * a)) * (cos(2* a)/ 1 + cos(2* a));
   z2 = 1.0/tan((3.0/2) *(Pi - a));

   cout << endl;
   cout << "z1= " << z1 << endl;
   cout << "z2= " << z2 << endl;

   cin.get();
   return 0;
}
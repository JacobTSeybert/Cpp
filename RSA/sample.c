#include <iostream>

using namespace std;

int powmod (int, int, int);


main ()
{
  int base,expt,modulus;
  cout << "Input base" << endl;
  cin >> base;
  cout << "Input Exponent" << endl;
  cin >> expt;
  cout << "Input modulus" << endl;
  cin >> modulus;
  cout << "Answer is: " << powmod(base,expt,modulus) << endl;
}


int powmod (int base, int expt, int modulus)
{
 int pow;
 pow = base;
 expt = expt - 1;
 while (expt > 0)
  {
  pow = pow * base;
  expt = expt - 1;
  while (pow < modulus && expt > 0)
   {
   pow = pow * base;
   expt = expt - 1;
   }
  pow = pow % modulus;
  }
 pow = pow % modulus;
 return pow;
}
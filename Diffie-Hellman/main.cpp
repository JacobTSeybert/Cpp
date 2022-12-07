/* This progam calculates the Key for two people
using the Diffie-Hellman Key echange algorithm*/

#include <cmath>
#include <iostream>
using namespace std;

//ask users for their key
int a;
int b;

void user_choice()
{
    cout << "What number does user 1 want to pick: \n";
    cin >> a;
    cout << "What number does user 2 want to pick: \n";
    cin>> b;
}

//Power funciton to returjn value of a ^ b mod P
long long int power(long long int a, long long int b, long long int P)
{
    if (b==1)
        return a;
    else
        return (((long long int)pow(a, b)) % P);
}

//Driver program
int main()
{
    user_choice();
    long long int P, G, x, a, y, b, ka, kb;

    //Both the people will be agreed upon the 
    // public keys G and P

    P = 23; //A prime number P is taken
    cout << "The value of P : " << P << endl;

    G = 9; //A primitive root for P, G is taken
    cout<< "The value of G : " << G << endl;

    //Person 1 chooses their private key a
    //a = 4; // a is the chosen private key
    cout << "The private key for person 1 is : " << a << endl;

    x = power(G, a, P); //gets the generated key

    //Person 2 will hcoose the private key for b
    //b = 3; // b is the chosen private key
    cout << "The private key for person 2 is : " << b << endl;

    y = power(G, b, P); //gets the generated key

    //Generating the secret key after the exchange of keys

    ka = power(y, a, P); //Secret key for person 1
    kb = power(x, b, P); //Secret key for perosn 2
    cout << "Secret key for person 1 is : " << ka << endl;

    cout << "Secret key for person 2 is : " << kb << endl;

    return 0;
}
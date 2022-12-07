/*
Create and implement a basic RSA algorithm implementation
Created by Jacob Seybert
11/02/2022
https://www.tutorialspoint.com/cplusplus-program-to-implement-the-rsa-algorithm\
*/

#include <iostream>
#include <math.h>

using namespace std;

//FIND the GCD
int gcd(int a, int b) 
{
    int t;
    while(1) {
        t =a%b;
        if (t==0)
        return b;
        a = b;
        b = t;
    }
}

int main()
{
    double p;
    double q;
    //2 random prime numbers
    cout << "Pick your first random prime number: ";
    cin >> p;
    cout << "Pick your second random prime number: ";
    cin >> q;
    cout << "You picked (" <<p<<","<<q<<")\n";

    double n=p*q; //calculate n
    double track;
    double phi= (p-1)*(q-1); //calcualte phi

    //public key
    //e stands for encrypt
    double e=7;
    //for checing that 1 < e < phi(n) and gcd(e, phi(n)) = 1; i.e., e and phi(n) are coprime.
    while(e<phi) {
        track = gcd(e,phi);
        if(track==1)
        break;
        else
            e++;
    }
    //private key
    //d stands for decrypt
    //choosing d such that it satisfies d*e = 1 mod phi
    double d1=1/e;
    double d=fmod(d1,phi);
    double message = 9;
    cout << "Pick an original message number: ";
    cin >> message;
    double c = pow(message,e); //encrypt the message
    double m = pow(c,d);
    c=fmod(c,n);
    m=fmod(m,n);
    cout << "Original Message number choosen = "<<message;
    cout <<"\n p = "<<p;
    cout <<"\n q = "<<q;
    cout <<"\n n = pq = "<<n;
    cout <<"\n phi = "<<phi;
    cout <<"\n e = "<<e;
    cout <<"\n d = "<<d;
    cout <<"\n Encrypted message = "<<c;
    cout <<"\n Decrypted message = "<<m;
    return 0;
}
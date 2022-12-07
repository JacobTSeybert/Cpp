/* 
Find Prime numbers between a given range
Created by Jacob Seybert
11-02-2022
https://www.geeksforgeeks.org/c-cpp-program-to-find-prime-numbers-between-given-range/
*/

#include <bits/stdc++.h>
using namespace std;

//Function to print prime numbers in given range

void primeInRange(int L, int H)
{
    int flag;

    //Traverse each number in the interval with for loop

    for (int i = L; i <=H; i++) {

        //Skip 0 && 1 as they are neither prime nor composite
        if (i ==1 || i ==0)
        continue;

        //flag variable to tell if i is prime or not

        flag = 1;

        //Iterate to check if i is prime or not

        for (int j = 2; j <= i / 2; ++j){
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
        // flag = 1 means i is prime
        // flag = 0 means i is NOT prime
        if(flag == 1)
        cout << i << " ";
    }
}

//Driver
int main()
{
    //Given Range
    int L = 0;
    int H = 0;
    cout << "Input your start range to search for prime numbers: ";
    cin >> L;
    cout<< "Input your end range: ";
    cin >> H;
    cout << "You entered ("<<L<<","<<H<<") \n";
    cout << "Your prime numbers are as follows: ";

    //Function Call
    primeInRange(L, H);

    return 0;
}
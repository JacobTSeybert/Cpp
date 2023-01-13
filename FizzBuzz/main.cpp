#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

int main() {
    for (int i = 1; i<= 100; i++) {
        if (i % 3 == 0 && i % 5 == 0){
            cout << "FizzBuzz\n";
        }
        else if (i % 3 == 0){
            cout << "Fizz\n";
        }
        else if (i % 5 == 0){
            cout << "Buzz\n";
        } else {
        cout << i << endl;
        }
    }
}
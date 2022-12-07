#include <iostream>

int main() {

    //This seeds the random number generator:
    srand(time(NULL));

    //User rand() below to initialize the_amazing_random_number

    int the_amazing_random_number = rand() % 69;
    std::cout << the_amazing_random_number << " \n";
}
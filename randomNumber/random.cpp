#include <iostream>

using namespace std;

int main(){

    int test;

    cout<< "Enter the size of array:" ;
    cin >> test;

    int randArray[test];
    for(int i=0; i<test; i++)
        randArray[i]=rand()%100; //Generate number from 0-99

    cout<<"\nElements of the array: "<<endl;

    for(int i=0; i<test; i++)
        cout<<"Element number "<<i+1<<": "<<randArray[i]<<endl;
    return 0;
}
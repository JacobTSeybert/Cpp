/* coinFlip program created by itsCybert
on 2022-10-31
flips coin giving amount of times landed on heads and tails between 10 iterations
gives average that heads or tails appeard on coin.*/

#include <iostream> //input output stream required
#include <cstdlib> //c standard library
#include <ctime> //pulls the time from asctime(localtime(seconds)) Current system time since January 1, 1970.
#include <windows.h> //Headerfile required for Sleep fucniton call

using namespace std; //Bad practice but quality of life tool

//initalize the variables used
int headCount = 0; //count to keep track of how many times heads comes up
int tailCount = 0; //count to keep track of how many times tails comes up
int count = 0; //count to keep track of how many times loop runs.
float average = 0; //Average used below to get average

int main(){ //begin main function
    
    srand(time(NULL)); //call random time function that seeds NULL
    
    while (count < 10) { //while loop preventing more than 10 iterations
        int random = rand()%2; //take random number and mod by 2, this gives either a 0, or 1.
        if (random == 1) //if the random number is a 1 do the following
        {
            count = count +1; //add plus one (1) to the total count
            headCount = headCount + 1; //add plus one (1) to the headCount
            cout <<"Heads: "<< headCount << "\n"; //print out the total count for heads
        }
        else{ //if number is not one (1) aka number is (0) do the following
            count = count +1; //add plus one (1) to the total count
            tailCount = tailCount + 1; //add plus one (1) the the tailCount
            cout <<"Tails: "<< tailCount << "\n"; //print out the total count for tails

        }
        Sleep(1000); //Rest for one second before executing the loop again (This allows for the random number using (time) to give a different number)
            //can change the number if you want longer or shorter wait times 
            //(1000) is "1" second
    }
    average = 10 * tailCount; //math for average forumula
    cout << "Total Tail count: "<< tailCount << " which is an average of: " << average << "%\n"; //print out total times program got tails and average
    average = headCount * 10 ; //math for average forumula
    cout << "Total Head count: "<< headCount << " which is an average of: " << average << "%\n"; //print out total time program got heads and average

}
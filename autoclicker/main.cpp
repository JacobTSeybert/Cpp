/* Autoclicker developed by itsCybert, Copyright 2022, all rights reserved*/
#include <iostream>
#include <cstdlib>
#include <ctime>

#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

    using namespace std;
   


    void menu()
    {
        cout << "Press 'X' to enable and 'Z' to disable autoclicker\n";
    }

    void clicker() 
    {
        bool click = false; //Sets click to false


        while(true)
        {
            if (GetAsyncKeyState('X')) //if X is pressed click = true
            {
                click = true;
            }
            else if (GetAsyncKeyState('Z')) //if 'Z' is pressed click = false
            {
                click = false;
            }
            if (click == true) //if click == true it will presss the mouse button down and up 
            {
                mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
                mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
                Sleep(100); //Speed between double click
                mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
                mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
                
                //set seed to (0))
                srand(time(NULL));
                //generate random number
                /*int random = rand();
                if (random >= 180000)
                {
                    cout<< random<< " Bigger than 180000\n";
                }
                else{
                    cout << random << "\n";
                    random = random * 10;
                    cout << random << " Was less than 180000 \n.";
                }
                //cout << random << "\n"; */
                Sleep(180000); //you can adjust the speed of the click here 60000 is one minute
            }
        }
    }

    int main()
    {
        menu();
        clicker();

        return 0;
    }
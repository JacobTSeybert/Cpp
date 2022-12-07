#include <iostream>

// Define name_x_times() below:

void name_x_times(std::string name, int  x){

  while (x > 0){
  std::cout << name<< "\n";
  x--;
  }
}

int main() {
  
  std::string my_name = "Jacob!\n";
  int some_number = 5; // Change this if you like!
  // Call name_x_times() below with my_name and some_number
  name_x_times(my_name, some_number);
  
}


/*return_type function_name(paramater1, parameter2) {
 
   // Code block here
 
   return output_if_there_is_any;
 
}

bool is_even(int number) {
 
  if (number % 2 == 0) {
 
    return true;
 
  }
 
  return false;
 
} */
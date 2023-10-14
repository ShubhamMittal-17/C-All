#include<iostream>                      //this is a header file which has some useful fuctions already in it and we include it to access said functions.

int main(){                             //int is the method of output we want to provide to the OS, while main() is our starting function which allots other things their share of work
   std::cout<<"hello world";            //std is a file inside of the "iostream" folder within which the "cout" function is present and we are calling it out as such to use cout
   return 0;                            //return is just a process used to ensure the process is not considered an error by returning a value in the afformentioned format (here "int") which is written before main(), to the OS
}

//if we dont want to write "std" every time we use a function from std file in iostream folder, we can write "using namespace std;" before main() and it will be viable for all future std functions.
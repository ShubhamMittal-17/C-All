#include<iostream>
using namespace std;

int main(){
    //***********************BREAK FUNCTION***************************
    cout<<"***********************BREAK FUNCTION***************************"<<endl;
    
    for (int i = 0; i < 4; i++)
    {
        cout<<i<<endl;
        if(i==2){
            break;            // "break" is a function that stops the loop and continues the code from the next function (here it stops the 'for loop' and then would carry on)
        }                     // the order in which the code is written also effect the output, first the code higher up is initiated then the one below it
    }
    
    cout<<"This marks the end of the for loop"<<endl;
    cout<<"______________________________________________________________________________"<<endl<<endl;

    //**********************CONTINUOUS FUNCTION*****************************
    cout<<"***********************CONTINUOUS FUNCTION***************************"<<endl;

     for (int i = 0; i < 4; i++)
    {
         if(i==2){
            continue;                // the "continue" function allows the code to continue to run after stopping the code at the conditional value
                                    // since here the "cout" function is after the continue function, "2" is skipped after the condition is checked, the function is stopped at "2" and continued again from "3" and only "0 1 3" are printed
        }      
        cout<<i<<endl;               
    }
    
    



    return 0;
}
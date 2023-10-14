#include<iostream>
#include<iomanip>  //this is another header file that has the "setw" manipulator within it, which is widely used 

using namespace std;
 int main(){




//*******************CONSTANTS*************************
cout<<"**********************CONSTANTS***********************"<<endl<<endl;
const int a=45;    // "const" before a datatype is used to  ake it a constant value that can't be changed in the programm 
cout<<"the value of a is: "<<a<<endl;
// a= 99;                                      // if we try to define a new value to the constant (here) "a", it shows up as an error
cout<<"the new value of a is: "<<a<<endl<<"___________________________________"<<endl<<endl;




//***********************MANIPULATORS************************************
cout<<"****************MANIPULATORS****************"<<endl<<endl;
// Manipulators are used to format our data display, for example: endl, setw, etc.
int x=33,y=234,z=234355;
cout<<"The vale of x without setw is: "<<x<<endl;
cout<<"The vale of y without setw is: "<<y<<endl;
cout<<"The vale of z without setw is: "<<z<<endl<<"_____________________________________"<<endl<<endl;


cout<<"The vale of x is: "<<setw(4)<<x<<endl;   // "setw" is a manipulator used to change the field width
cout<<"The vale of y is: "<<setw(4)<<y<<endl;
cout<<"The vale of z is: "<<setw(4)<<z<<endl<<"___________________________________________"<<endl<<endl;




//***************************OPERATOR PRECEDENCE***********************************
cout<<"******************OPERATOR PRECEDENCE*****************"<<endl<<endl;

int a1=3, b1=4;
int c1= ((((a1*5)+b1)-45)+87);   // here the operators have a precedence order which they follow while resolving the equation, for the table of precedence go to --> "https://en.cppreference.com/w/cpp/language/operator_precedence"  
//                |
//                ---> here the precedence is the same as brackets 

// If two operators have the same precedence, then we check the associativity i.e either from left to right, or right to left

cout<<c1;

    return 0;
 }
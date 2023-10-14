#include<iostream>

using namespace std;

int c=45;        //this is the global variable and is not affected by the local code

int main(){
    // ***************BUILT IN DATA TYPES*******************
 
  //  int a, b, c;
//cout<<"Enter the value of a:"<<endl;
//cin>>a;
//cout<<"Enter the value of b:"<<endl;
//cin>>b;
//c = a + b;
//cout<<"The sum is: "<<c<<endl;
//cout<<"The global c is: "<<::c;         // "::" is known as the scope resolution operator that is used to check the global variable that is increase the scope of the variable from local to global

// *****************FLOAT, DOUBLE AND LONG DOUBLE LITERALS*******************

//float d=34.4f;        //here 34.4 is already defined using float data type, thus it is registered as such even without the "f"

//long double e=34.4l;   // "l" --> long double

// IMPORTANT--> when we are defining the value 34.4 or any decimal literal as a matter of fact, the compiler automatically registers it as a "double" variable regardless of what datatype its defined as
// IMPORTANT--> in order to have the value 34.4 (here) register as a float value in the compiler, when defining it we can write it as "34.4f" (here) 

//Thus-->    34.4 = double datatype  and 34.4f = float datatype

// In order to prove this-->
//cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;                 // "sizeof()" is a function ised to tell the bit size of the data stored in the variable, there is a chart of the size of different data types
//cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
//cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;               // The case of the letter does not matter
//cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
//cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;

// you can hover your cursor over each value and it will tell you its data type its registered as ;)


//cout<<"The value of d is: "<<d<<endl<<"The value of e is: "<<e;

//*****************REFERENCE VARIABLES**********************
// this is used to link a same value to different variables
//float x=455;
//float & y=x;     // "&" is used to define a reference variable or link two or more variables for same value

//cout<<"The value of x is: "<<x<<endl;
//cout<<"The value of y is: "<<y<<endl;           // it will display same value due to referencing

//*****************TYPECASTING**********************
// it is used to convert one data type to another

int a= 45;
cout<<"The value of a is: "<<(float)a<<endl;  //     ---
                                        //              |--> Same thing
cout<<"The value of a is: "<<float(a)<<endl;  //     ---

float b=45.56;
cout<<"The value of b is: "<<(int)b<<endl;     // this converted the float data "b" into an integer datatype and got rid of the decimal
cout<<"The value of b is: "<<int(b)<<endl;
// We can also do-->
int c= int(b);       // in order to define c as the integer part of b 

// we can also use operators after changing the datatype
cout<<"The expression is: "<<a + b<<endl;
cout<<"The expression is: "<<a + (int)b<<endl;
cout<<"The expression is: "<<a + int(b)<<endl;

    return 0;
}
 // There are two types of header files --> 
 // (1) System Header Files: it comes with the compiler
    #include<iostream>  
 // (2) User Defined Header Files: it is written by the programmer
 // #include "this.h"  --> This will produce an error if "this.h" is not present in the current directory

using namespace std;

int main(){
    int a=4, b=5;
    cout<<"Operators in C++:"<<endl;   // "endl" works the same as "\n" and breaks the line to start from a new one, this is known as a manipulator
    cout<<"The different types of operators in C++ are:"<<endl;

             //Arithmetic Operators --> normal arithmetic functions
    cout<<"The following are the arithmetic operators in C++:"<<endl;
    cout<<"The value of a + b is:"<< a+b<<endl;
    cout<<"The value of a - b is:"<< a-b<<endl;
    cout<<"The value of a * b is:"<< a*b<<endl;
    cout<<"The value of a / b is:"<< a/b<<endl;  // We get the result as "0" as the two variables in use are integers which can only result into an integer answer. Therefore instead of "0.8" you only get the "0" part.
    cout<<"The value of a % b is:"<< a%b<<endl;  // "%" is known as the "Modular Function", which returns us the remainder after dividing "a" by "b"
    cout<<"The value of a++ is:"<< a++<<endl;   // "a++" first prints the current value of "a" and then increases it by one
    cout<<"The value of a-- is:"<< a--<<endl;   // "a--" first prints the current value of "a" and then decreases is by one
    cout<<"The value of ++a is:"<< ++a<<endl;   // "++a" first increases the value of "a" by one and then prints it
    cout<<"The value of --a is:"<< --a<<endl;   // "--a" first decreases the value of "a" by one and then prints it
    cout<<endl;
            //Assignment Operators --> used to assign a value to a variable
    //int a=3, b=9;
    //char d= 'd';        

            //Comparison Operator --> used to compare two values       // With this operator, brackets are necessary   // The result of this operator is either true i.e "1" or false i.e "0"
    cout<<"The following are the comparing operators in C++:"<<endl;
    cout<<"The value of a == b is:"<<(a==b)<<endl;    // "==" refers to "equal to"
    cout<<"The value of a != b is:"<<(a!=b)<<endl;    // "!=" refers to "not equal to"
    cout<<"The value of a >= b is:"<<(a>=b)<<endl;
    cout<<"The value of a <= b is:"<<(a<=b)<<endl;
    cout<<"The value of a > b is:"<<(a>b)<<endl;
    cout<<"The value of a < b is:"<<(a<b)<<endl;
    cout<<endl;
            //Logical Operator --> similar to logic gates
    cout<<"The following are the logical operators in C++:"<<endl;  
    cout<<"The value of this logical 'and' operator ((a==b) && (a>b)) is:"<<((a==b) && (a<b))<<endl;      
    cout<<"The value of this logical 'or' operator ((a==b) || (a>b)) is:"<<((a==b) || (a<b))<<endl;   
    cout<<"The value of this logical 'not' operator (!(a==b)) is:"<<(!(a==b))<<endl;   
    return 0;

}

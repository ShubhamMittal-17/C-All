#include<iostream>
using namespace std;

/* 
in C++ the code is executed line by line, so if a new function is defined after the "main" function it won't be executed. In order 
to have it executed, we will have to let the program know that we are defining a function in the future beforehand using funtion prototypes.
*/
// funtion prototypes syntax--> " datatype  functionname(declarations); "
int test(int a, int b);
//here we defined the function beforehand so that it may work in "main" function

int sum(int a, int b){   // we can define a custom function as follows, and use return to get a value
int c=a+b;
return c;
}

int main(){
    int num1,num2;
    cout<<"Enter the value of first number: "<<endl;
    cin>>num1;
    cout<<"Enter the value of second number: "<<endl;
    cin>>num2;
    cout<<"The sum is: "<<sum(num1,num2)<<endl;
    cout<<"The difference is: "<<test(num1,num2)<<endl;
    return 0;
}
//IMPORTANT-->
// we can use the same variables in different variables for new values, but it is not advised as it makes it more confusing
// we can even write a function without any variables and with just "int", like "int sum(int , int);" will also work

int test(int a, int b){
int c= abs(a-b);    // "abs()" is a function ised to get the absolute value
return c;
}
#include<iostream>
using namespace std;

int main(){
    // Pointer--> it is a datatype that stores the address of a variable/other datatype
    int a=3;
    int* b;      //"*"--> known as the dereferencing operator, used to define a pointer
    b= &a;       //"&"--> operator to get the address of variable
    cout<<"The address of a is: "<<&a<<endl;
    cout<<"the address of a is: "<<b<<endl;
    cout<<"the value at address b is: "<<*b<<endl;    // dereferencing operator is used to find the value at an adress as well

    // pointer-->pointer is a pointer which has the address of another pointer :D

    int** c= &b;    //"**" is used to define a pointer-pointer
    cout<<"the address of b is: "<<&b<<endl;
    cout<<"the address of b is: "<<c<<endl;
    cout<<"the value at address c is: "<<*c<<endl;
    cout<<"the value at the address value stored in c (i.e value ot address b) is: "<<**c<<endl;
   
   int*** d=&c;
   cout<<d;        // so on and so forth

    return 0;
}
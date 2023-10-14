#include<iostream>
using namespace std;

int main(){
     // an "array" is defined as a set of multiple terms of same datatype. it helps us to define multiple values in single variable  
    int marks[4]={1,4,5,9};
    cout<<marks[0]<<endl;
     // the respective position of the terms of the set starts from "0", that is index of first block is "0"
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    // we can also define an array as follows-->
    int yolo[7];
    yolo[0]=5;
    yolo[1]=89;
    cout<<yolo[0]<<endl;
    cout<<yolo[1]<<endl;

    // we can also change the value of the terms in the set

   marks[1]=90;
   cout<<marks[1]<<endl<<endl<<endl;;



   // when we try to define a pointer for an array we do it as follows-->
   int* p=marks;      // "marks" gives us the address of "first" block of the array. We don't use "&" operator here
   cout<<p<<endl;

   //to get the other addresses, we can simply add "1" each time to "p
   
   cout<<p+1<<endl;  // this gives us address of 2nd block
   cout<<p+2<<endl;  // "     "     "     "   of 3rd block
   cout<<p+3<<endl;
   //similarly-->
   cout<<*p<<endl;
   cout<<*(p+1)<<endl;    // this gives us the value at the corresponding addresses
   cout<<*(p+2)<<endl;

// IMPORTANT--> Address(new) = Address(current) + i*{size of datatype}
//                [p+i]            [p]

    return 0;
}
#include<iostream>
using namespace std;




int main(){

/*Loops in C++:
There are three types of loops in C++:
1. For loop
2. While loop
3. do-While loop
*/

// FOR LOOP IN C++
//SYNTAX:
// for(initialization; condition; update;)
//   {
//        C++ function
//    }


//for(int i=1; i<=40; i++){                   
//    cout<<i<<endl;
//}



// WHILE LOOP IN C++
//SYNTAX:
// while(condition)
//    {
//          C++ function
//    }


//int i=0;
//while(i<=40){
//    cout<<i<<endl;
//    i++;
//}


// DO-WHILE LOOP IN C++
//SYNTAX:
//    do
//    {
//          C++ function
//    }while(condition);

//int i=0;
// do{
//    cout<<i<<endl;        // IMPORTANT--> The difference between "do-while" and "while" loop is that the "do-while" loop always executes atleast once even if the condition is false
//    i++;
//}while(i<=40);


//QUIZ--> Table of any given number till anywhere you want
int a,b;
cout<<"Enter the number you want the multiplication table of: "<<endl;
cin>>a;
cout<<"Enter till where you want the table: "<<endl;
cin>>b;
if(b>0){
for(int i=1; i<=b; i++){
cout<<a<<" X "<<i<<" = "<<a*i<<endl;
}

}
else{
    cout<<"INVALID REQUEST";
}
   return 0;
}
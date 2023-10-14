#include<iostream>
using namespace std;

int swap(int* a , int* b){
  int temp = *a;
  *a=*b;
  *b=temp;
}

int main(){
    // you can only link two variables in different function either by referencing them or by making their addresss the same
 int x=4,y=3;
 cout<<"The value of x is: "<<x<<" and the value of y is: "<<y<<endl;
 swap(&x,&y);
 cout<<"The new value of x is: "<<x<<" and the new value of y is: "<<y<<endl;

    return 0;
}
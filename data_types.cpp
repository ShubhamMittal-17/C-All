# include<iostream>
using namespace std;
int glo=9;
void sum(){
   cout<<glo;
}
int main(){
   //int a=5;
   //int b=6;
   int a=15, b=16;    
   double pi=3.1415;                               //we can do it in one command as well.
   char c ='h';
   bool istrue=false;                             // true=1, false=0
   cout<<"This is tutorial 4 \nHere the value of a is "<<a<<". \nAnd the value of b is "<<b<<".";      // "\n" is used to break the line and contiue from the next line
   cout<<" \nThe value of pi is approximately: "<<pi<<".";
   cout<<" \nThe value of c is: "<<c<<".\n";
   int glo=5;
   glo=55;
   sum();
   cout<<glo<<istrue;

   return 0;
}
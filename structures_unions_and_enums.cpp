#include<iostream>
using namespace std;


    // "struct" function is used to make a set of different datatypes within a single variable, essentially forming a database
struct fanClub{
int memberID;
char favChar;         // we are defining the various categories of data
float followers;

};

typedef struct employee{     // "typedef" is used in conjunction with "struct" to shorten the name "struct employee" to any desired set of characters
int employeeID;
char cubicle;
float salary;
}emp;                     // here "emp" is the set of characters I used to name this structure and can now define variables directly using it



int main(){

 struct fanClub Shubham;           // we are defining a variable as part of the structure
 Shubham.favChar='s';
 Shubham.memberID=1;          // we can assign the variable a value in respective categories by usin "(variable).(category)"
 Shubham.followers=3000;
 cout<<"The value is "<<Shubham.memberID<<endl;
 cout<<"The value is "<<Shubham.followers<<endl;
 cout<<"The value is "<<Shubham.favChar<<endl<<endl<<endl;


  emp Manish;                // we can now simply use "ep" instead of "struct employee"
  Manish.employeeID=5;
  Manish.cubicle='B';
  Manish.salary=12000;
 cout<<"The value is "<<Manish.employeeID<<endl;
 cout<<"The value is "<<Manish.salary<<endl;
 cout<<"The value is "<<Manish.cubicle<<endl;

 

 // "union" is a function similar to 'struct', but the difference is that when defining a variable with it, you can only define value to one of its categories and the others will be overwritten
union classroom{
int floor;
char section;
float students;
};

classroom classA;        // you dont need to write "union" or "struct"
classA.floor=2;
classA.section='A';
//cout<<"The value is "<<classA.floor<<endl<<endl;    --> this gives us a value of "65" which doen't correspond to any of the defined values as we have overwritten the value with some other category (here) "section"
cout<<"The value is "<<classA.section<<endl<<endl;

// "enum" is a function opposite to an "array", instead of storing same datatypes at different indicies, it stores the value of the indicies/block numbers (whole numbers) within the terms of the enum
enum Meal{breakfast,lunch,dinner};
//            0       1     2     and son on and so forth
Meal m1= lunch;
cout<<m1<<endl;     // prints 1
cout<<dinner;       // prints 2
    
    return 0;
}



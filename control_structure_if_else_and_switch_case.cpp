#include<iostream>
using namespace std;


int main(){       //The following is an "if-else ladder", that is a sequence of if-else statements combined
    int age;
    cout<<"Tell me your age: "<<endl;
    cin>>age;

//*******************SELECTION CONTROL STRUCTURE: IF-ELSE STATEMENT/LADDER*******************************
cout<<"*******************SELECTION CONTROL STRUCTURE: IF-ELSE STATEMENT/LADDER*******************************"<<endl<<endl;


    if((age<18) && (age>0)){                 // use "&&" to add a condition and "||" to give a choice(OR) condition  
        cout<<"You are a kid"<<endl;
    }
    else if(age==18){
        cout<<"You are an adult"<<endl;
    }
    else if(age<=0){
        cout<<"Ha! Nice try.";
    }
    else{
        cout<<"You old fart"<<endl;
    }
    cout<<"___________________________________________________________________________________________________________________"<<endl<<endl;

    //*******************SELECTION CONTROL STRUCTURE: SWITCH CASE*******************************
cout<<"*******************SELECTION CONTROL STRUCTURE: SWITCH CASE*******************************"<<endl<<endl;

switch(age){                      // "Switch()" uses the variable within the brackets as the condition and follows the cases based on its value

case 18:
cout<<"You are 18"<<endl;
break;                           // "break;" is required after defining every case so that after a matching case is met, no other cases are checked or printed

case 22:
cout<<"You are 22"<<endl;
break;

default:                            // "default" is a case required if none of the special cases are met
cout<<"NO SPECIAL CASES";
break;

}



    return 0;

}
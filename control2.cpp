#include<iostream>
using namespace std;

//WAP for grading system
//multiline comment below
/* <25 - F
    25 to 44 - E
    45 to 49 - D
    50 to 59 - C
    60 to 79 - B
    80 to 100 - A
*/

int main(){
    int marks;
    cin>>marks;
    
    //this solution is not optimised, for solving such problems, switch case should be used.
    if(marks<25){
        cout<<"F";
    }
    else if(marks<=44 && marks>=25){
        cout<<"E";
    }
    else if(marks<=49 && marks>=45){
        cout<<"D";
    }
    else if(marks<=59 && marks>=50){
        cout<<"C";
    }
    else if(marks<=79 && marks>=60){
        cout<<"B";
    }
    else if(marks<=100 && marks>=80){
        cout<<"A";
    }
    return 0;
}
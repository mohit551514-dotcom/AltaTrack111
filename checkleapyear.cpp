#include<iostream>
using namespace std;
int main (){

int year;
cout<<"enter a number";
cin>>year;

if(year%400==0 || (year % 4 == 0 && year % 100 !=0)){

     cout<<year<<"it is a leap year";
}

   else{
    cout<<year<<"it is not a leap year";
   }

    return 0;
}
// Write a program to accept two integer values from standard input, store them in variables 'a' and 'b',<<endl 
// and swap their contents using a third temporary variable 'temp'. Print the values before and after swapping.
// Input Format
// Two space-separated integers a and b.


// Output Format
// Print 'Before swap: a = X, b = Y' followed on a new line by 'After swap: a = Y, b = X'.


#include<iostream>
using namespace std;
int main (){
    int a , b;
    cout <<"enter a : ";
    cin>> a;
    cout <<"enter b : ";
    cin>>b;
    int c;
    c=a;
    a=b;
    b=c;

    cout<<"the value of a " <<a<<endl;
    cout<<"the value of b " <<b<<endl;
    
}
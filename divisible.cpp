#include<iostream>
using namespace std;
int main(){

int n;
cout<<"enter a number";
cin>>n;

if(n%5==0 && n%3==0)
cout<<"divisible by 3 and 5";

else if(n%5==0 && n%3!=0)
cout<<"divisible by 5 only";

else if(n%3==0 && n%5!=0)
cout<<"divisible by 3 only";

else
cout<<"not divisible by 3 and 5";
}
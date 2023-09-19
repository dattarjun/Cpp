/*Write a C++ program To Find Area and Circumference of Circle
Area of Circle formula=
Circumferance of Circle Formula=

18/09/2023
*/
#include<iostream>
using namespace std;
int main()
{
    //const 
    int pie=3.14;
    int r,a,c;
    cout<<"Enter Radius For circle: ";
    cin>>r;
    a=pie*r*r;
    c=2*pie*r;
    cout<<"****Area of Circle is "<<a<<endl;
    cout<<"**** Circumderence is "<<c<<endl;
return 0;  
}
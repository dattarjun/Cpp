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
    const float pie=3.14;
    int r;
    float a,c;
    cout<<"Enter Radius For circle: ";
    cin>>r;
    a=pie*r*r;
    c=2*pie*r;
    cout<<"****Area of Circle is "<<a<<"\n";
    cout<<"**** Circumderence is "<<c;
return 0;  
}
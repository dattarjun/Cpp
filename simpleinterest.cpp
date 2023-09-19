/*
 Write a C++ program For Calculate A Simple Interest
18/09/2023
*/

#include<iostream>
using namespace std;
int main()
{
    int si,amount,percentage,time;
    cout<<"Enter amount,rate of interest and time :"; 
    cin>>amount>>percentage>>time;
    si=amount*percentage*time;
    cout<<"SI is "<<si;
return 0;
}
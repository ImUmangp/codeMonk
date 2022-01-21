/*
Write a program to input an integer N and print the sum of all its even digits and
 sum of all its odd digits separately.
Digits mean numbers, not the places!
That is, if the given integer is "13245", even digits are 2 & 4 and
 odd digits are 1, 3 & 5.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
int n,soE=0,soD=0;
cout<<"Enter a valid Number:"<<endl;
cin>>n;
while(n>0){
    int num=n%10;
    if(num%2==0){
        soE+=num;
    }
    else
    soD+=num;

    n=n/10;
}
cout<<"Sum of Evens: "<<soE<<", Sum of Odds "<<soD<<endl;
return 0;
}
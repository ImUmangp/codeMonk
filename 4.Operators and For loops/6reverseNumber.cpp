/*
12345->54321
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"Enter number you want to reverse:"<<endl;
cin>>n;
int num=0;
while(n>0){
    int rem=n%10;
    num=num*10+rem;
    n=n/10;
}
cout<<"Reversed number is "<<num<<endl;
return 0;
}
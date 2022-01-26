/*
Function to check number is prime or not:
*/
#include<bits/stdc++.h>
using namespace std;

bool isPrime(int a){
    int d=2;
    while(d<a){
        if(a%d==0){
            return false;
        }
       d++;
    }
    return true;
}
int main(){
int n;
cout<<"Enter number to check :"<<endl;
cin>>n;
cout<<isPrime(n)<<endl;
return 0;
}
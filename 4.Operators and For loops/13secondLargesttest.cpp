/*
Take input a stream of n integer elements, find the second largest element present.
123456->5
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"Enter total number of inputs:"<<endl;
cin>>n;
int max=INT_MIN,secondMax=INT_MIN;
int num;
int count=1;
while(count<=n){
    cin>>num;
    if(num>max){
        secondMax=max;
        max=num;
    }
    else if(num>secondMax && num!=max){
        secondMax=num;
    }
    count++;
}
cout<<"Second Largest among the given inputs is "<<secondMax<<endl;

return 0;
}
/*
Given an array of length N, 
you need to find and print the sum of all elements of the array.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[10000];
int n,sum=0;
cout<<"How many elements you want to add:"<<endl;
cin>>n;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int j=0;j<n;j++){
    sum+=arr[j];
}
cout<<"Sum of the given elements in the array is "<<sum<<endl;
return 0;
}
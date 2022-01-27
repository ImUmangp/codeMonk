/*
Ex:123456
=:214365
*/

#include<bits/stdc++.h>
using namespace std;

void swapAlternate(int arr[],int size){
    for(int i=0;i<size;i+=2){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    for(int j=0;j<size;j++){
        cout<<arr[j]<<" ";
    }
}
int main(){
int arr[100000];
int n;
cout<<"How many elements you want to add:"<<endl;
cin>>n;
cout<<"Enter elements for the array:"<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
swapAlternate(arr,n);
return 0;
}
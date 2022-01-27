/*You have been given a random integer array/list(ARR) of size N, 
and an integer X. You need to search for the integer X 
in the given array/list using 'Linear Search'.*/

#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[],int size,int value){
    for(int i=0;i<size;i++){
        if(arr[i]==value){
            return i;
                    }
    }
    return -1;
}

int main(){
int arr[10000];
int n;
cout<<"Enter number of elements you want to add:"<<endl;
cin>>n;
cout<<"Enter the values for arrays:"<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int val;
cout<<"Enter value you want to search:"<<endl;
cin>>val;
cout<<val<<" is present at index "<<linearSearch(arr,n,val)<<endl;
return 0;
}
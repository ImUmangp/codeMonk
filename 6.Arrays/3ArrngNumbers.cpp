/*
Arrange like: if n=6
1 3 5 6 4 2
*/
#include<bits/stdc++.h>
using namespace std;

void insert (int arr[],int size){
int val=1;
int start=0,end=size-1;
while(start<end){
 arr[start]=val;
 val++;
 arr[end]=val;
 val++;
 start++;
 end--;
}
if(arr[start]==arr[end]){
    arr[start]=size;
}
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
}

int main(){
int n;
int arr[10000];
cout<<"How many elements you want to add:"<<endl;
cin>>n;
insert(arr,n);
return 0;
}
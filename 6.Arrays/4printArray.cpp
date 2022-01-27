#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[10000];
int n;
cout<<"How many elements you want to add"<<endl;
cin>>n;
cout<<"Enter inputs for array:"<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int j=0;j<n;j++){
    cout<<arr[j]<<" ";
}
return 0;
}
/*
for n=7;
1 1 2 3 5 8 13
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"Enter  nth number:"<<endl;
cin>>n;
int first=0;
int second=1;
int sum;
if(n==1){
    cout<<n<<"th Fibbonacci Number is: "<<"1"<<endl;
}
for(int i=1;i<=n-1;i++){
      sum=first+second;
     first=second;
     second=sum;
}
cout<<n<<"th Fibbonacci Number is: "<<sum<<endl;
return 0;
}
/*
for n=5;
  *
 ***
*****
 ***
  *
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"Enter number of rows you want to print:"<<endl;
cin>>n;
int n1=(n+1)/2;
int n2=n-n1;
for(int i=0;i<=n1;i++){
    for(int j=1;j<=n1-i;j++){
        cout<<" ";
    }
    for(int k=1;k<=2*i-1;k++){
        cout<<"*";
    }
    cout<<endl;
}
for(int a=n2;a>=1;a--){
    for(int b=1;b<=n2-a+1;b++){
        cout<<" ";
    }
    for(int c=1;c<=2*a-1;c++){
        cout<<"*";
    }
    cout<<endl;
}
return 0;
}
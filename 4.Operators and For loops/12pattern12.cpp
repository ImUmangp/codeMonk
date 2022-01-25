/*
123321
12**21
1****1
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"Enter number of rows of you want to print:"<<endl;
cin>>n;
int z=n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i+1;j++){
        cout<<j;
    }
    for(int k=1;k<=2*i-2;k++){
        cout<<"*";
    }
    int p=z;
    for(int l=1;l<=n-i+1;l++){
        cout<<p;
        p--;
    }
    z--;
    cout<<endl;
}
return 0;
}
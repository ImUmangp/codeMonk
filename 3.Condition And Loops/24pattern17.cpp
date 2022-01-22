/*
A
BB
CCC
DDDD
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"Enter of rows you want to print:"<<endl;
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<char('A'+i-1);
    }
    cout<<endl;
}
return 0;
}
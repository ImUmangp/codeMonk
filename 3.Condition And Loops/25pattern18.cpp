/*
A
BC
CDE
DEFG
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"Enter number of rows you want to print:"<<endl;
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<char('A'+i+j-2);
    }
    cout<<endl;
}
return 0;
}
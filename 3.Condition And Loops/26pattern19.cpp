/*
E
DE
CDE
BCDE
ABCDE
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"Enter number of rows you want to print:"<<endl;
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<char('A'+n-i+j-1);
    }
    cout<<endl;
}
return 0;
}
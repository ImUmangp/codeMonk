/*
ABCD
ABCD
ABCD
ABCD
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"Enter of rows of rows you to print:"<<endl;
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        cout<<char('A'+j-1);

    }
    cout<<endl;
}
return 0;
}
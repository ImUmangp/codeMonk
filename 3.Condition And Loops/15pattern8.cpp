/*
1111
2222
3333
4444
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"Enter number of rows you want to print:"<<endl;
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        cout<<i;
    }
    cout<<endl;
}
return 0;
}
/*
55555
4444
333
22
1
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"Enter number of rows you want to print:"<<endl;
cin>>n;
int c=n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i+1;j++){
        cout<<c;
    }
    c--;
    cout<<endl;
}
return 0;
}
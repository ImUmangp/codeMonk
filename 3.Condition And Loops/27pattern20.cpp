/*
    1
   12
  123
 1234
12345  
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"Enter number of rows you want to print:"<<endl;
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++){
        cout<<" ";
    }
    for(int k=1;k<=i;k++){
        cout<<k;
    }
    cout<<endl;
}
return 0;
}
/*
   1
  121
 12321     
1234321
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
    int c=i-1;
    for(int l=1;l<=i-1;l++){
        cout<<c;
        c--;
    }
    cout<<endl;
}
return 0;
}
/*
4321
4321
4321
4321
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"Enter number of rows you want to print:"<<endl;
cin>>n;
for(int i=1;i<=n;i++){
    int c=n;
    for(int j=1;j<=n;j++){
          cout<<c;
          c--;
    }
    cout<<endl;
    
}
return 0;
}
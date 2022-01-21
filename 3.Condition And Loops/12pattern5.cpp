/*
    1
   23
  345
 5678  
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"Enter number of rows you want to print:"<<endl;
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=n-i;j>0;j--){
        cout<<" ";
    }
    int c=i;
    for(int k=1;k<=i;k++){
          cout<<c;
          c++;
    }
    cout<<endl;
}
return 0;
}
/*
   1
  232
 34543
4567654      
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"Enter number of rows you want to print:"<<endl;
cin>>n;
for(int i=1;i<=n;i++){
    for(int a=1;a<=n-i;a++){
        cout<<" ";
    }
    int k=i;
    for(int b=1;b<=i;b++){
        cout<<k;
        k++;
    }
    int m=(2*i)-2;;
    for(int c=1;c<=i-1;c++){
        cout<<m;
        m--;
    }
    cout<<endl;
}
return 0;
}
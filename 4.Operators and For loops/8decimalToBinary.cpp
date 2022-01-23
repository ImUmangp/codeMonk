/*
15->1111
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
long long int ans=0;
long long int pow=1;
int n;
cout<<"Enter decimal number to convert into binary:"<<endl;
cin>>n;
while(n>0){
    ans=ans+pow*(n%2);
    n=n/2;
    pow=pow*10;
}
cout<<"Binary representation of given decimal number is "<<ans<<endl;
return 0;
}
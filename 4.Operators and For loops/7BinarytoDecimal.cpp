/*
1111->15;
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"Enter Binary Number:"<<endl;
cin>>n;
int pv=1,ans=0;
while(n>0){
    int rem=n%10;
    ans=ans+rem*pv;
    pv=pv*2;
    n=n/10;
}
cout<<"Decimal value of given binary number is "<<ans<<endl;
return 0;
}
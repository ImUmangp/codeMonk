/*
Find Power To a number
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
int n,x;
cout<<"Enter value of n "<<endl;
cin>>n;
cout<<"Enter value of power raised "<<endl;
cin>>x;
int t=x;
int pow=1;
while(t>0){
    pow*=n;
    t--;
}
cout<<n<<" raised to power "<<x<<" gives "<<pow<<endl;
return 0;
}
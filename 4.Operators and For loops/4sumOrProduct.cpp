/*
1234
sum=10;
product=24;
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"Enter number of which you want product or sum:"<<endl;
cin>>n;
int b=n;
int sum=0;
int product=1;
while(n>0){
    int a=n%10;
    sum+=a;
    product*=a;
    n/=10;
}
cout<<"Sum of given number "<<b<<" is "<<sum<<" And product of given number is "<<product;
return 0;
}
#include<iostream>
using namespace std;
int main(){
int n,sum=0;
cout<<"Enter number upto which you want sum:"<<endl;
cin>>n;
int i=1;
while(i<=n){
    sum+=i;
    i++;
}
cout<<"Sum upto "<<n<<" is "<<sum<<endl;
return 0;
}
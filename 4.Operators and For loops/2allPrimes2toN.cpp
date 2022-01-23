#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"Enter number upto which you want to know prime numbers:"<<endl;
cin>>n;
if(n==1||n==2||n==3){
    cout<<n<<" is a prime number"<<endl;
}

for(int i=2;i<=n;i++){
bool div=false;
int d=2;
while(d<i){
    if(i%d==0){
        cout<<i<<" is not a prime number"<<endl;
               div=true;
               break;
           }
    d++;
}
if(!div){
    cout<<i<<" is a prime number"<<endl;
}
}
return 0;
}
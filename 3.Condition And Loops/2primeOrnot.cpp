#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter number to check for prime or not:"<<endl;
cin>>n;
bool div=false;
int d=2;
while(d<n){
    if(n%d==0){
        cout<<n<<" is not a prime number"<<endl;
               div=true;
               break;
                   }
    d++;
}
if(!div){
    cout<<n<<" is a prime number"<<endl;

}
return 0;
}
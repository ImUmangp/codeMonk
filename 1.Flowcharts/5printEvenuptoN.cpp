#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter Number upto which you want to know even number:"<<endl;
cin>>n;
int i=0;
while(i<=n){
    if(i%2==0){
        cout<<i<<" ";        
    }
    i++;
}
cout<<" and rest are odd numbers:) ";
return 0;
}
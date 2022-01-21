#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter Number you want to check for Prime or not"<<endl;
cin>>n;
int i=2;
if(n==1 || n==2){
cout<<n<<" is a prime number:)"<<endl;
}
else{
    while(i<n){
        if(n%i==0){
            cout<<n<<" is not a prime number:)"<<endl;
            break;
        }
        else{
         cout<<n<<" is a prime number :)"<<endl;
            break;
        }
         i++;         
    }
}
   
return 0;
}
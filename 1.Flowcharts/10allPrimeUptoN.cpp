#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter Number upto which"<<endl;
cin>>n;
int i=2;
for(int j=1;j<=n;j++){
if(j==1 || j==2){
cout<<j<<" is a prime number:)"<<endl;
}
else{
    while(i<j){
        if(j%i==0){
            cout<<j<<" is not a prime number:)"<<endl;
            break;
        }
        else{
         cout<<j<<" is a prime number :)"<<endl;
            break;
        }
         i++;         
    }
}
}
   
return 0;
}
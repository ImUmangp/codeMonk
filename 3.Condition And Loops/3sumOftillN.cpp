//sum of evens till n
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the value of N:"<<endl;
cin>>n;
int i=0;
int sum=0;
while(i<=n){
    sum+=i;
    /*if(i%2==0){
        sum+=i;
    }
    */
    i+=2;
}
cout<<"sum of evens till "<<n<<" is "<<sum<<endl;
return 0;
}
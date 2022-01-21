#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter upto which you want to know factorial:"<<endl;
cin>>n;
int i=n;
int fact=1;
while(i!=0){
      fact*=i;
      i--;
}
cout<<"Factorial upto "<<n<<" is "<<fact<<endl;
return 0;
}
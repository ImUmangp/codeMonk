#include<iostream>
using namespace std;
int main(){
  int a=0,b=1,c;
  cout<<"Enter n  upto which you want fibonnaci series: "<<endl;
  cin>>c;
  int i=0;
  while(i<=c){
      cout<<a<<" ";
      int temp=a+b;
      a=b;
      b=temp;

      i++;
  }
return 0;
}
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter upto which you want to add Even and Prime:"<<endl;
cin>>n;
int sOO=0,soE=0;
int i=1;
while(i<=n){
if(i%2==0){
    soE+=i;
}
else{
    sOO+=i;
}
i++;
}
cout<<"sum of even = "<<soE<<", AND sum of odd = "<<sOO<<endl;
return 0;
}
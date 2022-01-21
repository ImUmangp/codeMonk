#include<iostream>
using namespace std;
int main(){
int n;
 long long int pro=1;
cout<<"Enter Number upto which you want product:";
cin>>n;
int i=1;
while(i<=n){
    pro*=i;
    i++;
}
cout<<"Product upto "<<n<<" is "<<pro<<endl;
return 0;
}
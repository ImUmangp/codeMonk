/*
25->5;
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"Enter number of which you want square roor:"<<endl;
cin>>n;
int pro=1,i=1;
pro=i*i;
if(n==0||n==1){
    cout<<n;
}
else{
    while(pro<=n){
        i++;
        pro=i*i;
    }
}
cout<<"Square root of "<<n<<" is "<<i-1<<endl;
return 0;
}
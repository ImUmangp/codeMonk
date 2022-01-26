#include<bits/stdc++.h>
using namespace std;

void incr(int n){
    int b=10;
    n=b+10;
    cout<<"Value of a in function "<<n<<endl;
}

int main(){
 int n;
 cout<<"Enter n "<<endl;
 cin>>n;
 incr(n);
 cout<<"value of a in main "<<n<<endl;
return 0;
}
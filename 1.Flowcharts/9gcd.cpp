#include<iostream>
#include <climits>
using namespace std;

int gcd(int a,int b){
     int m = min(a, b),gc;
    for(int i = m; i > 0; --i)
        if(a % i == 0 && b % i == 0) {
            gc = i;
            return gc;
        }
}

int main(){
int a,b;
cout<<"Enter Two Number:"<<endl;
cin>>a>>b;
cout<<"gdc of "<<a<<" and gdc of "<<b<<" is "<<gcd(a,b)<<endl;
return 0;
}
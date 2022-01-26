//check whether given number is part of fibonacci series or not

#include<bits/stdc++.h>
using namespace std;
bool member(int n){
    int a=0,b=1;
    int c=0,i=0;
    if(n==0){
        return true;
    }else{
    while(i<n){
        c=a+b;
        if(c==n){
            return true;
        }else{
            a=b;
            b=c;
            i++;
        }
    }
}
return false;
}
int main(){
int n;
cout<<"Enter number to check for:"<<endl;
cin>>n;
cout<<member(n);
return 0;
}
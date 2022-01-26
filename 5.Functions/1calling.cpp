/*
Basics of functions
*/
#include<bits/stdc++.h>
using namespace std;
void B(){
    cout<<5<<endl;    //3
}
void A(int a){
    cout<<1<<endl;   //2
    B();
    cout<<2<<endl;   //4
}
int main(){
int n=10;
cout<<3<<endl;  //1
A(n);
cout<<4<<endl;   //5
return 0;
}
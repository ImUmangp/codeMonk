/*
 program to print first x terms of the series
       3N + 2 which are not multiples of 4.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"Enter number of terms you want:"<<endl;
cin>>n;
int count=0;

for(int i=1;count<n;i++){
    int num=(3*i)+2;
     if(num%4!=0){
         cout<<num<<endl;
         count++;
     }
}
cout<<"Total "<<count<<" are in the series which are not divisible by 4"<<endl;
return 0;
}
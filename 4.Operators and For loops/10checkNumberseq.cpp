/*
You are given S, a sequence of n integers i.e. S = s1, s2, ..., sn.
Compute if it is possible to split S into two parts : s1, s2, ..., si and si+1,
si+2, ….., sn (0 <= i <= n) in such a way that the
first part is strictly decreasing while
the second is strictly increasing one.

5 9 8 4 5 6->true;
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
int n,num,prev;
bool ans=true,check=false,equal=false;
cout<<"Total number of inputs:"<<endl;
cin>>n;
for(int i=1;i<=n;i++){
    cin>>num;
    if(i==1){
        prev=num+1;
    }
    if(prev==num){
        equal=true;
    }
    if(check==false){
       if(prev<num){
           check=true;
       }
       ans=true;
       prev=num;
    }
    else if(check=true){
        if(prev>num){
            ans=false;
            prev=num;
        }
    }
}
if(ans==false||equal==true){
    cout<<"False";
    return 0;
}
else if(ans==true){
    cout<<"True";
    return 0;
}
return 0;
}

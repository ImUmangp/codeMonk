//nCr = n!/r!*(n-r)!

#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    int ans =1,a=1;
    while(a<=n){
        ans*=a;
        a++;
    }
    return ans;
}

int main(){
    int n,r;
    cout<<"Enter value of n and r"<<endl;
    cin>>n>>r;
    int factn=factorial(n);
    int factr=factorial(r);
    int factnr=factorial(n-r);

    int ans=factn/(factr*factnr);
    cout<<ans<<endl;

return 0;
}
/*
1
2 3
3 4 5
5 6 7 8
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"Enter number of Rows you want to print:"<<endl;
cin>>n;
for(int i=1;i<=n;i++){
    int c=i;
    for(int j=1;j<=i;j++){
        cout<<c<<" ";
        c++;
    }
    cout<<endl;
}

return 0;
}
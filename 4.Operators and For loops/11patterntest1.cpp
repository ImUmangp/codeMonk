/*
  1
 212
32132
*/#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"Enter number of rows you want to print:"<<endl;
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++){
        cout<<" ";
    }
    int a=i;
    for(int k=1;k<=i;k++){        
        cout<<a;
        a--;
    }
    int c=i;
    for(int b=1;b<=i-1;b++){
        cout<<c;
        c--;
    }
    cout<<endl;
}
return 0;
}
//Print 1 to n using function
#include<bits/stdc++.h>
using namespace std;

void print_1_to_n(int a){
    int i=1;
    while(i<=a){
        cout<<i<<" ";
        i++;
    }
}
int main(){
 int n;
 cout<<"Enter n to print upto:"<<endl;
 cin>>n;
 print_1_to_n(n);
return 0;
}
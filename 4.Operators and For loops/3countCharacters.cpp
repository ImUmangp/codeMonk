/*
abc  de23f    4$
w=5
s=7
n=3
'$ means end of input'
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
char c;
int words=0,number=0,space=0;
cout<<"Enter the character into which you want to count:"<<endl;
while(c!='$'){
    c=cin.get();
if(c==32||c==10||c==11||c==9){
     space++;
}
else if(c<=122&&c>=97){
    words++;
}
else if(c>=48&&c<=57){
    number++;
}
}
cout<<"Following input "<<" has words="<<words<<" Numbers="<<number<<" Space="<<space<<endl;
return 0;
}
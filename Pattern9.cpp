/* 0-1 Pattern  
Row- to n,
Columns:1 to row no.
elements-(Row no+col no)is even then print 1 otherwise 0.

*/
#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;

for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        if((i+j)%2==0){
            cout<<"1";
        }
        else{
            cout<<"0";
        }
    }
    cout<<endl;
}
    return 0;
}
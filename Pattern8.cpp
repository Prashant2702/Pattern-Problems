/*Inverted Pattern
Rows-1 to n,
column-n+1-row no.
elements-coulmn number
*/
#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;

for(int i=1;i<=n;i++){
   for(int j=1;j<=n+1-i;j++){
    cout<<j<<" ";
   }
   cout<<endl;
}
    return 0;
}
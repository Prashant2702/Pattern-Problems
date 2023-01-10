/*Number Pattern
for n=5;
Row-1 to n.
coulumns- Spacing-1 to n-Row No.
Numbers Printing-1 to Row no.
*/
#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;

for(int i=1;i<+n;i++){
   for(int j=1;j<=n-i;j++){
    cout<<" ";
   }
   for(int j=1;j<=i;j++){
    cout<<j<<" ";
   }
   cout<<endl;
}
    return 0;
}
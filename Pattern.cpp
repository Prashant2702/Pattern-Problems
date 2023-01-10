#include<iostream>
using namespace std;

int main(){
int row,col;
cin>>row>>col;
for(int i=1;i<=row;i++)
/*Above For loop is used for the row .*/
{

for(int j=1;j<=col;j++)
/*This For loop is used for the columns of the pattern..*/
{
    cout<<"*";
}
cout<<endl;
}
    return 0;
}

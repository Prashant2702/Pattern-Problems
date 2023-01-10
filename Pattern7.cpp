/*Butterfly Pattern
Row:1 to n
*=Row no.
space:2*n-2*Row no.*/
#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    int space=2*n - 2*i;
    for(int j=1;j<=space;j++){
        cout<<" ";
    }
     for(int j=1;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
    /*This is the code for the upper part of the Butterfly Pattern*/
}
for(int i=n;i<=1;i--){
    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    int space=2*n - 2*i;
    for(int j=1;j<=space;j++){
        cout<<" ";
    }
     for(int j=1;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
/*This is the code for the lower part of the butterfly problem.*/
}
return 0;
}
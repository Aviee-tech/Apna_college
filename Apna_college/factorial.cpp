#include<iostream>
using namespace std;
int main(){
    int n,f=1;
    cout<<"Enter the number=";
    cin>>n;
    while(n>0){
        f=f*n;
        n=n-1;
    }
    cout<<"The factorial is  "<<f;
    return 0;

}
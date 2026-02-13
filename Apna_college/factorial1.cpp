#include<iostream>
using namespace std;
int main(){
    int n,a=0,b=1,c;
    cout<<"Enter the no. of terms=";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<a<<endl;
        c=a+b;
        a=b;
        b=c;

    }
    return 0;
}
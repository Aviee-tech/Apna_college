#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"Enter the last numbers=";
    cin>>n;
    for(int i=2;i<=n;i++){
        count=0;
        for(int j=1;j<i;j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==1){
            cout<<i<<" is a prime number.";
            
        }
    }
    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int i=2; 

    while(i<n){
       if(n%i==0){
        cout<<"Prime ";
        i=i+1;
       }
       else{
        cout<<"Not Prime ";
        i=i+1;
       }
    }
    return 0;
}
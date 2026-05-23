#include<iostream>
using namespace std;

int main(){
    int a,b;
    char op;
    cout<<"Value of a:";
    cin>>a;
    cout<<"Value of b:";
    cin>>b;
    cout<<"Write opertation to perform:";
    cin>>op;

    switch(op){

        case '+':cout<<a+b;
        break;
        case '-':cout<<a-b;
        break;
        case '*':cout<<a*b;
        break;
        case '/':cout<<a/b;
        break;
        default:cout<<"Default case\n";
        break;
    }

}

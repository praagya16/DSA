#include<iostream>
#include<array>
using namespace std;

int main(){
array<int,4> a={1,2,3,4};
int size=a.size();

for(int i=0; i<size; i++){
    cout<<a[i]<<"\t\n";
  }
  cout<<"Element at 2 position:"<<a.at(1)<<"\n";
  cout<<"Empty or not:"<<a.empty()<<"\n";
  cout<<"First Element:"<<a.front()<<"\n";
  cout<<"Last elementL:"<<a.back()<<"\n";

  return 0;
}



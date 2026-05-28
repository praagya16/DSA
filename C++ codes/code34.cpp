#include<iostream>
using namespace std;

void swap(int arr[],int size){
    int start=0;
    int end=size-1;
    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int printarray(int arr[], int size){
    for(int i=0; i<=size; i++){
        cout<<arr[i]<<"\t";
    }
}

int main(){
    int arr[100],size;
    cin>>size;
    cout<<"Enter the elements:";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    cout<<"Array:";
     for(int i=0; i<size; i++){
        cout<<arr[i];
    }
    //function call
    swap(arr,size);
    cout<<"reverse array:"<< printarray(arr,size);

    return 0;
}
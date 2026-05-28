#include<iostream>
using namespace std;

bool BinarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid = (start+end)/2;
    while(start<=end){
        if(key==arr[mid]){
            return 1;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return 0;
}

int main(){
    int key,size;
    int arr[]={1,2,3,4,5};
    cout<<"Enter number to find:";
    cin>>key;
    BinarySearch(arr,5,key);
    if(BinarySearch(arr,5,key)){
        cout<<"Number is there";
    }
    else{
        cout<<"Number is not there";
    }
}
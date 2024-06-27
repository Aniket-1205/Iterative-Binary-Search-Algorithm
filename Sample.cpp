#include<iostream>
using namespace std;
int binarySearch(int arr[],int len,int key){
    int low=0,high=len-1;
    while(arr[low]<=arr[high]){
        int mid=low+(high-low)/2;
        if(arr[mid]==key)
            return mid;
        else if(arr[mid]<key)
            low=mid+1;
        else
            high=mid-1;
    }
    return -1;
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int len=sizeof(arr)/sizeof(arr[0]);
    int key;
    cout<<"Enter the element you want to search"<<endl;
    cin>>key;
    int result=binarySearch(arr,len,key);
    (result==-1)?
        cout<<"Elements not found"<<endl:
        cout<<"Elements found at position "<<result<<endl;
    return 0;
}
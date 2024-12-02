#include<iostream>
using namespace std;

void traverse(int arr[], int n){

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void  BinarySearch(int arr[], int n, int item){
    int start = 0;
    int end = n-1;

    while(start <= end){
        int mid = (start + end)/2;
        if(arr[mid] == item){
            cout<<"item found at: "<<mid;
            return;
        }

        if(arr[mid] < item){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    cout<<"item not found";
}

int main(){

    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];

    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    int item;
    cout<<"enter item: ";
    cin>>item;

    traverse(arr, n);
    BinarySearch(arr, n, item);

    return 0;
}
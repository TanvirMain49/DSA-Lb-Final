#include<iostream>
using namespace std;

void traverse(int arr[], int n){

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void insertAtTheBeg(int arr[], int n, int item, int pos){
    int arr2[n+1];

    // copy array:
    for(int i = 0; i<=pos; i++){
        arr2[i] = arr[i];
    }
    arr2[pos] = item;

    for(int i= pos; i<n; i++){
        arr2[i+1] = arr[i];
    }

    traverse(arr2, n+1);
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
    cout<<"Enter the item: ";
    cin>>item;
    int position;
    cout<<"Enter the postion: ";
    cin>>position;

    traverse(arr, n);
    insertAtTheBeg(arr, n, item, position);


    return 0;
}
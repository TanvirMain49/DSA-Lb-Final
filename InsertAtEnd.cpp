#include<iostream>
using namespace std;

void traverse(int arr[], int n){

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void insetAtTheEnd(int arrA[], int n, int item){
    int arrB[n+1];
    for(int i = 0; i<n; i++){
        arrB[i] = arrA[i];
    }
    arrB[n] = item;
    traverse(arrB, n+1);
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
    cin>>item;


    traverse(arr, n);
    insetAtTheEnd(arr, n, item);


    return 0;
}
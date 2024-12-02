#include<iostream>
using namespace std;

void traverse(int arr[], int n){

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void deleteAtAnyPos(int arrA[], int n, int pos){
    int arrB[n-1];

    // copy array
    for(int i = 0; i<pos; i++){
        arrB[i] = arrA[i];
    }

    for(int i = pos + 1; i<n; i++){
        arrB[i-1] = arrA[i];
    }

    traverse(arrB, n-1);
}


int main(){

    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];

    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int pos;
    cin>>pos;


    traverse(arr, n);
    deleteAtAnyPos(arr, n, pos);


    return 0;
}
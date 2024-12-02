#include<iostream>
using namespace std;
struct DNode
{
    int data;
    DNode* next;
    DNode* prev;
};
DNode* first = nullptr;
DNode* last = nullptr;

void traverse(){
    if(first == nullptr){
        cout<<"create linked list first";
        return;
    }

    DNode* ptr = first;
    while(ptr != nullptr){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    cout<<endl;
}

void insert_At_beg(int item){
    if(first == nullptr){
        cout<<"create dLinked list first";
        return;
    }

    DNode* newNode = new DNode;
    if(newNode == nullptr){
        cout<<"OverFlow";
        return;
    }
    newNode->data = item;
    newNode->next = nullptr;
    newNode->prev = nullptr;

    newNode->next = first;
    first->prev = newNode;
    first = newNode;

    traverse();
}


void insert_At_end(int item){
    if(first == nullptr){
        cout<<"create dLinked list first";
        return;
    }

    DNode* newNode = new DNode;
    if(newNode == nullptr){
        cout<<"OverFlow";
        return;
    }
    newNode->data = item;
    newNode->next = nullptr;
    newNode->prev = nullptr;

    last->next = newNode;
    newNode->prev = last;
    last = newNode;

    traverse();
    
}


void insert_At_GivenPos_UnSorted(int item, int value){
    if(first == nullptr){
        cout<<"create dLinked list first";
        return;
    }

    DNode* newNode = new DNode;
    if(newNode == nullptr){
        cout<<"Overflow";
        return;
    }
    newNode->data = value;
    newNode->next = nullptr;
    newNode->prev = nullptr;
    DNode* ptr = first;

    while(ptr->data != item){
        ptr = ptr->next;
    }    
    
    ptr->next->prev = newNode;
    newNode->next = ptr->next;
    newNode->prev = ptr;
    ptr->next = newNode;

    traverse();

}


void insert_At_GivenPos_Sorted(int value){
    if(first == nullptr){
        cout<<"create dLinked list first";
        return;
    }

    DNode* newNode = new DNode;
    if(newNode == nullptr){
        cout<<"Overflow";
        return;
    }
    newNode->data = value;
    newNode->next = nullptr;
    newNode->prev = nullptr;
    DNode* ptr = first;
    DNode* save;
    while(ptr->data <= value){
        save = ptr;
        ptr = ptr->next;
    }    
    
    ptr->prev = newNode;
    newNode->next = ptr;
    newNode->prev = save;
    save->next = newNode;

    traverse();

}


int main(){

    int n;
    cout<<"Enter the size of the linked list: ";
    cin>>n;

    DNode* save;
    while(n--){
        DNode* newNode = new DNode;
        cin>>newNode->data;
        newNode->next = nullptr;
        newNode->prev = nullptr;

        if(first == nullptr){
            first = newNode;
            last = newNode;
        }
        else{
            last = newNode;
            save->next = newNode;
            newNode->prev = save;
            newNode->next = nullptr;
        }
        save= newNode;
        traverse();
    }
    // int item;
    // cout<<"Enter the item: ";
    // cin>>item;

    int value;
    cout<<"Enter the value: ";
    cin>>value;

     insert_At_GivenPos_Sorted(value);

    return 0;
}
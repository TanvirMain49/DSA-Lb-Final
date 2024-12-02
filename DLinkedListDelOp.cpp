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
        cout<<"Create linked list first";
        return;
    }

    DNode* ptr = first;
    while(ptr != nullptr){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    cout<<endl;
}

void delete_at_beg(){
    if(first == nullptr){
        cout<<"Create linked list first";
        return;
    }

    first = first->next;
    first->prev = nullptr;

    traverse();
}


void delete_At_given_position(int item){
    if(first == nullptr){
        cout<<"Create linked list first";
        return;
    }

    DNode*ptr = first;
    while(ptr->data != item && ptr !=nullptr){
        ptr = ptr->next;
    }

    ptr->prev->next = ptr->next;
    ptr->next->prev = ptr->prev;

    traverse();
}

void delete_At_end(){
    if(first == nullptr){
        cout<<"create linked list first"<<endl;
        return;
    }

    last = last->prev ;
    last->next = nullptr;
    traverse();


}

int main(){

    int n;
    cin>>n;

    DNode* save ;
    while(n--){
        DNode* newDNode = new DNode;
        cout<<"Enter the node value: ";
        cin>>newDNode->data;
        newDNode->next = nullptr;
        newDNode->prev = nullptr;

        if(first == nullptr){
            first = newDNode;
            last = newDNode;
        }
        else{
            last = newDNode;
            save->next = newDNode;
            newDNode->prev = save;
            newDNode->next = nullptr;
        }
        save = newDNode;
        traverse();
    }

    int item;
    cout<<"Enter the item you want to delete"<<endl;
    cin>>item;

    delete_At_given_position(item);
    // delete_At_end();

    return 0;
}
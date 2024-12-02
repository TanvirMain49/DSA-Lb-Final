#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};

Node* head = nullptr;

void traverse(){
    if(head == nullptr){
        cout<<"Koto bar komu age akta linked list create kor.";
        return;
    }

    Node* ptr = head;
    while(ptr != nullptr){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    cout<<endl;
}


void insertAtBeg(int item){
    if(head == nullptr){
        cout<<"Koto bar komu age akta linked list create kor.";
        return;
    }

    Node* newNode = new Node;
    if(newNode == nullptr){
        cout<<"Overflow";
        exit(1);
    }

    newNode->data = item;
    newNode->next = nullptr;

    newNode->next = head;
    head = newNode;
    traverse();

}

void insertATEnd(int item){
    if(head == nullptr){
        cout<<"Koto bar komu age akta linked list create kor.";
        return; 
    }

    Node* newNode = new Node;
    if(newNode == nullptr){
        cout<<"Overflow";
        exit(1);
    }
    newNode->data = item;
    newNode->next = nullptr;

    Node* ptr = head;
    while(ptr->next != nullptr){
        ptr = ptr->next;
    }

    ptr->next = newNode;

    traverse();
    
}

void insert_unsort(int item, int value){
    if(head == nullptr){
        cout<<"Koto bar komu age akta linked list create kor.";
        return; 
    }

    Node* newNode = new Node;
    if(newNode == nullptr){
        cout<<"OverFlow"<<endl;
        return;
    }
    newNode->data = value;
    newNode->next = nullptr;

    Node*ptr = head;
    while(ptr->data != item){
        ptr = ptr->next;
    }
    newNode->next = ptr->next;
    ptr->next = newNode;
    traverse();
}

void insert_sorted(int item){
    if(head == nullptr){
        cout<<"create linked list first";
        return;
    }

    Node* newNode = new Node;
    if(newNode == nullptr){
        cout<<"Overflow";
        return;
    }

    newNode->data = item;
    newNode->next = NULL;

    Node* ptr = head;
    Node* save;
    while(ptr->data <= item){
        save = ptr;
        ptr = ptr->next;
    }
    newNode->next = save->next;
    save->next = newNode;
    

    traverse();
}


int main(){

    int n;
    cin>>n;

    Node* ptr;
    
    while(n--){
        Node* newNode = new Node;
        cin>>newNode->data;
        newNode->next = nullptr;

        if(head == nullptr){
            head = newNode;
        }
        else{
            ptr->next = newNode;
        }
        ptr = newNode;
        traverse();
    }
        int item;
        cout<<"Enter the item: ";
        cin>>item;

        // int value;
        // cout<<"Enter the value you want to insert: ";
        // cin>>value;
        // cout<<"Insert at the beginning: "<<endl;
        // insertAtBeg(item);

        // cout<<"Insert at the End: "<<endl;
        // insertATEnd(item);

        insert_sorted(item);

    return 0;
}
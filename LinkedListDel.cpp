#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
Node *head = nullptr;

void traverse()
{
    if (head == nullptr)
    {
        cout << "Linked list do not exist";
    }

    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void deleteAtBeg()
{
    if (head == nullptr)
    {
        cout << "age linked list create kor beta";
    }

    head = head->next;
    traverse();
}

void deleteAtEnd()
{
    if (head == nullptr)
    {
        cout << "age linked list create kor beta";
    }

    Node* temp = head;
    Node* save;
    while(temp->next != nullptr){
        save = temp;
        temp = temp->next;
    }

    save->next = nullptr;
    traverse();
}

void deleteATGivenPosition(int item){
    if(head == nullptr){
        cout<<"age linked list create kor beta";
    }

    Node* ptr = head;
    Node* prev;

    while(ptr->data != item ){
        prev = ptr;
        ptr = ptr->next;
    }

    prev->next = ptr->next;
    ptr->next = nullptr;

    traverse();
}

int main()
{

    int n;
    cin >> n;
    Node *save;

    while (n--)
    {
        Node *newNode = new Node;

        cin >> newNode->data;

        newNode->next = nullptr;

        if (head == nullptr)
        {
            head = newNode;
        }
        else
        {
            save->next = newNode;
        }
        save = newNode;
        traverse();
    }

    deleteATGivenPosition(2);

    return 0;
}
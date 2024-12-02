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
        cout << "Linked list is empty";
    }

    Node *temp = head;
    while (temp != nullptr)
    {   
        cout<<"|";
        cout << temp->data << "|--->";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    int n;

    cout << "Enter the number of nodes you want to insert: ";
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

    return 0;
}

#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtTail(node *&tail, int data)
{
    node *temp = new node(data);

    tail->next = temp;
    tail = temp;
}

void print(node *head)
{
    node *&temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int getLength(node *head)
{
    int length = 1;

    node *temp = head;

    while (temp != NULL)
    {
        temp = temp->next;
        length++;
    }

    return length;
}

void printMiddle(node *&head)
{
    int midLength = getLength(head) / 2;
    cout << midLength << endl;

    node *temp = head;

    while (midLength--)
    {
        temp = temp->next;
    }

    cout << "middle node is: " << temp->data;
}

int main()
{

    node *node1 = new node(1);

    node *head = node1;
    node *tail = node1;

    insertAtTail(tail, 3);
    insertAtTail(tail, 8);
    insertAtTail(tail, 5);

    print(head);
    printMiddle(head);
}
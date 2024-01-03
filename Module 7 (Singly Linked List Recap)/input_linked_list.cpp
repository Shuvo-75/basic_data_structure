#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
        Node(int val)
        {
            this->val=val;
            this->next=NULL;
        }
};

// print linked list
void print_linked_list(Node *head)
{
    Node *tmp = head;
    cout << "Linked list: ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
    
}

// insert tail
void insert_tail(Node * &head, Node * &tail, int val) // complexity O(1)
{
    Node *newNode = new Node(val);
    if(head == NULL)    
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
int main()
{
    Node * head = NULL;
    Node * tail = NULL;
    int val;
    while(true) // complexity O(N)
    {
        cin >> val;
        if(val == -1) 
        {
            break;
        }
        insert_tail(head, tail, val); // complexity O(1)
    }
    print_linked_list(head);
    return 0;
}
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

// reverse printing 
void print_recursion(Node * n)
{
    
    if(n == NULL)
    {
        return;
    }
    print_recursion(n->next); // reverse print
    cout << n->val << " ";
    // print_recursion(n->next); // regular print
}

// regular print
void print_recursion1(Node * n)
{
    
    if(n == NULL)
    {
        return;
    }
    cout << n->val << " ";
    print_recursion1(n->next); // regular print
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *tail = d;

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    
    print_recursion1(head);
    cout << endl;
    print_recursion(head);
    return 0;
}
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
void insert_at_tail(Node * &head, int v)
{
    Node *newNode = new Node(v);
    if(head==NULL)
    {
        head = newNode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    // last e node ekon tmp
    tmp->next = newNode;
    
}

void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout <<"Yout linked list: " << tmp->val << endl;
        tmp = tmp->next;
    }
    cout << endl;
    
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1: insert at tail" << endl;
        cout << "Option 2: Print link list" << endl;
        cout << "Option 3: Terminate" << endl;
        int op;
        cin >> op;
        if(op==1)
        {
            cout << "Please Enter value: ";
            int v;
            cin >> v;
            insert_at_tail(head, v);

        }else if(op == 2)
        {
            print_linked_list(head);
            
        } else if(op==3)
        {
            break;
        }
    }
    
    print_linked_list(head);
    return 0;
}
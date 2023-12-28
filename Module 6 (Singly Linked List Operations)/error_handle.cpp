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

//insert at tail
void insert_at_tail(Node * &head, int v)
{
    Node *newNode = new Node(v);
    if(head==NULL)
    {
        head = newNode;
        cout << endl << "Insert at head: " << endl << endl;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    // last e node ekon tmp
    tmp->next = newNode;
    cout << endl << "Inserted at tail: " << endl << endl;
    
}

// for linked list print
void print_linked_list(Node *head)
{
    cout << endl;
    cout << "Your Linked List: ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl << endl;
    
}

// insert at position
void insert_at_position(Node * head, int pos, int v)
{
    Node *newNode = new Node(v);
    Node *tmp = head;
    for(int i = 1; i<= pos-1; i++)
    {
        tmp = tmp->next;
        if(tmp == NULL)
        {
            cout << endl << "Invalid Index" << endl << endl;
            return;
        }
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    cout << endl << endl << "Inserted at position: " << pos << endl << endl;
}

// insert head
void insert_at_head(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
    cout << endl << "Inserted at head: " << endl << endl;
}

// delete from position
void delete_from_position(Node *head, int pos)
{
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            cout << endl << "Invalid Index" << endl << endl;
            return;
        }
    }
    if (tmp->next == NULL)
    {
        cout << endl<< "Invalid Index" << endl << endl;
        return;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
    cout <<endl << "Deleted Position: " << pos << endl << endl;
}

// delete head
void delete_head (Node * &head)
{
    if(head == NULL)
    {
        cout << endl << "Head is not available" << endl << endl;
        return;
    }
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
    cout <<endl << "Deleted Head" << endl << endl;
}

int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1: insert at tail" << endl; // done 
        cout << "Option 2: Print link list" << endl; // done 
        cout << "Option 3: inset at any position" << endl; // done (problem solve)
        cout << "Option 4: inset at head" << endl; // done 
        cout << "Option 5: Delete from Position" << endl; // done (problem solve)
        cout << "Option 6: Delete head" << endl; // done (problem solve)
        cout << "Option 7: terminated" << endl;
        int op;
        cout << "Take option : ";
        cin >> op;

        if(op==1)
        {
            cout << "Please Enter value: ";
            int v;
            cin >> v;
            insert_at_tail(head, v);

        }
        else if(op == 2)
        {
            print_linked_list(head);
            
        }
        else if(op == 3)
        {
            int pos, v;
            cout << "Enter position: ";
            cin >> pos;
            cout << "Enter Value: ";
            cin >> v;
            if(pos == 0)
            {
                insert_at_head(head, v);
            } else
            {
                insert_at_position(head, pos, v);
            }
            
        }
        else if(op == 4)
        {
            int v;
            cout << "Enter value: ";
            cin >> v;
            insert_at_head(head, v);
        }
        else if(op == 5)
        {
            int pos; 
            cout << "Enter pos: ";
            cin >> pos;
            if(pos == 0)
            {
                delete_head(head);
            }
            else
            {
                delete_from_position(head, pos);
            }
        }
        else if(op == 6)
        {
            delete_head(head);
        }
        else if(op==7)
        {
            break;
        }
    }
    
    print_linked_list(head);
    return 0;
}
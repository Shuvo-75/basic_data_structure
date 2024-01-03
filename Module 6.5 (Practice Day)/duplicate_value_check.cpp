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

// insert at tail
void insert_at_tail(Node * &head, int v)
{
    Node *newNode = new Node (v);
    if(head == NULL)
    {
        head = newNode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    // tmp last e 
    tmp->next = newNode;
    
}

// print linked list
void print_linked_list(Node *head)
{
    cout << endl;
    Node *tmp = head;
    bool flag = false;
    while (tmp != NULL)
    {
        Node * duplicateNode = tmp->next;
        while (duplicateNode != NULL)
        {
            if(duplicateNode->val == tmp->val)
            {
                flag = true;
                break;
            } 
            duplicateNode = duplicateNode->next;
        }
        if(flag == true)
        {
           break;
        }
        tmp = tmp->next;
    }

    if(flag == true)
    {
        cout << "YES";
    } else
    {
        cout << "NO";
    }
    
    cout << endl;
    
}

int main()
{
    int val;
    Node *head = NULL;
    while (true)
    {
        cin >> val;
        if(val==-1)
        {
            break;
        }
        insert_at_tail(head, val);
    }
    print_linked_list(head);
    return 0;
}
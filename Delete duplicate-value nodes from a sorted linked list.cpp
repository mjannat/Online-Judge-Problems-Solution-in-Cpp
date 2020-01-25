#include <bits/stdc++.h>
using namespace std;
class Node
{

public:

    int data;

    Node* next;
};
void removeDuplicates(Node* head)
{

    Node* current = head;

    Node* next_next;

    if (current == NULL)

        return;

    while (current->next != NULL)

    {

        if (current->data == current->next->data)

        {

            /* The sequence of steps is important*/

            next_next = current->next->next;

            free(current->next);

            current->next = next_next;

        }

        else /* This is tricky: only advance if no deletion */

        {

            current = current->next;

        }

    }
}


/* UTILITY FUNCTIONS */
/* Function to insert a node at the beginging of the linked list */

void push(Node** head_ref, int new_data)
{

    /* allocate node */

    Node* new_node = new Node();



    /* put in the data */

    new_node->data = new_data;



    /* link the old list off the new node */

    new_node->next = (*head_ref);



    /* move the head to point to the new node */

    (*head_ref) = new_node;
}


/* Function to print nodes in a given linked list */

void printList(Node *node)
{

    while (node!=NULL)

    {

        cout<<" "<<node->data;

        node = node->next;

    }
}
int main()
{
    freopen("input.txt","r",stdin);
    int test;
    cin >> test;
    while(test--) {
    Node* head = NULL;
    int val,n;
    cin >> n;
    for(int i = 0;i < n ; i++){
    cin >> val;
        push(&head, val);

    }

    removeDuplicates(head);

    printList(head);

}

    return 0;
}

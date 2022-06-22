#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node *head;

// BeginInsert
void beginInsert()
{
    int choice;
    while (choice)
    {
        struct node *new_node = (struct node *)malloc(sizeof(struct node));
        // data
        cout << "Enter data : ";
        cin >> new_node->data;
        new_node->next = head;
        head = new_node;
        cout << "You want to continue (0/1) : ";
        cin >> choice;
    }
}

void display()
{
    struct node *ptr;
    ptr = head;
    if (ptr == NULL)
    {
        cout << "Empty data !";
    }
    else
    {
        while (ptr->next != NULL)
        {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
    }
}

int main()
{
    beginInsert();
    display();
    return 0;
}
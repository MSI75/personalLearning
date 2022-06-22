#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node *head, *new_node;

void beginInsert()
{
    int choice;
    while (choice)
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        cout << "Enter data : ";
        cin >> new_node->data;
        new_node->next = head;
        head = new_node;
        cout << "You want to continue (1/0) ? ";
        cin >> choice;
    }
}

void beginDelete()
{
    new_node = head;
    head = head->next;
    free(new_node);
}

void display()
{
    new_node = head;
    if (new_node == NULL)
    {
        cout << "Nothing Value : ";
    }
    else
    {
        while (new_node != NULL)
        {
            cout << new_node->data << " ";
            new_node = new_node->next;
        }
    }
}

int main()
{
    beginInsert();
    beginDelete();
    display();
    return 0;
}
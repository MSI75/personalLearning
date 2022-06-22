#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *head, *temp;

void lastInsert()
{
    int choice;
    while (choice)
    {
        struct node *new_node = (struct node *)malloc(sizeof(struct node));
        cout << "Enter the data : ";
        cin >> new_node->data;
        new_node->next = head;
        temp = head;
        if (temp == NULL)
        {
            temp = head = new_node;
        }
        else
        {
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = new_node;
            new_node->next = NULL;
        }
        cout << "You want to continue (1/0) ? ";
        cin >> choice;
    }
}

void display()
{
    struct node *ptr;
    ptr = head;
    if (ptr == NULL)
    {
        cout << "Data empty : ";
    }
    else
    {
        while (ptr != NULL)
        {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
    }
}

int main()
{
    lastInsert();
    display();
    return 0;
}
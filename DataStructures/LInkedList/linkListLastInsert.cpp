#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *head;

void lastInsert(int new_data);
void display();

int main()
{
    lastInsert(25);
    lastInsert(24);
    lastInsert(23);
    lastInsert(22);
    display();
}

void lastInsert(int new_data)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL)
    {
        cout << "OverFlow" << endl;
    }
    else
    {
        new_node->data = new_data;
        if (head == NULL)
        {
            new_node->next = NULL;
            head = new_node;
        }
        else
        {
            struct node *temp;
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = new_node;
            new_node->next = NULL;
        }
    }
}

void display()
{
    struct node *ptr;
    ptr = head;
    if (ptr == NULL)
    {
        cout << "Nothing Value" << endl;
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

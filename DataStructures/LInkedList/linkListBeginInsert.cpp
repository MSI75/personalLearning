
#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node *head;

void beginInsert(int new_data);
void display();

int main()
{
    beginInsert(25);
    beginInsert(26);
    beginInsert(25);
    beginInsert(22);
    display();
}

void beginInsert(int new_data)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    // cout << new_node << endl;
    if (new_node == NULL)
    {
        cout << "OverFlow" << endl;
    }
    else
    {
        new_node->data = new_data;
        new_node->next = head;
        head = new_node;
        // cout << head << endl;
    }
}

void display()
{
    struct node *ptr;
    ptr = head;
    // cout << ptr << endl;
    // cout << head << endl;
    if (ptr == NULL)
    {
        cout << "Nothing to print" << endl;
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
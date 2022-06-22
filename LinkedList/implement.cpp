#include <iostream>
using namespace std;

main()
{
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *head, *new_node, *temp;
    head = 0;
    int choice, count = 0;
    while (choice)
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        cout << "Enter data : ";
        cin >> new_node->data;
        new_node->next = 0;
        if (head == 0)
        {
            head = temp = new_node;
        }
        else
        {
            temp->next = new_node;
            temp = new_node;
        }
        cout << "You want to continue (0,1)? : ";
        scanf("%d", &choice);
    }

    temp = head;
    while (temp != 0)
    {
        cout << "Printing the value : ";
        cout << temp->data << endl;
        temp = temp->next;
        count++;
    }

    return 0;
}

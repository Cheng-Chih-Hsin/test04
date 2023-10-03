#include <iostream>
using namespace std;

typedef struct listnode
{
    int data;
    struct listnode* next;
}NODE;

void ListTraverse(listnode* head)
{
    listnode* p = head;
    p = p->next;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int main()
{
    NODE* listA;
    listA = new NODE;
    listA->data = 20;
    listA->next = NULL;
    cout << "";

    NODE* listB;
    listB = new NODE;
    listB->data = 0;
    listB->next = new NODE;
    listB->next->data = 10;
    listB->next->next = new NODE;
    listB->next->next->data = 20;
    listB->next->next->next = new NODE;
    listB->next->next->next->data = 30;
    listB->next->next->next->next = new NODE;
    listB->next->next->next->next->data = 40;
    listB->next->next->next->next->next = NULL;

    ListTraverse(listB);
}
//
//  main.cpp
//  Queue_list_implementation
//
//  Created by Devang Papinwar on 19/02/21.
//

#include <iostream>
using namespace std;

int size = 0;
int fron = -1;
int rea = -1;
struct Person
{
    int data;
    Person* next;
};

struct Person* front = NULL;
struct Person* rear = NULL;

void display()
{
    cout << " Queue : ";
    struct Person* temp = front;
    while (temp != NULL)
    {
          cout << " Node : " << temp->data << " -- ";
          temp = temp->next;
    }
}

void enqueue()
{
    int data;
    struct Person* new_node = (struct Person*) malloc(sizeof(struct Person));
    cout << " REAR : " << rea << " FRONT : " << fron;
    cout << " Enter the Data : ";
    cin >> data;
    if( rear == NULL )
    {
        rear = new_node;
        rear->next = NULL;
        rear->data = data;
        front = rear;
        rea++;
        fron = 0;
    }
    else{
        struct Person* node=(struct Person*)malloc(sizeof(struct Person));
        rear->next = node;
        node->data = data;
        node->next = NULL;
        rear = node;
        rea++;
        fron = 0;
    }
}

void dequeue()
{
    if( fron == rea )
    {
        cout << " Queue is Empty";
    }
    else
    {
        struct Person* node = front;
        if( node->next != NULL )
        {
            node = node->next;
            front = node;
        }
        fron++;
        cout << " REAR : " << rea << " FRONT : " << fron;
    }
}

int main(int argc, const char * argv[])
{

    enqueue();
    enqueue();
    enqueue();
    enqueue();
    display();
    dequeue();
    dequeue();
    display();
    dequeue();
    display();
}

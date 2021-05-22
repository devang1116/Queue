//
//  main.cpp
//  queue_array_implementation
//
//  Created by Devang Papinwar on 19/02/21.
//

#include <iostream>
#define SIZE 10
using namespace std;

int size=0;

struct Person
{
    int stack[SIZE];
    int front = -1;
    int rear = -1;
};

void display(Person* node)
{
    cout << " Queue : " << endl ;
    for(int i = node->front ; i <= node->rear ; i++)
    {
        cout << " Data : " << node->stack[i] << " -- " ;
    }
}

void enqueue(Person* node)
{
    int data;
    cout << " REAR : " << node->rear << " FRONT : " << node->front;
    cout << " Enter the Data : ";
    if(node->front == 0 && node->rear == 19)
    {
        cout << " Queue Full ";
    }
    cin >> data;
    if(node->front == -1)
        node->front = 0;
    node->rear++;
    node->stack[node->rear] = data;
}

void dequeue(Person* node)
{
    node->front = NULL;
    node->front++;
    cout << " REAR : " << node->rear << " FRONT : " << node->front;
}

int main(int argc, const char * argv[])
{
    struct Person* node = (struct Person*) malloc(sizeof(struct Person));
    //enqueue(node);
    //enqueue(node);
    node->front=-1;
    node->rear=-1;
    enqueue(node);
    enqueue(node);
    enqueue(node);
    enqueue(node);
    dequeue(node);
    display(node);
}

#include <iostream>
using namespace std;

class QNode
{
    public:
        int key;
        QNode* next;
};

class Queue
{
    public:
        QNode *front, *rear;
};

QNode* newNode(int k)
{
    QNode* temp = new QNode();
    temp -> key = k;
    temp -> next = NULL;
    return temp;
}

Queue* createQueue()
{
    Queue* q = new Queue();
    q -> front = q -> rear = NULL;
    return q;
};

void enQueue(Queue* q, int k)
{
    QNode* temp = newNode(k);
    if (q -> rear == NULL)
    {
        q -> front = q -> rear = temp;
        return;
    }
    q -> rear -> next = temp;
    q -> rear = temp;
}

QNode* deQueue(Queue* q)
{
    if (q -> front == NULL)
    {
        return NULL;
    }
    QNode* temp = q -> front;
    delete(temp);
    q -> front = q -> front -> next;
    if (q -> front == NULL)
    {
        q -> rear = NULL;
    }
    return temp;
}

int main()
{
    Queue* q = createQueue();
    enQueue(q, 10);
    enQueue(q, 20);
    deQueue(q);
    deQueue(q);
    enQueue(q, 30);
    enQueue(q, 40);
    enQueue(q, 50);
    QNode* n = deQueue(q);
    if (n != NULL)
    {
        cout << "Dequeued item is " << n -> key << endl;
    }
    return 0;
}



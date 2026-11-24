#include "myQueue.h"

#include <iostream>

using namespace std;
// void enQueue(int x) {
//   Node *node = new Node(x);
//   myQueue::rear = node;
// };
void myQueue::enQueue(int x) {
  Node* node = new Node(x);

  if (front == nullptr) {
    front = rear = node;
  } else {
    rear->next = node;
    rear = node;
  }
}
int myQueue::deQueue() {
  if (rear == nullptr) {
    cout << "Queue Underflow" << endl;
    return -1;
  }

  Node* temp = front;
  int removedData = temp->data;
  front = front->next;

  if (front == nullptr) rear = nullptr;
  delete temp;

  return removedData;
};
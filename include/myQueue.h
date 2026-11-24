#ifndef myQueue_H
#define myQueue_H

#include "Node.h"
class myQueue {
 public:
  // LinkedList top;
  Node *front;
  Node *rear;
  myQueue() { front = rear = nullptr; }
  void enQueue(int x);
  int deQueue();
};
#endif
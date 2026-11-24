#ifndef myStack_H
#define myStack_H

#include "LinkedList.h"
class myStack {
 public:
  LinkedList top;
  int count;

  myStack() {}

  void push(int x);
  int pop();
};
#endif
#ifndef ARRAY_STACK_H
#define ARRAY_STACK_H

class arrayStack {
 public:
  int *items;
  int size, top;
  arrayStack(int x) {
    items = new int[x];
    top = -1;
  };

  void push(int x);
  int pop();
  ;
};

#endif
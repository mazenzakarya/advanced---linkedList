#include "arrayStack.h"

#include <iostream>
using namespace std;

void arrayStack::push(int x) {
  if (top == size - 1) {
    // --top;
    cout << "array is full" << endl;
    return;
  }
  ++top;
  items[top] = x;
};

int arrayStack::pop() {
  if (top == -1) {
    cout << "array is empty" << endl;
    return 0;
  }
  int data = items[top];
  --top;
  return data;
}
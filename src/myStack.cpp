#include "myStack.h"

#include <iostream>

#include "LinkedList.h"

using namespace std;

// push operation
void myStack::push(int x) {
  //   Node* temp = new Node(x);
  top.insertAtBegining(x);
}

// pop operation
int myStack::pop() { top.removeFromBeginig(); }

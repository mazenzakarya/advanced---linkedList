#include "arrayQueue.h"

#include <iostream>

using namespace std;

void arrayQueue::enQueue(int x) {
  if (counter == size) {
    // counter--;
    cout << "array is full" << endl;

    return;
  }
  arr[counter] = x;
  counter++;
};

int arrayQueue::deQueue() {
  counter--;
  if (counter == -1) {
    cout << "array is already empty" << endl;
    return -1;
  }
  return arr[counter];
}
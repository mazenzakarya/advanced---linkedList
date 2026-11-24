#include <iostream>
using namespace std;
#include "LinkedList.h"
#include "arrayQueue.h"
#include "arrayStack.h"
#include "myQueue.h"
#include "myStack.h"

int main() {
  LinkedList li;
  li.head = nullptr;
  li.count = 0;

  myStack st;
  arrayQueue aq(3);
  arrayStack as(3);
  myQueue qu;

  // // calc factorial using queue
  // arrayStack factorial(5);
  // for (int i = 5; i > 0; i--) {
  //   factorial.push(i);
  // }
  // int fac = 1;
  // while (factorial.top > -1) {
  //   fac *= factorial.pop();
  // }

  // cout << fac << endl;

  li.insertAtEnd(10);
  li.insertAtEnd(9);
  li.insertAtEnd(30);
  li.insertAtEnd(8);

  //   li.insertAfter(11, 20);

  cout << "count is";
  cout << li.getcount() << endl;

  //   int value = li.GetDataByIndex(1);
  //   cout << "==========================" << endl;
  //   cout << value << endl;

  // st.push(1);
  // st.push(2);
  // st.push(3);
  // st.push(4);
  // li.insertAtBegining(1);

  // qu.enQueue(1);
  // qu.enQueue(2);
  // qu.enQueue(3);
  // qu.enQueue(4);

  // cout << qu.deQueue() << endl;

  // aq.enQueue(1);
  // aq.enQueue(2);
  // aq.enQueue(3);
  // aq.enQueue(4);

  // cout << "Dequeue: " << aq.deQueue() << endl;

  // qu.deQueue();
  // cout << "Popped: " << st.pop() << endl;
  // li.display();
  li.selectioSort();

  cout << "After Sorting:" << endl;
  li.display();
  cout << "search for" << li.binarySearch(10) << endl;
  return 0;
}
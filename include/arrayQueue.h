#ifndef ARRAY_QUEUE_H
#define ARRAY_QUEUE_H
class arrayQueue {
 public:
  int counter, size;
  int* arr;
  void enQueue(int x);
  int deQueue();
  arrayQueue(int x) {
    size = x;
    counter = 0;
    arr = new int[size];
  };
  ~arrayQueue() { delete[] arr; }
};
#endif
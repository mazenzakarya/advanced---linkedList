#include "LinkedList.h"

#include <iostream>
using namespace std;

LinkedList::LinkedList() {}

void LinkedList::insertAtEnd(int value) {
  Node* newNode = new Node(value);
  if (head == nullptr) {
    head = newNode;
  } else {
    Node* current = head;
    while (current->next != nullptr) {
      current = current->next;
    }
    current->next = newNode;
  }
  this->count++;
}

void LinkedList::insertAfter(int value, int afterValue) {
  Node* newNode = new Node(value);
  Node* current = head;
  while (current != nullptr && current->data != afterValue) {
    current = current->next;
  }
  if (current != nullptr) {
    newNode->next = current->next;
    current->next = newNode;
  }
  this->count++;
}

void LinkedList::insertBefore(int value, int beforeValue) {
  Node* newNode = new Node(value);
  Node* current = head;
  Node* prev = nullptr;

  while (current != nullptr && current->data != beforeValue) {
    prev = current;
    current = current->next;
  }
  if (current != nullptr) {
    newNode->next = current;
    if (prev == nullptr) {
      head = newNode;
    } else {
      prev->next = newNode;
    }
  }
  this->count++;
}
int LinkedList::getcount() { return this->count; }

void LinkedList::display() {
  Node* current = head;
  while (current != nullptr) {
    std::cout << current->data << std::endl;
    current = current->next;
  }
}
int LinkedList::GetDataByIndex(int i) {
  Node* current = head;

  int index = 0;

  while (index < i) {
    current = current->next;
    index++;
  }
  return current->data;
}

// for stack => method push
void LinkedList::insertAtBegining(int x) {
  Node* temp = new Node(x);

  temp->next = head;
  head = temp;

  count++;
}

// for stack => method pop
int LinkedList::removeFromBeginig() {
  if (head == NULL) {
    cout << "Stack Underflow" << endl;
    return -1;
  }
  Node* temp = head;
  head = head->next;
  int val = temp->data;

  count--;
  delete temp;
  return val;
}

// sort linkedlist
// bubble sort

void LinkedList::bubbleSort() {
  for (int i = 0; i < count - 1; i++) {
    Node* current = head;

    for (int j = 0; j < count - i - 1; j++) {
      if (current->data > current->next->data) {
        int temp = current->data;
        current->data = current->next->data;
        current->next->data = temp;
      }
      current = current->next;
    }
  }
}

// current = current->next;
void LinkedList::selectioSort() {
  Node* start = head;

  for (int i = 0; i < count - 1; i++) {
    Node* minNode = start;
    Node* current = start->next;

    for (int j = i + 1; j < count; j++) {
      if (current->data < minNode->data) {
        minNode = current;
      }

      current = current->next;
    }

    int temp = start->data;
    start->data = minNode->data;
    minNode->data = temp;

    start = start->next;
  }
}

// binary search
int LinkedList::binarySearch(int target) {
  int low = 0;
  int high = count - 1;

  while (low <= high) {
    int mid = (low + high) / 2;

    Node* current = head;

    for (int i = 0; i < mid; i++) {
      current = current->next;
    }

    if (current->data == target) {
      return mid;
    }

    else if (current->data < target) {
      low = mid + 1;
    }

    else {
      high = mid - 1;
    }
  }

  return -1;
}
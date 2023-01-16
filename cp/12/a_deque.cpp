#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

// Структура, описывающая узел списка

struct Node { 
  string value;
  Node* next;
  Node* prev;
  Node(string _value) : value(_value), next(nullptr), prev(nullptr) {}
};

// Структура, описывающая дек
struct Deque {
  Node* head;  // указатель на первый элемент списка
  Node* tail;  // указатель на последний элемент списка
  Deque() : head(nullptr), tail(nullptr) {}
  void push_front(string value) {  // добавление элемента в начало дека
    Node* node = new Node(value);
    if (head == nullptr) {
      head = node;
      tail = node;
    } else {
      node->next = head;
      head->prev = node;
      head = node;
    }
  }
  void push_back(string value) {  // добавление элемента в конец дека
    Node* node = new Node(value);
    if (head == nullptr) {
      head = node;
      tail = node;
    } else {
      node->prev = tail;
      tail->next = node;
      tail = node;
    }
  }
  void pop_front() {  // удаление элемента из начала дека
    if (head == nullptr) {
      cout << "Дек пуст" << endl;
    } else {
      Node* node = head;
      head = head->next;
      if (head != nullptr) {
        head->prev = nullptr;
      }
      cout << node->value << endl;
      delete node;
    }
  }
  void pop_back() {  // удаление элемента из конца дека
    if (head == nullptr) {
      cout << "Дек пуст" << endl;
    } else {
      Node* node = tail;
      tail = tail->prev;
      if (tail != nullptr) {
        tail->next = nullptr;
      }
      cout << node->value << endl;
      delete node;
    }
  }
  string front() {  // возврат первого элемента дека
    if (head == nullptr) {
      cout << "Дек пуст" << endl;
      return "";
    } else {
      return head->value;
    }
  }
  string back() {  // возврат последнего элемента дека
    if (head == nullptr) {
      cout << "Дек пуст" << endl;
      return "";
    } else {
      return tail->value;
    }
  }
};

int main() {
  int n = -1;
  Deque deque;
  while (n != 0) {
    cout << "0 - выход" << endl;
    cout << "1 - добавить элемент в начало" << endl;
    cout << "2 - добавить элемент в конец" << endl;
    cout << "3 - удалить элемент из начала" << endl;
    cout << "4 - удалить элемент из конца" << endl;
    cout << "5 - вывести первый элемент" << endl;
    cout << "6 - вывести последний элемент" << endl;
    cout << ">>> ";
    cin >> n;
    if (n == 1) {
      string value;
      cin >> value;
      deque.push_front(value);
    }
    if (n == 2) {
      string value;
      cin >> value;
      deque.push_back(value);
    }
    if (n == 3) {
      deque.pop_front();
    }
    if (n == 4) {
      deque.pop_back();
    }
    if (n == 5) {
      cout << deque.front() << endl;
    }
    if (n == 6) {
      cout << deque.back() << endl;
    }
  }
  return 0;
}

#include <iostream>

using namespace std;
// структура узла
struct Node {
  string value;
  Node *next;
  Node(string _value) : value(_value), next(nullptr){};  // конструктор
};
// структура очереди
struct Queue {
  Node *head;  // указатель на первый элемент списка
  Node *tail;  // указатель на последний элемент списка
  Queue() : head(nullptr), tail(nullptr){};
  void push(string value) {  // добавление элемента в очередь
    Node *node = new Node(value);
    if (head == nullptr) {
      head = node;
      tail = node;
    } else {
      tail->next = node;
      tail = node;
    }
  }
  void pop() {  // удаление элемента из очереди
    if (head == nullptr) {
      cout << "Очередь пуста" << endl;
    } else {
      Node *node = head;
      head = head->next;
      cout << node->value << endl;
      delete node;
    }
  }
  string top() {  // возвращает верхний элемент очереди
    if (head == nullptr) { 
      cout << "Очередь пуста" << endl;
      return "";
    } else {
      return head->value;
    }
  }
};

int main() {
  Queue queue;
  int n = 5;
  while (n != 0) {
    cout << "0 - выход" << endl;
    cout << "1 - добавить элемент в очередь" << endl;
    cout << "2 - удалить элемент из очереди" << endl;
    cout << "3 - вывести верхний элемент очереди" << endl;
    cout << ">>>  ";
    cin >> n;
    if (n == 1) {
      string s;
      cout << "Введите элемент: ";
      cin >> s;
      queue.push(s);
    }
    if (n == 2) {
      cout << "Удален элемент: ";
      queue.pop();
    }
    if (n == 3) {
      cout << "Верхний элемент очереди: " << queue.top() << endl;
    }
  }
  return 0;
}

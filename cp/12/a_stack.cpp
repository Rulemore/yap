#include <iostream>

using namespace std;
// Структура, описывающая узел списка
struct Node {
  string value;
  Node *next;
  Node(string _value) : value(_value), next(nullptr){};  // конструктор
};
// Структура, описывающая стек
struct Stack {
  Node *head;  // указатель на первый элемент списка
  Node *tail;  // указатель на последний элемент списка
  Stack() : head(nullptr), tail(nullptr){};  // конструктор
  void push(string value) {  // добавление элемента в стек
    Node *node = new Node(value);
    if (head == nullptr) {
      head = node;
      tail = node;
    } else {
      node->next = head;
      head = node;
    }
  }
  void pop() {  // удаление элемента из стека
    if (head == nullptr) {
      cout << "Стек пуст" << endl;
    } else {
      Node *node = head;
      head = head->next;
      cout << node->value << endl;
      delete node;
    }
  }
  string top() {  // возврат верхнего элемента стека
    if (head == nullptr) {
      cout << "Стек пуст" << endl;
      return "";
    } else {
      return head->value;
    }
  }
};

int main() {
  int n = 4;
  Stack stack;
  while (n != 0) {
    cout << "0 - выход" << endl;
    cout << "1 - добавить элемент в стек" << endl;
    cout << "2 - удалить элемент из стека" << endl;
    cout << "3 - вывести верхний элемент стека" << endl;
    cout << ">>>  ";
    cin >> n;
    if (n == 1) {
      string s;
      cout << "Введите элемент: ";
      cin >> s;
      stack.push(s);
    }
    if (n == 2) {
      cout << "Удален элемент: ";
      stack.pop();
    }
    if (n == 3) {
      cout << "Верхний элемент: " << stack.top() << endl;
    }
  }
  return 0;
}

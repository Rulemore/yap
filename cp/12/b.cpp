#include <iostream>
using namespace std;
// структура для хранения элемента списка
struct Node {
  int value;
  Node* next;
  Node* prev;
};
// структура списка
struct List {
  Node* head;
  Node* tail;
  List() : head(nullptr), tail(nullptr) {} // конструктор
  void push_front(int value) {            // добавление элемента в начало
    if (!checkValue(value)) {
      return;
    }
    Node* node = new Node;
    node->value = value;
    node->next = head;
    node->prev = nullptr;
    if (head != nullptr) {
      head->prev = node;
    }
    head = node;
    if (tail == nullptr) {
      tail = node;
    }
  }
  void push_back(int value) { // добавление элемента в конец
    if (!checkValue(value)) {
      return;
    }
    Node* node = new Node;
    node->value = value;

    node->next = nullptr;
    node->prev = tail;
    if (tail != nullptr) {
      tail->next = node;
    }
    tail = node;
    if (head == nullptr) {
      head = node;
    }
  }
  void print() { // вывод списка
    Node* node = head;
    while (node != nullptr) {
      cout << node->value << " ";
      node = node->next;
    }
    cout << endl;
  }
  void delKey(int key) { // удаление элемента по ключу
    Node* node = head;
    while (node != nullptr) {
      if (node->value == key) {
        if (node->prev != nullptr) {
          node->prev->next = node->next;
        } else {
          head = node->next;
        }
        if (node->next != nullptr) {
          node->next->prev = node->prev;
        } else {
          tail = node->prev;
        }
        Node* tmp = node;
        node = node->next;
        delete tmp;
      } else {
        node = node->next;
      }
    }
  }
  bool checkValue(int n) { return ((0 <= n) && (n < 100)); } // проверка на
                                                            // корректность
                                                            // введенного числа
  bool isSorted() { // проверка на упорядоченность
    Node* node = head;
    while (node != nullptr) {
      if (node->next != nullptr && node->value > node->next->value) {
        return false;
      }
      node = node->next;
    }
    return true;
  }
  void sortByLastNumber() { // сортировка по последней цифре
    Node* node = head;
    while (node != nullptr) {
      Node* node2 = node->next;
      while (node2 != nullptr) {
        if (node->value % 10 > node2->value % 10) {
          int tmp = node->value;
          node->value = node2->value;
          node2->value = tmp;
        }
        node2 = node2->next;
      }
      node = node->next;
    }
  }
  void sortByFirstNumber() { // сортировка по первой цифре
    Node* node = head;
    while (node != nullptr) {
      Node* node2 = node->next;
      while (node2 != nullptr) {
        if (node->value / 10 > node2->value / 10) {
          int tmp = node->value;
          node->value = node2->value;
          node2->value = tmp;
        }
        node2 = node2->next;
      }
      node = node->next;
    }
  }
  List addList(List L1) { // сложение списков
    List tmp;
    L1.sortByFirstNumber();
    Node* node = L1.head;
    while (node != nullptr) {
      tmp.push_back(node->value);
      node = node->next;
    }
    node = tmp.head;
    while (node != nullptr) {
      delKey(node->value);
      node = node->next;
    }
    return tmp;
  };
};

int main() {
  List L1;
  List L2;
  L1.push_back(11);
  L1.push_front(2);
  L1.push_back(32);
  L1.push_front(41);
  L1.sortByFirstNumber();
  cout << "L1 : ";
  L1.print();
  L1.delKey(2);
  cout << "L1 :";
  L1.print();
  L2 = L1.addList(L1);
  cout << "L2 :";
  L2.print();
  cout << "L1 :";
  L1.print();
  cout << "L2 упрорядочен по возрастанию?: " << (L2.isSorted() ? "Да" : "Нет")
       << endl;
  return 0;
}

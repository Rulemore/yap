#include <iostream>
using namespace std;
// структура для хранения элемента списка
struct Node {
  int value;
  Node* next;
};
// структура списка
struct List {
  Node* head;
  Node* tail;
  List() : head(nullptr), tail(nullptr) {}  // конструктор
  void push_front(int value) {  // добавление элемента в начало списка
    if (!checkValue(value)) {
      return;
    };
    Node* node = new Node;
    node->value = value;
    node->next = head;
    head = node;
    if (tail == nullptr) {
      tail = node;
    }
  }
  void push_back(int value) {  // добавление элемента в конец списка
    if (!checkValue(value)) {
      return;
    };
    Node* node = new Node;
    node->value = value;
    node->next = nullptr;
    if (tail != nullptr) {
      tail->next = node;
    }
    tail = node;
    if (head == nullptr) {
      head = node;
    }
  }
  void print() {  // вывод списка на экран
    Node* node = head;
    while (node != nullptr) {
      cout << node->value << " ";
      node = node->next;
    }
    cout << endl;
  }
  void delKey(int key) {  // удаление элемента по значению
    Node* node = head;
    Node* prev = nullptr;
    while (node != nullptr) {
      if (node->value == key) {
        if (prev == nullptr) {
          head = node->next;
        } else {
          prev->next = node->next;
        }
        if (node == tail) {
          tail = prev;
        }
        delete node;
        node = prev;
      }
      prev = node;
      if (node != nullptr) {
        node = node->next;
      }
    }
  }
  void sortByFirstNumber() {  // сортировка по первой цифре
    Node* node = head;
    Node* prev = nullptr;
    while (node != nullptr) {
      Node* node2 = node->next;
      Node* prev2 = node;
      while (node2 != nullptr) {
        if (node->value > node2->value) {
          if (prev == nullptr) {
            head = node2;
          } else {
            prev->next = node2;
          }
          if (prev2 == nullptr) {
            head = node;
          } else {
            prev2->next = node;
          }
          Node* tmp = node->next;
          node->next = node2->next;
          node2->next = tmp;
          tmp = node;
          node = node2;
          node2 = tmp;
        }
        prev2 = node2;
        node2 = node2->next;
      }
      prev = node;
      node = node->next;
    }
  }
  void sortByLastNumber() {  // сортировка по последней цифре
    Node* node = head;
    Node* prev = nullptr;
    while (node != nullptr) {
      Node* node2 = node->next;
      Node* prev2 = node;
      while (node2 != nullptr) {
        if (node->value % 10 > node2->value % 10) {
          if (prev == nullptr) {
            head = node2;
          } else {
            prev->next = node2;
          }
          if (prev2 == nullptr) {
            head = node;
          } else {
            prev2->next = node;
          }
          Node* tmp = node->next;
          node->next = node2->next;
          node2->next = tmp;
          tmp = node;
          node = node2;
          node2 = tmp;
        }
        prev2 = node2;
        node2 = node2->next;
      }
      prev = node;
      node = node->next;
    }
  }
  List addList(List L) {  // сложение списков
    List L2;
    Node* node = head;
    Node* node2 = L.head;
    while (node != nullptr && node2 != nullptr) {
      L2.push_back(node->value + node2->value);
      node = node->next;
      node2 = node2->next;
    }
    return L2;
  }
  bool isSorted() {  // проверка на отсортированность
    Node* node = head;
    while (node != nullptr && node->next != nullptr) {
      if (node->value > node->next->value) {
        return false;
      }
      node = node->next;
    }
    return true;
  }
  bool checkValue(int value) { return (value > 10 && value < 100); }
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

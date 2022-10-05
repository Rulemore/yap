#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
  cout << "Программа для вывода дня недели по его номеру" << endl;
  cout << "---------------------------------------------" << endl;
  int day;
  cout << "Введите номер дня недели (целое число от 1 до 7)" << endl;
  cin >> day;
  switch (day) {
    case 1:
      cout << "Понедельник" << endl;
      break;
    case 2:
      cout << "Вторник" << endl;
      break;
    case 3:
      cout << "Среда" << endl;
      break;
    case 4:
      cout << "Четверг" << endl;
      break;
    case 5:
      cout << "Пятница" << endl;
      break;
    case 6:
      cout << "Суббота" << endl;
      break;
    case 7:
      cout << "Воскресенье" << endl;
      break;
    default:
      cout << "Ошибка при вводе!" << endl;
      break;
  }
  return 0;
}
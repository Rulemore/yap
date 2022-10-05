#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main() {
  cout << "Угадай число!" << endl;
  cout << "-------------" << endl;
  int n, rn;
  cout << RAND_MAX << endl;
  srand(time(NULL));
  do {
    rn = rand() % 10 + 1;
    cout << "Введите натуральное число от 1 до 10 (0 - выход) > ";
    cin >> n;
    if (n == rn) {
      cout << "Вы угадали!" << endl;
    } else {
      if (n != 0) {
        cout << "Упс... Попробуйте еще раз!" << endl;
      }
    }
  } while (n != 0);
  return 0;
}
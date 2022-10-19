#include <ctime>
#include <iostream>
using namespace std;
int main() {
  unsigned int n;
  int maxX = 0;
  int maxY = 0;
  int maxA = 0;
  srand(time(NULL));
  cout << "Введите порядок квадратной матрицы n > ";
  cin >> n;
  cout << "----------------------" << endl;
  auto **arr = new int *[n];
  cout << "Исходная матрица" << endl;
  for (int i = 0; i < n; i++) {
    arr[i] = new int[n];
    for (int j = 0; j < n; j++) {
      arr[i][j] = rand() % 2000 - 1000;
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  for (int i = 0; i < n; i++) {
    if (arr[i][i] > maxA) {
      maxA = arr[i][i];
      maxX = maxY = i;
    }
    if (arr[n - i - 1][i] > maxA) {
      maxA = arr[n - i - 1][i];
      maxY = i;
      maxX = n - i - 1;
    }
  }
  swap(arr[maxX][maxY], arr[(n - 1) / 2][(n - 1) / 2]);
  cout << "----------------------" << endl;
  cout << "Отсортированная матрица" << endl;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << arr[i][j] << ' ';
    }
    cout << endl;
  }
  for (int i = 0; i < n; i++) delete[] arr[i];
  delete[] arr;
  return 0;
}
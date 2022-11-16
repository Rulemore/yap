#include <ctime>
#include <iostream>

using namespace std;
void sorter(int *s_arr, int f, int l);
int n, *arr;

int main() {
  srand(time(NULL));
  cout << "Введите размер массива: ";
  cin >> n;
  arr = new int[n];
  cout << "Массив: ";
  for (int i = 0; i < n; i++) {
    arr[i] = rand() % 1000;
    cout << arr[i] << " ";
  }
  cout << endl;
  sorter(arr, 0, n - 1);
  cout << "Отсортированный массив: ";
  for (int i = 0; i < n; ++i) {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}
//Сортировка алгоритмом Хоара
void sorter(int *s_arr, int f, int l) { 
  int i = f, j = l, m = s_arr[(f + l) / 2];
  do {
    while (s_arr[i] < m) {
      i++;
    }
    while (s_arr[j] > m) {
      j--;
    }
    if (i <= j) {
      if (s_arr[i] > s_arr[j]) {
        swap(s_arr[i], s_arr[j]);
      }
      i++;
      j--;
    }
  } while (i <= j);

  if (i < l) {
    sorter(s_arr, i, l);
  }
  if (f < j) {
    sorter(s_arr, f, j);
  }
}

#include <algorithm>
#include <iostream>

using namespace std;

const int SIZE = 20;

struct Airport {
  char flightNumber[SIZE];
  char departureName[SIZE];
  char arrivalName[SIZE];
  char aircraftType[SIZE];
  unsigned int numberOfSeats;
};

int main() {
  unsigned int flightsN = 4;

  auto* flights = (Airport*)malloc(sizeof(Airport) * flightsN);

  flights[0] = Airport{
      "SU1042", "SVO", "OGZ", "A320", 180,
  };
  flights[1] = Airport{
      "FV6337", "SVO", "ARH", "SSJ100-95", 98,
  };
  flights[2] = Airport{
      "SU1200", "SVO", "PEE", "A320", 180,
  };
  flights[3] = Airport{
      "SU1830", "SVO", "AYT", "A320-200", 170,
  };

  unsigned short int command = 3;
  cout << "-----Рейсовый менеджер------" << endl;
  cout << "----------------------------" << endl;
  cout << "-   Доступные команды:     -" << endl;
  cout << "-                          -" << endl;
  cout << "-  0  выход                -" << endl;
  cout << "-  1  ввести новый элемент -" << endl;
  cout << "-  2  сортировать          -" << endl;
  cout << "-                          -" << endl;
  cout << "----------------------------" << endl;
  while (command != 0) {
    cout << endl << ">>> Введите номер команды: ";
    cin >> command;
    switch (command) {
      case 0:
        break;
      case 1:
        flights = (Airport*)realloc(flights, (flightsN + 1) * sizeof(Airport));
        cout << "----------------------------" << endl;
        cout << "----Ввод нового элемента----" << endl;
        cout << "Номер рейса: ";
        cin >> flights[flightsN].flightNumber;
        cout << "Точка отправления: ";
        cin >> flights[flightsN].departureName;
        cout << "Точка прибытия: ";
        cin >> flights[flightsN].arrivalName;
        cout << "Тип самолёта: ";
        cin >> flights[flightsN].aircraftType;
        cout << "Количество мест: ";
        cin >> flights[flightsN].numberOfSeats;
        cout << "----------------------------" << endl;
        flightsN++;
        break;
      case 2:
        cout << "-Сортировка по типу самолета-" << endl;
        char tempAircraftType[SIZE];
        cin >> tempAircraftType;
        for (int i = 0; i < flightsN; i++) {
          cout << flights[i].flightNumber << endl;
          cout << flights[i].departureName << endl;
          cout << flights[i].arrivalName << endl;
          cout << flights[i].aircraftType << endl;
          cout << flights[i].numberOfSeats << endl;
          cout << "------------------------------" << endl;
        }
        break;
      default:
        cout << "Нет такой команды" << endl;
        break;
    }
  }
  return 0;
}
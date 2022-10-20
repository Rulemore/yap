#include <algorithm>
#include <cstring>
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
      "FV6337", "SVO", "ARH", "SSJ100", 98,
  };
  flights[2] = Airport{
      "SU1200", "SVO", "PEE", "A320", 180,
  };
  flights[3] = Airport{
      "SU1830", "SVO", "AYT", "A320", 170,
  };

  unsigned short int command = 3;
  cout << "----------------------------" << endl;
  cout << "-   Доступные команды:     -" << endl;
  cout << "-                          -" << endl;
  cout << "-  0  выход                -" << endl;
  cout << "-  1  ввести новый элемент -" << endl;
  cout << "-  2  сортировать          -" << endl;
  cout << "-                          -" << endl;
  cout << "----------------------------" << endl;
  while (command != 0) {
    cout << endl << "Введите номер команды: ";
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
      case 2: {
        cout << "-Сортировка по типу самолета-" << endl;
        cout << "Тип самолёта: ";
        char tmpAircraftType[SIZE];
        cin >> tmpAircraftType;
        cout << "----------------------------" << endl;
        int tmpFlightsN = 1;
        auto* tmpFlights = (Airport*)malloc((tmpFlightsN) * sizeof(Airport));
        for (int i = 0; i < flightsN; i++) {
          if (strcmp(flights[i].aircraftType, tmpAircraftType) == 0) {
            tmpFlights = (Airport*)realloc(tmpFlights,
                                           (tmpFlightsN + 1) * sizeof(Airport));
            tmpFlights[tmpFlightsN - 1] = flights[i];
            tmpFlightsN++;
          }
        }
        int k;
        for (int i = 0; i < tmpFlightsN-1; i++) {
          k = i;
          for (int j = i; j < tmpFlightsN-1; j++) {
            if (strcmp(tmpFlights[i].arrivalName, tmpFlights[j].arrivalName) >
                0) {
              k = j;
            }
          }
          auto tmp = tmpFlights[i];
          tmpFlights[i] = tmpFlights[k];
          tmpFlights[k] = tmp;
        }
        for (int i = 0; i < tmpFlightsN-1; i++) {
          cout << tmpFlights[i].flightNumber << endl;
          cout << tmpFlights[i].departureName << endl;
          cout << tmpFlights[i].arrivalName << endl;
          cout << tmpFlights[i].aircraftType << endl;
          cout << tmpFlights[i].numberOfSeats << endl;
          cout << "------------------------------" << endl;
        }

        delete[] tmpFlights;
        break;
      }
      default:
        cout << "Нет такой команды" << endl;
        break;
    }
  }
  delete[] flights;
  return 0;
}
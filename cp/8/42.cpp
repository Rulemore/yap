#include <iostream>
#include <string>
using namespace std;
// класс Money
//  хранит деньги в рублях и копейках
class Money {
  int rub5000;
  int rub1000;
  int rub500;
  int rub100;
  int rub50;
  int rub10;
  int rub5;
  int rub2;
  int rub1;
  int kop50;
  int kop10;
  int kop5;
  int kop1;

 public:
  // инициализация
  void init(int rub, int kop) {
    this->rub5000 = rub / 5000;
    rub %= 5000;
    this->rub1000 = rub / 1000;
    rub %= 1000;
    this->rub500 = rub / 500;
    rub %= 500;
    this->rub100 = rub / 100;
    rub %= 100;
    this->rub50 = rub / 50;
    rub %= 50;
    this->rub10 = rub / 10;
    rub %= 10;
    this->rub5 = rub / 5;
    rub %= 5;
    this->rub2 = rub / 2;
    rub %= 2;
    this->rub1 = rub / 1;
    rub %= 1;
    this->kop50 = kop / 50;
    kop %= 50;
    this->kop10 = kop / 10;
    kop %= 10;
    this->kop5 = kop / 5;
    kop %= 5;
    this->kop1 = kop / 1;
    kop %= 1;
  }
  string toString() {
    string str;
    str = to_string(getRub()) + "." + to_string(getKop());
    return str;
  }
  // вывод
  void display() { cout << toString(); }
  // получение суммы в рублях
  int getRub() {
    return rub5000 * 5000 + rub1000 * 1000 + rub500 * 500 + rub100 * 100 +
           rub50 * 50 + rub10 * 10 + rub5 * 5 + rub1 * 1;
  }
  // получение суммы в копейках
  int getKop() { return kop50 * 50 + kop10 * 10 + kop5 * 5 + kop1 * 1; }
  // ввод
  void read() {
    cout << "Введите сумму в рублях и копейках: " << endl;
    int rub, kop;
    cin >> rub >> kop;
    init(rub, kop);
  }
  // сложение
  void add(Money m) {
    int rub = getRub() + m.getRub();
    int kop = getKop() + m.getKop();
    init(rub, kop);
  }
  // вычитание
  void sub(Money m) {
    int rub = getRub() - m.getRub();
    int kop = getKop() - m.getKop();
    init(rub, kop);
  }
  // умножение
  void mul(int n) {
    int rub = getRub() * n;
    int kop = getKop() * n;
    init(rub, kop);
  }
  // деление
  void div(int n) {
    int rub = getRub() / n;
    int kop = getKop() / n;
    init(rub, kop);
  }
  // сравнение
  bool eq(Money m) { return getRub() == m.getRub() && getKop() == m.getKop(); }
};

// класс счет
// Фамилия, номер, процент, баланс
class Account {
  Money balance;
  string name;
  int number;
  double percent;

 public:
  // инициализация
  void init(string name, int number, double percent) {
    this->name = name;
    this->number = number;
    this->percent = percent;
  }
  // вывод
  void display() {
    cout << "Фамилия: " << name << endl;
    cout << "Номер: " << number << endl;
    cout << "Процент: " << percent << endl;
    cout << "Баланс: " << balance.toString() << endl;
  }
  // ввод
  void read() {
    cout << "Введите фамилию: " << endl;
    cin >> name;
    cout << "Введите номер: " << endl;
    cin >> number;
    cout << "Введите процент: " << endl;
    cin >> percent;
    cout << "Введите баланс: " << endl;
    balance.read();
  }
  // преобразование в строку
  string toString() {
    string str;
    str = "Фамилия: " + name + " Номер: " + to_string(number) +
          " Процент: " + to_string(percent) + " Баланс: " + balance.toString();
    return str;
  }
  // изменение имени
  void changeOwner(string name) { this->name = name; }
  // начисление процентов
  void addPercent() { balance.mul((percent + 1) / 100); }
  // пополнение счета
  void add() {
    cout << "Попополнение счета на сумму:";
    Money money;
    money.read();
    balance.add(money);
  }
  // снятие со счета
  void sub() {
    cout << "Снятие со счета на сумму:";
    Money money;
    money.read();
    balance.sub(money);
  }
  // конвертация в доллары
  void convetToDollars() { balance.div(60); }
  // конвертация в евро
  void convetToEuro() { balance.div(70); }
};

int main() {
  Account account;
  account.read();
  account.display();
  return 0;
}
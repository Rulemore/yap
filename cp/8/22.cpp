#include <cmath>
#include <iostream>

using namespace std;
//

void read(struct struct_vector3D &vector);
void display(struct struct_vector3D &vector);
void init(struct struct_vector3D &vector, float x, float y, float z);
string toString(struct struct_vector3D &vector);
struct_vector3D add(struct struct_vector3D &vector1,
                    struct struct_vector3D &vector2);
struct_vector3D sub(struct struct_vector3D &vector1,
                    struct struct_vector3D &vector2);
float mul(struct struct_vector3D &vector1, struct struct_vector3D &vector2);
float scalar(struct struct_vector3D &vector, float k);
bool comparsion(struct struct_vector3D &vector1,
                struct struct_vector3D &vector2);
float length(struct struct_vector3D &vector);

/*
Структура struct_vector3D
x, y, z - координаты вектора
*/
struct struct_vector3D {
  float x;
  float y;
  float z;
};

// инициализация вектора
void init(struct struct_vector3D &vector, float x, float y, float z) {
  vector.x = x;
  vector.y = y;
  vector.z = z;
}

// ввод вектора
void read(struct struct_vector3D &vector) {
  cout << "Введите координату x: ";
  cin >> vector.x;
  cout << "Введите координату y: ";
  cin >> vector.y;
  cout << "Введите координату z: ";
  cin >> vector.z;
}
// вывод вектора
void display(struct struct_vector3D &vector) {
  cout << "x " << vector.x << endl;
  cout << "y " << vector.y << endl;
  cout << "z " << vector.z << endl;
}

// преобразование в строку
string toString(struct struct_vector3D &vector) {
  string str;
  str += "x= " + to_string(vector.x) + " ";
  str += "y= " + to_string(vector.y) + " ";
  str += "z= " + to_string(vector.z);
  return str;
}

// сложение векторов
struct_vector3D add(struct struct_vector3D &vector1,
                    struct struct_vector3D &vector2) {  // сложение
  struct_vector3D vector;
  vector.x = vector1.x + vector2.x;
  vector.y = vector1.y + vector2.y;
  vector.z = vector1.z + vector2.z;
  return vector;
}

// вычитание векторов
struct_vector3D sub(struct struct_vector3D &vector1,
                    struct struct_vector3D &vector2) {
  struct_vector3D vector;
  vector.x = vector1.x - vector2.x;
  vector.y = vector1.y - vector2.y;
  vector.z = vector1.z - vector2.z;
  return vector;
}

// скалярное произведение векторов
float mul(struct struct_vector3D &vector1, struct struct_vector3D &vector2) {
  return vector1.x * vector2.x + vector1.y * vector2.y + vector1.z * vector2.z;
}

// умножение вектора на скаляр
float scalar(struct struct_vector3D &vector, float k) {
  vector.x *= k;
  vector.y *= k;
  vector.z *= k;
  return vector.x + vector.y + vector.z;
}

// сравнение длины векторов
bool comparsion(struct struct_vector3D &vector1,
                struct struct_vector3D &vector2) {
  return length(vector1) == length(vector2);
}

// длина вектора
float length(struct struct_vector3D &vector) {
  return sqrt(vector.x * vector.x + vector.y * vector.y + vector.z * vector.z);
}

/*
Класс class_vector3D
x, y, z - координаты вектора
*/
class class_vector3D {
 private:
  float x;
  float y;
  float z;

 public:
  // инициализация вектора
  void init(float x, float y, float z) {
    this->x = x;
    this->y = y;
    this->z = z;
  }
  // вывод вектора
  void display() {
    cout << "x " << x << endl;
    cout << "y " << y << endl;
    cout << "z " << z << endl;
  }
  // ввод вектора
  void read() {
    cout << "Введите координату x: ";
    cin >> x;
    cout << "Введите координату y: ";
    cin >> y;
    cout << "Введите координату z: ";
    cin >> z;
  }
  // преобразование в строку
  string toString() {
    string str;
    str += "x= " + to_string(x) + " ";
    str += "y= " + to_string(y) + " ";
    str += "z= " + to_string(z);
    return str;
  }
  // сложение векторов
  void add(class_vector3D &vector) {
    x += vector.x;
    y += vector.y;
    z += vector.z;
  }
  // вычитание векторов
  void sub(class_vector3D &vector) {
    x -= vector.x;
    y -= vector.y;
    z -= vector.z;
  }
  // скалярное произведение векторов
  float mul(class_vector3D &vector) {
    return x * vector.x + y * vector.y + z * vector.z;
  }
  // умножение вектора на скаляр
  float scalar(float k) {
    x *= k;
    y *= k;
    z *= k;
    return x + y + z;
  }
  // сравнение длины векторов
  bool comparsion(class_vector3D &vector) {
    return length() == vector.length();
  }
  // длина вектора
  float length() { return sqrt(x * x + y * y + z * z); }
};

struct incapsstruct_vector3D {
  float x;
  float y;
  float z;
  // инициализация вектора
  void init(float x, float y, float z) {
    this->x = x;
    this->y = y;
    this->z = z;
  }
  // вывод вектора
  void display() {
    cout << "x " << this->x << endl;
    cout << "y " << this->y << endl;
    cout << "z " << this->z << endl;
  }
  // ввод вектора
  void read() {
    cout << "Введите координату x: ";
    cin >> this->x;
    cout << "Введите координату y: ";
    cin >> this->y;
    cout << "Введите координату z: ";
    cin >> this->z;
  }
  // преобразование в строку
  string toString() {
    string str;
    str += "x= " + to_string(this->x) + " ";
    str += "y= " + to_string(this->y) + " ";
    str += "z= " + to_string(this->z);
    return str;
  }
  // сложение векторов
  void add(incapsstruct_vector3D &vector) {
    this->x += vector.x;
    this->y += vector.y;
    this->z += vector.z;
  }
  // вычитание векторов
  void sub(incapsstruct_vector3D &vector) {
    this->x -= vector.x;
    this->y -= vector.y;
    this->z -= vector.z;
  }
  // скалярное произведение векторов
  float mul(incapsstruct_vector3D &vector) {
    return this->x * vector.x + this->y * vector.y + this->z * vector.z;
  }
  // умножение вектора на скаляр
  float scalar(float k) {
    this->x *= k;
    this->y *= k;
    this->z *= k;
    return this->x + this->y + this->z;
  }
  // сравнение длины векторов
  bool comparsion(incapsstruct_vector3D &vector) {
    return length() == vector.length();
  }
  // длина вектора
  float length() {
    return sqrt(this->x * this->x + this->y * this->y + this->z * this->z);
  }
};

/*
Класс incapsclass_vector3D
*/
class incapsclass_vector3D {
  incapsstruct_vector3D vector;

 public:
  // инициализация вектора
  void init(float x, float y, float z) { this->vector.init(x, y, z); }
  // вывод вектора
  void display() { this->vector.display(); }
  // ввод вектора
  void read() { this->vector.read(); }
  // преобразование в строку
  string toString() { return this->vector.toString(); }
};

int main() {
  struct_vector3D vector1;
  init(vector1, 1, 2, 3);
  display(vector1);
  cout << "Структура " << toString(vector1) << endl;
  class_vector3D vector2;
  vector2.init(1, 2, 3);
  vector2.display();
  cout << "Класс " << vector2.toString() << endl;
  incapsclass_vector3D vector3;
  vector3.init(1, 2, 3);
  vector3.display();
  cout << "Инкапсуляция" << vector3.toString() << endl;
  return 0;
}

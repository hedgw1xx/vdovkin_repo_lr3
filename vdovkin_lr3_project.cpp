#include <iostream>
using namespace std;

void clearTerminal() {
#ifdef _WIN32
  system("cls");
#elif defined(unix) || defined(__unix__) || defined(__unix)
  system("clear");
#endif
}

void enterA(int &a) {
  cout << "Введите целое число А: ";
  cin >> a;
  cout << "Введенное число А: " << a << endl;
}

void enterB(int &b) {
  cout << "Введите целое число В: ";
  cin >> b;
  cout << "Введенное число В: " << b << endl;
}

void enterC(int &c) {
  cout << "Введите целое число С: ";
  cin >> c;
  cout << "Введенное число С: " << c << endl;
}

void remainder() {
  int a, b, c;
  enterA(a);
  enterB(b);
  enterC(c);
  cout << "Остаток от деления суммы целых чисел А и В на число С: "
       << (a + b) % c;
}

void integerPart() {
  int a, b, c;
  enterA(a);
  enterB(b);
  enterC(c);
  cout << "Целая часть от деления суммы целых чисел А и В на число С: "
       << (a + b) / c;
}

int main(int argc, char const *argv[]) {

#ifdef _WIN32
  setlocale(LC_ALL, "ru-RU.UTF-8");
#elif defined(unix) || defined(__unix__) || defined(__unix)
  setlocale(LC_ALL, "ru_RU.UTF-8");
#endif

  clearTerminal();

  int choice;
  do {
    cout << "\nВыберите задачу:" << endl;
    cout << "1. Ввод целого числа А" << endl;
    cout << "2. Ввод целого числа В" << endl;
    cout << "3. Ввод целого числа С" << endl;
    cout
        << "4. Нахождение остатка от деления суммы целых чисел А и В на число С"
        << endl;
    cout << "5. Нахождение целой части от деления суммы целых чисел А и В на "
            "число С"
         << endl;
    cout << "0. Выход" << endl;
    cout << "Введите номер задачи: ";

    cin >> choice;

    switch (choice) {
    case 1:
      clearTerminal();
      int a;
      enterA(a);
      break;
    case 2:
      clearTerminal();
      int b;
      enterB(b);
      break;
    case 3:
      clearTerminal();
      int c;
      enterC(c);
      break;
    case 4:
      clearTerminal();
      remainder();
      break;
    case 5:
      clearTerminal();
      integerPart();
      break;
    case 0:
      clearTerminal();
      cout << "Выход из программы." << endl;
      break;
    default:
      cout << "Неверный выбор. Пожалуйста, попробуйте снова." << endl;
      break;
    }
  } while (choice != 0);

  return 0;
}

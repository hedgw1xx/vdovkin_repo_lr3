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
}

void enterB(int &b) {
  cout << "Введите целое число В: ";
  cin >> b;
}

void enterC(int &c) {
  cout << "Введите целое число С: ";
  cin >> c;
}

void remainder() {
  // разрабатывается Ивановым И. - ветка branch_remainder
}

void integerPart() {
  // разрабатывается Петровым П. - ветка branch_integerPart
}

int main(int argc, char const *argv[]) {

#ifdef _WIN32
  setlocale(LC_ALL, "ru-RU.UTF-8");
#elif defined(unix) || defined(__unix__) || defined(__unix)
  setlocale(LC_ALL, "ru_RU.UTF-8");
#endif

  clearTerminal();

  int a;
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

    cin >> a;

    switch (a) {
    case 1:
      clearTerminal();
      enterA();
      break;
    case 2:
      clearTerminal();
      enterB();
      break;
    case 3:
      clearTerminal();
      enterC();
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
  } while (a != 0);

  return 0;
}

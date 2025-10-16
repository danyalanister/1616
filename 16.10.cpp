#include <iostream>
using namespace std;
//1
int main() {
    setlocale(LC_ALL, "ru");
    int a, b, c;
    cout << "Введите три числа: ";
    cin >> a >> b >> c;

    if (a > b && a > c)
        cout << "Наибольшее число: " << a << endl;
    else if (b > a && b > c)
        cout << "Наибольшее число: " << b << endl;
    else
        cout << "Наибольшее число: " << c << endl;

    return 0;
}
//2
int main() {
    setlocale(LC_ALL, "ru");
    int N;
    cout << "Введите размер таблицы: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            cout << i * j << " ";
        }
        cout << endl;
    }

    return 0;
}
//3
int main() {
    setlocale(LC_ALL, "ru");
    int X;
    cout << "Введите число: ";
    cin >> X;

    if (X % 3 == 0 && X % 5 == 0)
        cout << "FizzBuzz" << endl;
    else if (X % 3 == 0)
        cout << "Fizz" << endl;
    else if (X % 5 == 0)
        cout << "Buzz" << endl;
    else
        cout << X << endl;

    return 0;
}
//4
int main() {
    setlocale(LC_ALL, "ru");
    int N;
    cout << "Введите число: ";
    cin >> N;

    int factorial = 1;
    for (int i = 1; i <= N; i++) {
        factorial *= i;
    }

    cout << "Факториал: " << factorial << endl;

    return 0;
}
//6
int main() {
    setlocale(LC_ALL, "ru");
    int N;
    cout << "Введите число: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        if (i % 15 == 0)
            cout << "ThreeFive ";
        else if (i % 3 == 0)
            cout << "Three ";
        else
            cout << i << " ";
    }

    cout << endl;

    return 0;
}
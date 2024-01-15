#include <iostream>

int main()
{
    using namespace std;
    setlocale(LC_ALL, "ru");
    cout << "Hello, World!\n";
    cout << "Привет, Мир!\n";

    cout << "Здесь могла быть ваша реклама!" << endl;

    int a, b;

    a = 2;
    b = ++a * a++;

    cout << a << "  " << b << endl;

    return 0;
    
}


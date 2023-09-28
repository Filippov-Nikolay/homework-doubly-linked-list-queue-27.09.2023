#include <iostream>
#include "List.h"

using namespace std;

/*
    Реализовать шаблонный класс "Очередь" на основе двусвязного списка. 
*/

int main() {
    setlocale(0, "");

    List<int> a(5);

    for (int i = 1; i < 7; i++)
        a.Push(i);

    a.Print();
    a.Extract();
    cout << endl;

    a.Print();
    cout << endl;

    return 0;
}

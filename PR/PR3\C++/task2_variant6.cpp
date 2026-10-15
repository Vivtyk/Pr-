#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Введите целое число от 1 до 5: ";
    cin >> number;

    switch (number) {
        case 1: cout << "Сегодня будет удачный день.\n"; break;
        case 2: cout << "Предстоит поездка.\n"; break;
        case 3: cout << "Возможна приятная встреча.\n"; break;
        case 4: cout << "Вас ждут хорошие новости.\n"; break;
        case 5: cout << "Вас ждёт приятный сюрприз.\n"; break;
        default: cout << "Число должно быть от 1 до 5.\n";
    }
    return 0;
}

#include <algorithm>
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

long long taskOne(const long long* numbers) {
    long long minimum = *min_element(numbers, numbers + 4);
    long long maximum = *max_element(numbers, numbers + 4);
    long long sum = minimum + maximum;
    return sum * sum;
}

long long taskTwo(const long long* numbers) {
    long long firstAndThird = numbers[0] * numbers[0]
                            + numbers[2] * numbers[2];
    long long secondAndFourth = numbers[1] * numbers[1]
                              + numbers[3] * numbers[3];
    return firstAndThird - secondAndFourth;
}

void printCentered(const string& text) {
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO info;
    GetConsoleScreenBufferInfo(console, &info);

    int width = info.srWindow.Right - info.srWindow.Left + 1;
    int height = info.srWindow.Bottom - info.srWindow.Top + 1;
    int x = info.srWindow.Left
          + (width - static_cast<int>(text.size())) / 2;
    int y = info.srWindow.Top + height / 2;

    if (x < info.srWindow.Left) {
        x = info.srWindow.Left;
    }

    COORD position;
    position.X = static_cast<SHORT>(x);
    position.Y = static_cast<SHORT>(y);

    SetConsoleCursorPosition(console, position);
    SetConsoleTextAttribute(
        console,
        FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_BLUE
    );

    cout << text;

    SetConsoleTextAttribute(
        console,
        FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE
    );
}

int main() {
    int choice;
    long long numbers[4];

    cout << "Menu zadach:\n";
    cout << "1 - Kvadrat summi naimenshego i naibolshego chisla\n";
    cout << "2 - Raznost summ kvadratov pervogo i tretiego, "
            "vtorogo i chetvertogo\n";
    cout << "Vash vybor (1 ili 2): ";
    cin >> choice;

    if (choice != 1 && choice != 2) {
        cout << "Oshibka: vyberite 1 ili 2.\n";
        return 1;
    }

    cout << "Vvedite chetyre naturalnyh chisla (1..1000000000): ";

    for (int i = 0; i < 4; ++i) {
        cin >> numbers[i];

        if (numbers[i] < 1 || numbers[i] > 1000000000) {
            cout << "Oshibka: chisla dolzhny byt ot 1 do 1000000000.\n";
            return 1;
        }
    }

    long long result;

    if (choice == 1) {
        result = taskOne(numbers);
    } else {
        result = taskTwo(numbers);
    }

    string message = "Rezultat: " + to_string(result);
    printCentered(message);
    cout << '\n';

    return 0;
}
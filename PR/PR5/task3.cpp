#include <iostream>
using namespace std;

int main() {
    int count = 0;

    int bags2 = 0;
    do {
        int bags4 = 0;
        do {
            int bags5 = 0;
            do {
                int remaining = 36 - 2 * bags2 - 4 * bags4 - 5 * bags5;

                if (remaining >= 0 && remaining % 10 == 0) {
                    int bags10 = remaining / 10;

                    cout << "Paketov 2 kg: " << bags2
                         << ", 4 kg: " << bags4
                         << ", 5 kg: " << bags5
                         << ", 10 kg: " << bags10 << '\n';

                    ++count;
                }

                ++bags5;
            } while (5 * bags5 <= 36 - 2 * bags2 - 4 * bags4);

            ++bags4;
        } while (4 * bags4 <= 36 - 2 * bags2);

        ++bags2;
    } while (2 * bags2 <= 36);

    cout << "Vsego variantov: " << count << '\n';
    return 0;
}
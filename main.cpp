#include <iostream>

int main() {
    float fractions[15] = {};
    for (float &fraction: fractions) {
        std::cin >> fraction;
    }

    int size = sizeof(fractions) / sizeof(fractions[0]);
    for (int k = 0; k < size - 1; k++) {
        for (int i = 0; i < size - k - 1; i++) {
            if ((fractions[i] < fractions[i + 1]) && i + 1 < size) {
                std::swap(fractions[i], fractions[i + 1]);
            }
        }
    }
    for (float el: fractions) {
        std::cout << el << " ";
    }
}

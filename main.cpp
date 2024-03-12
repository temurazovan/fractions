#include <iostream>

int main() {
    float fractions[] = {1.2f, 2.3f, 1.11f, 3.4f, 5.5f, 5.4f, 5.3f, 5.1f, 1.5f, 1.25f, 5.41f, 5.31f, 5.11f, 1.51f,
                         1.251f};
//    for (float & fraction : fractions) {
//        std::cin >> fraction;
//    }
    int size = sizeof(fractions) / sizeof(fractions[0]);
    for (int k = 0; k < size; k++) {

        for (int i = 0; i < size; i++) {
            if ((fractions[i] < fractions[i + 1]) && i + 1 < size) {
                std::swap(fractions[i], fractions[i + 1]);
            }
            std::cout << fractions[i] << " ";
        }
    }
}

#include <iostream>

int main() {
    int min, vector[15] = {14, 76, 20, 11, 27, 64, 36, 54, 89, 12, 78, 92, 44, 33, 75};
    min = vector[0];
    for (int i = 0; i < sizeof(vector)/sizeof(int); i++) {
        if (vector[i] > vector[i + 1]) {
            min = vector[i + 1];
        }
    }
    std::cout << min << std::endl;
    std::cout << sizeof(vector)/sizeof(int) << std::endl;
    return 0;
}

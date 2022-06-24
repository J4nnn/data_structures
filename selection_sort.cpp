#include <iostream>

int main() {
    int min, aux, vector[15] = {14, 76, 20, 11, 27, 64, 36, 54, 89, 12, 78, 92, 44, 33, 75};
    for (int i = 0; i < sizeof(vector)/sizeof(int); i++) {
        min = vector[i];
        for (int j = 0; j < sizeof(vector)/sizeof(int); j++) {
            if (vector[j + 1] < min) {
                min = vector[j + 1];
            }
        }
        aux = vector[i + 1];
        vector[i + 1] = vector[i];
        vector[i] = aux;
    }

    std::cout << "El vector ordenado es: " << std::endl;
    for (int i = 0; i < sizeof(vector)/sizeof(int); i++) {
        std::cout << vector[i] << " " << std::endl;
    }
    
    return 0;
}

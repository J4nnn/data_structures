#include <iostream>

int main() {
    int n, m;
    std::cout << "Ingrese n: ";
    std::cin >> n;
    std::cout << "Ingrese m: ";
    std::cin >> m;
    int mat1[n][m], mat2[n][m], mat3[n][m];

    std::cout << "\nLlenando matriz 1." << std::endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cout << "Fila " << i + 1 << ", columna " << j + 1 << ": ";
            std::cin >> mat1[i][j];
        }
    }

    std::cout << "\nLlenando matriz 2." << std::endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cout << "Fila " << i + 1 << ", columna " << j + 1 << ": ";
            std::cin >> mat2[i][j];
        }
    }
    
    std::cout << "\nMostrando matriz 3." << std::endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            // Sumando mat1 y mat2
            mat3[i][j] = mat1[i][j] + mat2[i][j];
            std::cout << mat3[i][j] << "  ";
        }
        std::cout << "\n";
    }
    
    return 0;
}
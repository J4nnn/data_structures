#include <iostream>

void swap (int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void display (int *array, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

void selection_sort (int *array, int size) {
    int i, j, min;
    for (int i = 0; i < size - 1; i++) {
        min = i;
        for (int j = i + 1; j < size; j++) {
            if (array[j] < array[min]) {
                min = j;
            }
            swap(array[i], array[min]);
        }
    }
}

int main(int argc, char const *argv[]) {
    int array[10] = {9, 4, 7, 1, 8, 0, 5, 6, 2, 3};
    std::cout << "Before sorting:";
    display(array[]);
    selection_sort(array);
    std::cout << "After sortin:";
    display(array[10]);
    return 0;
}

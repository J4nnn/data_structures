#include <iostream>

void swap (int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void display (int *array) {
    for (int i = 0; i < sizeof(array)/sizeof(int); i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

void selection_sort (int *array) {
    int i, j, min;
    for (int i = 0; i < sizeof(array)/sizeof(int); i++) {
        min = i;
        for (int j = i + 1; j < sizeof(array)/sizeof(int) - 1; j++) {
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
    display(array);
    selection_sort(array);
    std::cout << "After sortin:";
    display(array);
    return 0;
}

#include <iostream>
#include <vector>

// Функція, яка знаходить індекс найменшого непарного елемента у векторі
int findIndex(const std::vector<int>& a) {
    int min = INT_MAX; // Початкове значення для пошуку мінімального непарного елемента
    int minIndex = -1; // Індекс мінімального непарного елемента

    for (int i = 0; i < a.size(); i++) {
        if (a[i] % 2 != 0 && a[i] < min) {
            min = a[i];
            minIndex = i;
        }
    }

    return minIndex;
}

int main() {
    int n;
    std::cout << " Rozmir vectora ";
    std::cin >> n;

    std::vector<int> vectorA(n);

    // Заповнення вектора
    for (int i = 0; i < n; i++) {
        std::cout << " Vvedit a[" << i << "]: ";
        std::cin >> vectorA[i];
    }

    // Виведення вектора
    std::cout << " Vector a: ";
    for (int i = 0; i < n; i++) {
        std::cout << vectorA[i] << " ";
    }
    std::cout << std::endl;

    // Знайдемо індекс найменшого непарного елемента
    int minIndex = findIndex(vectorA);

    if (minIndex != -1) {
        std::cout << " Index naimenshogo neparnogo elementa: " << minIndex << std::endl;
    }
    else {
        std::cout << " Nemae naymenshogo neparnogo elementa." << std::endl;
    }

    return 0;
}

#include <stdio.h>
#define SIZE 8 // оголошення розміру масиву

int main() {
    int array[SIZE];//ініціалізація масиву
    // Ввід елементів масиву
    printf("Vvedit 8 elementiv masuvy:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        scanf_s("%d", &array[i]);
    }
    // Обнулення парних елементів масиву
    for (int i = 0; i < SIZE; i++) {
        if (array[i] % 2 == 0) {
            array[i] = 0;
        }
    }
    // Вивід зміненого масиву
    printf("Masuv pisla obnulenna\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}

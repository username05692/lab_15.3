#include <stdio.h>
#define SIZE 8 // ���������� ������ ������

int main() {
    int array[SIZE];//����������� ������
    // ��� �������� ������
    printf("Vvedit 8 elementiv masuvy:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        scanf_s("%d", &array[i]);
    }
    // ��������� ������ �������� ������
    for (int i = 0; i < SIZE; i++) {
        if (array[i] % 2 == 0) {
            array[i] = 0;
        }
    }
    // ���� �������� ������
    printf("Masuv pisla obnulenna\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}

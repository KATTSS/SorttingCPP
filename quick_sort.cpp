https://youtu.be/WprjBK0p6rw?si=5Eqg7uuOZgRfBvE3 //наглядно

#include <algorithm> // ОЧЕНЬ ВАЖНО ДЛЯ SWAP!!!!!!!!

int partition(int arr[], int left, int right) {
    int pivot = arr[(left + right) / 2]; // Опорный элемент
    while (left <= right) {
        while (arr[left] < pivot) {
            left++; // Идем вправо, пока не найдем элемент, больший или равный pivot
        }
        while (arr[right] > pivot) {
            right--; // Идем влево, пока не найдем элемент, меньший или равный pivot
        }
        if (left <= right) {
            std::swap(arr[left], arr[right]); // Обмениваем элементы местами
            left++;
            right--;
        }
    }
    return left; // Возвращаем индекс разделения
}
void quicksort(int arr[], int left, int right) {
    if (left < right) {
        int pivotIndex = partition(arr, left, right); // Разбиение массива
        quicksort(arr, left, pivotIndex - 1);  // Сортировка левой части
        quicksort(arr, pivotIndex, right);    // Сортировка правой части
    }
}
int main () {
int arr[] = {10, 7, 8, 9, 1, 5}; // Исходный массив
int n = sizeof(arr) / sizeof(arr[0]); // Количество элементов в массиве
quicksort(arr, 0, n - 1); // Вызов функции быстрой сортировки
}
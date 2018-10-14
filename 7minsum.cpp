/*7)Напишите программу находящую минимальную сумму пары элементов массива отстоящих друг от друга не менее чем на 4 элемента(первый и пятый элемент могут подходить, а первый и третий - нет). Эффективность в данной программе не приоритетна.
Пример входных данных:

8 // N - размер массива

4 11 -5 0 42 43 4 2 // сам массив

Пример выходных данных:

-3 // Arr[2]+Arr[7]=-5 + 2=-3*/


 
 
#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int a[n];
 
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
 
    int min_sum = a[0] + a[4];
    for (int i = 0; i < n - 4; ++i) {
        for (int j = i + 4; j < n; ++j) {
            if (a[i] + a[j] < min_sum) min_sum = a[i] + a[j];
        }
    }
 
    cout << min_sum;
 
    return 0;
}
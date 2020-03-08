// task27.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    std::cout << "Hello World!\n";
}

/*
    Дан набор из N целых положительных чисел. Из этих чисел формируются все возможные пары (парой считаются два элемента, которые находятся на разных 
    местах в наборе, порядок чисел в паре не учитывается), в каждой паре вычисляется сумма элементов. Необходимо определить количество пар, для которых 
    полученная сумма делится на 7.
*/
void task14713() {
    int n1, n2, n3, n4, n5, n6, n0, size, number;
    int kol = 0;
    n1 = 0;
    n2 = 0;
    n3 = 0;
    n4 = 0;
    n5 = 0;
    n6 = 0;
    n0 = 0;
    cin >> size;
    for (int i = 0; i < size; i++) {
        cin >> number;
        if (number % 7 == 0)
            n0++;
        else if (number % 7 == 1)
            n1++;
        else if (number % 7 == 2)
            n2++;
        else if (number % 7 == 3)
            n3++;
        else if (number % 7 == 4)
            n4++;
        else if (number % 7 == 5)
            n5++;
        else if (number % 7 == 6)
            n6++;
    }
    kol = n1 * n6 + n2 * n5 + n4 * n3 + n0 * (n0 - 1);
    cout << kol << endl;
}

/*
На вход программы поступает последовательность из N целых положительных чисел. Рассматриваются все пары различных элементов последовательности 
(элементы пары не обязаны стоять в последовательности рядом), такие что ai > aj при i < j. Среди пар, удовлетворяющих этому условию, необходимо найти 
и вывести пару с максимальной суммой элементов, которая делится на 117. Если среди найденных пар максимальную сумму имеют несколько, то можно 
напечатать любую из них.
*/
void task18729() {
    int a[117];
    int max1, number, sum, max2;
    max1 = 0;
    sum = 0;
    max2 = 0;
    int size;
    cin >> size;
    for (int n = 0; n < 117; n++) {
        a[n] = 0;
    }
    for (int i = 0; i < size; i++) {
        cin >> number;
        if (number % 117 == 0) {
            if (number > max1) {
                max2 = max1;
                max1 = number;
            }
            else if (number > max2) {
                max2 = number;
            }
        }
        else if (a[number % 117] > number)
            a[number % 117] = number;
    }
    sum = max1 + max2;
    for (int i = 1; i < 117; i++) {
        if (a[i] + a[117 - i] > sum) {
            max1 = a[i];
            max2 = a[117 - i];
            sum = a[i] + a[117 - i];
        }
    }
    if (sum > 0)
        cout << max1 << " " << max2 << endl;
    else
        cout << " NO " << endl;
}
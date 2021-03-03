#include <iostream>

using namespace std;

int summ(int i);

int main()
{
    setlocale(LC_ALL, "Russian");
    int num;
    cout << "Введите число: ";
    cin >> num;
    cout << "Сумма чисел вашего числа равна: " << summ(num);
    
    return 0;
}

int summ(int i) {
    int j = 0;
    while (i) {
        j += i % 10;
        i /= 10;
    }
    return j;
}
//int rows;
//std::cout << "введите количество рядов: ";
//std::cin >> rows;
//
//for (int i = 1; i <= rows; i++) {
//    for (int j = rows - i; j >= 1; --j)
//        std::cout << "*";
//    std::cout << std::endl;
//}

//int rows;
//cout << "Введите количество рядов: ";
//cin >> rows;
//
//while (rows) {
//    for (int j = rows; j >= 1; --j)
//        cout << "*";
//    rows--;
//    cout << endl;
//}

//int i = 13;
//
//while (i)
//{
//	if (i == 10) {
//		i--;
//		continue;
//	}
//	if (i != 1)
//		cout << i << ", ";
//	else
//		cout << i;
//	i--;
//}

//int num = 5;
//int sum = 0;
//
//while (num <= 57) {
//    if (num == 34 || num == 46 || num == 52) {
//        num++;
//        continue;
//    }
//    else {
//        sum += num;
//        num++;
//        cout << "Сумма на данный момент: " << sum << endl;
//    }
//}


//int num;
//rep:
//int chet = 0;
//int n_chet = 0;
//
//cout << "Введите число с клавиатуры: ";
//cin >> num;
//
//while (num > 0) {
//    if (num % 2 == 0)
//        chet++;
//    else
//        n_chet++;
//    num /= 10;
//}
//
//cout << "Чётныйх: " << chet << endl;
//cout << "Не чётных: " << n_chet << endl;
//goto rep;


//int num;
//long fakt = 1;
//cout << "Введите число с клавиатуры: ";
//cin >> num;
//
//for (int i = 2; i <= num; i++)
//fakt *= i;
//cout << fakt;


//int num;
//long otv = 0;
//
//cout << "Введите число с клавиатуры: ";
//cin >> num;
//
//while (num) {
//    if (num != 0)
//        otv += num;
//    num--;
//}
//
//cout << otv;


//for (int i = -7; i < 12; i += 3) {
//    if (i == -1 || i == 5 || i == 11)
//        continue;
//    cout << i << endl;
//}

//int num;
//
//do {
//    cout << "Введите число 13: ";
//    cin >> num;
//
//} while (num != 13);
//
//cout << "Успешно!";

//int rum = 5;
//for (int i = 3; i >= -1; i--) {
//    cout << i << " ";
//    for (int j = 1; j < rum; j++)
//        cout << i + j << " ";
//    rum--;
//    cout << endl;
//}

//int arr[5];
//int* p = arr;
//cout << "Введите 5 чисел через пробел:";
//cin >> *p >> *(p + 1) >> *(p + 2) >> *(p + 3) >> *(p + 4);
//cout << "Ваши 5 чисел:" << endl;
//for (int i = 0; i < 5; i++)
//    cout << arr[i] << endl;

//int num;
//cout << "Введите число: ";
//cin >> num;
//cout << "Сумма чисел вашего числа равна: " << summ(num);
//
//return 0;
//}
//
//int summ(int i) {
//    int j = 0;
//    while (i) {
//        j += i % 10;
//        i /= 10;
//    }
//    return j;
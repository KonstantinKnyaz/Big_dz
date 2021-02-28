#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
   
    int num;
    long otv = 0;

    cout << "Введите число с клавиатуры: ";
    cin >> num;

    while (num) {
        if (num != 0) 
            otv += num;
        num--;  
    }

    cout << otv;

    return 0;
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
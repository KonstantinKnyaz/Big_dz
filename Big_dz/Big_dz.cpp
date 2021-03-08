#include <iostream>
#include <string>

using namespace std;



int main()
{
    setlocale(LC_ALL, "Russian");
   
    float vklad;
    int age;
    int stav;

    cout << "Введите сумму вклада: ";
    cin >> vklad;
    cout << "Введите количество лет: ";
    cin >> age;
    cout << "Введите ставку в %: ";
    cin >> stav;

    int i = age - 1;

    while (i) {
        vklad = vklad / 100 * stav + vklad;
        cout << "После " << (age - i) << " года - " << vklad << endl;
        i--;
    }
    cout << "В итоге, после " << (age - 1) << " лет сумма составит " << vklad;


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

//void num(float i);
//
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//
//    int i;
//
//    cout << "Введите число: ";
//    cin >> i;
//
//    num(i);
//
//    return 0;
//}
//
//void num(float i) {
//
//    float k = round(i / 100);
//
//    if (i < 1000)
//        cout << i;
//    else {
//        k /= 10;
//        cout << k << "К";
//    }
//}


//string end(int num, string* arr);
//
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//
//    string arr[] = { "Год", "Года", "Лет" };
//
//    int a;
//
//    cout << "Введите год: ";
//    cin >> a;
//
//    cout << a << " " << end(a, arr) << endl;
//
//    return 0;
//}
//
//string end(int num, string* arr) {
//
//    if (num > 19)
//        num = num % 10;
//
//    if (num == 1)
//        return arr[0];
//    else if (num > 1 && num < 5)
//        return arr[1];
//    else
//        return arr[2];
//
//
//
//}

//int rast(int t, int v);
//void end(int s);
//
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//
//
//    int t, v;
//
//    cout << "Введите время: ";
//    cin >> t;
//    cout << "Введите скорость: ";
//    cin >> v;
//
//    rast(t, v);
//
//    return 0;
//}
//
//int rast(int t, int v) {
//
//    int s;
//    s = t * v;
//
//    end(s);
//
//    return s;
//}
//
//void end(int s) {
//
//    if (s == 1 || s % 10 == 1)
//        cout << "Вы прошли: " << s << " километр";
//    else if (s > 1 && s < 5 || s % 10 > 1 && s % 10 < 5)
//        cout << "Вы прошли: " << s << " километра";
//    else
//        cout << "Вы прошли: " << s << " километров";
//
//}

//int rast(int t, int v);
//void end(int s);
//
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//
//
//    int t, v;
//
//    cout << "Введите время: ";
//    cin >> t;
//    cout << "Введите скорость: ";
//    cin >> v;
//
//    rast(t, v);
//
//    return 0;
//}
//
//int rast(int t, int v) {
//
//    int s;
//    s = t * v;
//
//    end(s);
//
//    return s;
//}
//
//void end(int s) {
//
//    if (s == 1 || s % 10 == 1)
//        cout << "Вы прошли: " << s << " километр";
//    else if (s > 1 && s < 5 || s % 10 > 1 && s % 10 < 5)
//        cout << "Вы прошли: " << s << " километра";
//    else
//        cout << "Вы прошли: " << s << " километров";
//
//}


//char srav(int a, int b);
//
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//
//    int a, b;
//
//    cout << "Введите первое число: ";
//    cin >> a;
//    cout << "Введите второе число: ";
//    cin >> b;
//
//    cout << a << " " << srav(a, b) << " " << b;
//
//    return 0;
//}
//
//char srav(int a, int b) {
//
//    if (a > b)
//        return('>');
//    else if (a < b)
//        return('<');
//    else if (a = b)
//        return('=');
//
//}

//void println(string sl_1, string sl_2);
//void println(int num_1, int num_2);
//void println(int num, bool uno);
//
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//
//    println("Hello", "world");
//
//    println(5, 7);
//
//    println(2, true);
//
//    return 0;
//}
//
//void println(string sl_1, string sl_2) {
//
//    cout << sl_1 << " " << sl_2 << endl;
//
//}
//
//void println(int num_1, int num_2) {
//
//    cout << num_1 << " \n" << num_2 << endl;
//
//}
//
//void println(int num, bool uno) {
//
//    cout << num << " " << uno;
//
//}

//int main()
//{
//    setlocale(LC_ALL, "Russian");
//
//    int num;
//
//    cout << "Введите число: ";
//    cin >> num;
//
//    int i = num;
//
//    while (i) {
//        if (num % i == 0)
//            cout << i << endl;
//        i--;
//    }
//
//    return 0;
//}

//int main()
//{
//    setlocale(LC_ALL, "Russian");
//
//    float vklad;
//    int age;
//    int stav;
//
//    cout << "Введите сумму вклада: ";
//    cin >> vklad;
//    cout << "Введите количество лет: ";
//    cin >> age;
//    cout << "Введите ставку в %: ";
//    cin >> stav;
//
//    int i = age - 1;
//
//    while (i) {
//        vklad = vklad / 100 * stav + vklad;
//        cout << "После " << (age - i) << " года - " << vklad << endl;
//        i--;
//    }
//    cout << "В итоге, после " << (age - 1) << " лет сумма составит " << vklad;
//
//
//    return 0;
//}
#include <iostream>
#include <string>
#include <sstream> 

using namespace std;

// Шаблонная функция для сравнения двух массивов любого типа данных на равенство.
template<typename T, size_t N>
bool ArrayEqual(const T(&arr1)[N], const T(&arr2)[N])
{
    for (size_t i = 0; i < N; ++i)
    {
        if (arr1[i] != arr2[i]) return false;
    }
    return true;
}
// Функция перевода массива в строку для полного вывода массивов в консоль
template<typename T, size_t N>
string ArrayToString(const T(&arr)[N])
{
    ostringstream ats;
    ats << '[';
    for (size_t i = 0; i < N; ++i)
    {
        if (i != 0) ats << ", ";
        ats << arr[i];
    }
    ats << ']';
    return ats.str();
}
// Шаблонная функция для вычисления суммы гармонического ряда до указанного числа для числа любого типа данных.
template<typename T>
T HarmonicSum(T n) {
    T sum{ 0 };
    for (T i = 1; i <= n; ++i) sum += 1.0 / i;
    return sum;
}

class Arrays {
public:
    void IntArray()
    {
        int arr1[]{ 1,2,3,4,5,6 };
        int arr2[]{ 1,2,3,4,5,6 };
        int arr3[]{ 1,2,3,4,5,7 };

        cout << ArrayToString(arr1) << " == " << ArrayToString(arr2) << " - " << (ArrayEqual(arr1, arr2) ? "true" : "false") << endl;
        cout << ArrayToString(arr1) << " == " << ArrayToString(arr3) << " - " << (ArrayEqual(arr1, arr3) ? "true" : "false") << endl;
        cout << endl;
    }
    
    void DoubleArray()
    {
        double arr4[]{ 1.1, 2.2, 3.3, 4.4, 5.5 };
        double arr5[]{ 1.1, 2.2, 3.3, 4.4, 5.5 };
        double arr6[]{ 1.1, 2.2, 3.3, 4.4, 5.6 };

        cout << ArrayToString(arr4) << " == " << ArrayToString(arr5) << " - " << (ArrayEqual(arr4, arr5) ? "true" : "false") << endl;
        cout << ArrayToString(arr4) << " == " << ArrayToString(arr6) << " - " << (ArrayEqual(arr4, arr6) ? "true" : "false") << endl;
        cout << endl;
    }
    
    void CharArray()
    {
        char arr7[]{ 'a','b','c' };
        char arr8[]{ 'a','b','c' };
        char arr9[]{ 'a','b','d' };

        cout << ArrayToString(arr7) << " == " << ArrayToString(arr8) << " - " << (ArrayEqual(arr7, arr8) ? "true" : "false") << endl;
        cout << ArrayToString(arr7) << " == " << ArrayToString(arr9) << " - " << (ArrayEqual(arr7, arr9) ? "true" : "false") << endl;
        cout << endl;
    }
    
    void StringArray()
    {
        string arr10[]{ "hello", "world!" };
        string arr11[]{ "hello", "world!" };
        string arr12[]{ "hello", "every!" };

        cout << ArrayToString(arr10) << " == " << ArrayToString(arr11) << " - " << (ArrayEqual(arr10, arr11) ? "true" : "false") << endl;
        cout << ArrayToString(arr10) << " == " << ArrayToString(arr12) << " - " << (ArrayEqual(arr10, arr12) ? "true" : "false") << endl;
        cout << endl;
    }
   
};

int main()
{
    setlocale(LC_ALL, "");

    cout << "Практика 11. Вариант 12.\n" << endl;

    cout << "Задание 1:" << endl;

    Arrays arr;
    arr.IntArray();
    arr.DoubleArray();
    arr.CharArray();
    arr.StringArray();

    cout << "Задание 2:" << endl;

    int int_n = 7;
    double double_n = 8.0;

    cout << "Гармоническая сумма для типа int = " << int_n << ": " << HarmonicSum(int_n) << endl;
    cout << "Гармоническая сумма для типа double = " << double_n << ": " << HarmonicSum(double_n) << endl;

    return 0;
}

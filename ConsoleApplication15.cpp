// ConsoleApplication15.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

class textСomparison {
public:
    static bool Сomparison(const string& text1, const string& text2) {
        set<char> set1 = getUniqueCharacters(text1);
        set<char> set2 = getUniqueCharacters(text2);
        return set1 == set2;

    }
    private:
        static set<char> getUniqueCharacters(const string& str) {
            set<char> uniqueChars;
            for (char c : str) {
                if (isalpha(c)) { // проверяем, является ли символ буквой
                    uniqueChars.insert(tolower(c));
                }
            }
            return uniqueChars;
        }
};
int main()
{
    setlocale(LC_ALL, "Russian");
    string text1, text2;
    getline(cin, text1);
    getline(cin, text2);

    if (textСomparison::Сomparison(text1, text2)) {
        cout << "Строки равны по набору уникальных букв." << endl;
    }
    else {
        cout << "Строки не равны." << endl;
    }

    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.

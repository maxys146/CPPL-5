// netology_5.05.01.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>

template <class T>
T my_square(T a)
{
    return a * a;
}

template <class T>
std::vector<T> my_square(std::vector<T> a)
{
        std::cout << "Vector\n";
    for (int element : a)
    {

        element = element * element;
        std::cout << element << "\n";

    }
    return a;
}

int main()
{
    std::vector <int> vector = { 1, 2, 3 };
    std::cout << my_square(3) << "\n";
    std::cout  << "Int\n";
    for (int element : vector)
    {
        std::cout << element << "\n";
    }
    std::vector <int> vector_new = my_square(vector);
    std::cout << "Vector out\n";
    for (int element : vector_new)
    {
        std::cout << element << "\n";
    }
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

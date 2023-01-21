// netology_5.03.01.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <exception>

class smart_array {
public:
    int* arr;
    int size;
    smart_array(const int size) {
        this->size = size;
        int* constructorArray = new int[size]();
        arr = constructorArray;
    }
    int get_element(int number) {
        if (number >= 0 and number < this->size)
        {
            return this->arr[number];
        }
        else
        {
            throw std::exception("Wrong index!");
        }
    }
    void add_element(int value) {
        for (int i = 0; i < size; i++) {
            if (arr[i] == 0) {
                this->arr[i] = value;
                break;
            }
        }
    }
    
    ~smart_array() {
        delete[] arr;
    }

};


int main()
{
    setlocale(LC_ALL, "Russian");
    
    try {
        smart_array arr(5);

        arr.add_element(1);
        arr.add_element(4);
        arr.add_element(155);
        arr.add_element(14);
        arr.add_element(15);
        arr.add_element(54); // Проверка что 6 элемент не добавляется.

        for (int i = 0; i < 6; i++) { // Проверка что срабатывает exception для 6 элемента
            std::cout << "arr[" << i << "] = " << arr.get_element(i) << "\n";
        }
    }
    catch (const std::exception& ex) {
        std::cout << "Exception: " << ex.what() << std::endl;
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

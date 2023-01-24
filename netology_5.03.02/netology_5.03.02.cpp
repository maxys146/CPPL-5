// netology_5.03.02.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class smart_array {
public:
    int* arr;
    int size;
public:
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
            //throw std::runtime_error("Wrong index!");
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

    smart_array &operator=(smart_array& sm)
    {
        // Удаляем массив и создаем новый
        delete this->arr;
        this->arr = new int[sm.size]();

        // Цикл для копирования данных
        for (int i = 0; i < sm.size; i++) {
            this->add_element(sm.get_element(i));
        }


        return *this;
    }

    ~smart_array() {
        //std::cout << "Деструктор " << arr << "\n";
        delete[] this->arr;
    }


};


int main()
{
    setlocale(LC_ALL, "Russian");

    smart_array arr(5);
    arr.add_element(1);
    arr.add_element(4);
    arr.add_element(155);
    arr.add_element(22);
    arr.add_element(33);

    smart_array new_array(2);
    new_array.add_element(44);
    new_array.add_element(34);

    std::cout << "До присваивания." << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << "arr[" << i << "] = " << arr.get_element(i) << "\n";
    }
    for (int i = 0; i < 2; i++) {
        std::cout << "new_array[" << i << "] = " << new_array.get_element(i) << "\n";
    }


    arr = new_array;

    std::cout << "После присваивания." << std::endl;
    for (int i = 0; i < 2; i++) {
        std::cout << "arr[" << i << "] = " << arr.get_element(i) << "\n";
    }
    for (int i = 0; i < 2; i++) {
        std::cout << "new_array[" << i << "] = " << new_array.get_element(i) << "\n";
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

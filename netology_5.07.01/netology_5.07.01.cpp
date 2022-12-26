// netology_5.07.01.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <map>

int main()
{
    std::string str("Hello World!");
    for (std::string::size_type i = 0, len = str.size(); i < len; ++i) {
        std::cout << str[i] << " ";
    }
    std::cout << std::endl;

    //return 0;

    std::map<std::string, int> letterMap
    {
        //{"a", 3}, {"f", 2}, {"h", 7}
    };
    std::string asd;
    for (std::string::size_type i = 0, len = str.size(); i < len; ++i) {
        asd = str[i];
        try
        {
            letterMap.at(asd)++;
            //std::cout << letterMap.count(&ch);
        }
        catch (std::out_of_range error)
        {
            std::cout << "Exception\t" << str[i] << "\n";
            letterMap[asd] = 1;
        }
    }


    for (const auto& elem : letterMap)
        std::cout << elem.first << ": " << elem.second << std::endl;
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

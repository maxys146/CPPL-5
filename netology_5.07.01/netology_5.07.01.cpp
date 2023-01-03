// netology_5.07.01.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <map>
#include <string>

int main()
{
    //Ввод данных для 
    std::cout << "[IN]: ";
    std::string inputPhrase;
    std::getline(std::cin, inputPhrase);
    
    std::map<std::string, int> letterMap;
    std::multimap<int, std::string> letterMultiMap;

    // Добавляем элемент в map
    // Если элемент присутствует, то увеличиваем его счетчик на 1
    std::string tmpChar;
    for (std::string::size_type i = 0, len = inputPhrase.size(); i < len; ++i) {
        tmpChar = inputPhrase[i];
        try
        {
            letterMap.at(tmpChar)++;
        }
        catch (std::out_of_range error)
        {
            letterMap[tmpChar] = 1;
        }
    }

    // Записываем map в multimap с ротацией key-value
    for (const auto& elem : letterMap)
    {
        letterMultiMap.insert(std::make_pair(elem.second, elem.first));
    }

    // Вывод multimap в обратном порядке
    std::cout << "[OUT]:\n";
    for (auto it = letterMultiMap.rbegin(); it != letterMultiMap.rend(); ++it)
    {
        std::cout << it->first << ": " << it->second << std::endl;
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

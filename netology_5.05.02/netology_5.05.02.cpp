// netology_5.05.02.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class MyArr {
	unsigned m_row;			//количество строк
	unsigned m_col;			//количество колонок
	int** arr;				//указательная переменная в качестве массива
	MyArr() {}
public:
	MyArr(const unsigned, const unsigned);		//прототип конструктора с параметрами, для количеств на массив
	~MyArr();		//прототип деструктора

	unsigned row() const { return m_row; }		//функция для вытаскивания числа строк
	unsigned col() const { return m_col; }		//функция для вытаскивания числа строк

	int* operator[](const int i) {
		return arr[i];
	}

	const int* operator[](const int i) const {
		return arr[i];
	}
};

MyArr::MyArr(const unsigned row_, const unsigned col_) :m_row(row_), m_col(col_) {
	arr = new int* [m_row];		//создаём двумерный массив
	for (unsigned i = 0; i < m_row; i++) {
		arr[i] = new int[m_col];
	}
}


MyArr:: ~MyArr() {
	/*зачищаем двумерный массив*/
	for (unsigned i = 0; i < m_row; i++) {
		delete[]arr[i];
	}

	delete[]arr;
}




int main()
{
	MyArr arr(10, 6);

	unsigned count = 0;	//для заполнения по порядку

	for (unsigned i = 0; i < arr.row(); i++) {
		for (unsigned j = 0; j < arr.col(); j++) {
			arr[i][j] = count++;
		}
	}

	for (unsigned i = 0; i < arr.row(); i++) {
		for (unsigned j = 0; j < arr.col(); j++) {
			std::cout << arr[i][j] << '\t';
		}
		std::cout << "\n";
	}

	const MyArr arr2(10, 6);
	//arr[0][0] = 100               // для константого объекта нельзя

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

#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int matrix[500][500];
	int size;

	cout << "Введите размер квадратной матрицы" << endl;

	cin >> size;

	if (size <= 0)
	{
		cout << "Невалидное значение. Должно быть > 0" << endl;
		return 0;
	}

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
			matrix[i][j] = 0;
	}

	for (int i = 0; i < size; i++)
	{
		int next_number = size;
		for (int j = i; j > -1; j--)
		{
			matrix[i][j] = next_number;
			next_number--;
		}
	}

	cout << "Ваша матрица:" << endl << endl;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
			cout << matrix[i][j] << " ";

		cout << endl << endl;
	}
}

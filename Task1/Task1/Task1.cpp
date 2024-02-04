#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int matrix[500][500];
	int rows;
	int columns;
	int next_digit = 1;

	cout << "Введите кол-во строчек и столбоцов" << endl;

	cin >> rows >> columns;

	if (rows < 1 || columns < 1)
	{
		cout << "Невалидные значения. Должны быть >= 1" << endl;
		return 0;
	}

	cout << endl << "Ваша матрица: " << endl << endl;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{

			if ((i + j) % 2 != 0 )
				matrix[i][j] = 0;
			else
			{
				matrix[i][j] = next_digit;
				next_digit++;

				if (next_digit > 9)
					next_digit = 1;
			}

			cout << matrix[i][j] << " ";
		}

		cout << endl << endl;
	}
}

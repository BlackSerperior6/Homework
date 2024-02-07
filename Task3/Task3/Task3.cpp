#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    srand(time(0));
    int array[500];
    int size;
    int counter = 0;

    cout << "Введите кол-во элементов массива" << endl;
    cin >> size;

    if (size < 1)
    {
        cout << "Кол-во элементов должно быть >= 1" << endl;
        return 0;
    }

    cout << "Изначальный массив:" << endl << endl;

    for (int i = 0; i < size; i++)
    {
        array[i] = rand() % 100;
        cout << array[i] << " ";
    }

    cout << endl << endl << "Измененный массив:" << endl << endl;

    for (int i = 0; i < size; i++)
    {
        if (array[i] == 0)
        {
            counter++;
            for (int j = i; j < size; j++)
                array[j] = array[j + 1];  
        }
    }

    for (int i = 0; i < counter; i++)
        array[size + i] = 0;

    for (int i = 0; i < size; i++)
        cout << array[i] << " ";

}

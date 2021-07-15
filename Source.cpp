#include <iostream>

using namespace std;

int main()
{
	/*int number, columns;
	cout << "Input number: ";
	cin >> number;
	cout << "Input columns: ";
	cin >> columns;

	int rowsFull{ number / columns };
	int rowRest{ number % columns };

	for (int row = 1; row <= rowsFull; row++)
	{
		for (int col = 0; col <= rowRest; col++)
			cout << row + col * (rowsFull + 1) << "\t";
		for(int col = rowRest + 1; col < columns; col++)
			cout << row + col * rowsFull + rowRest << "\t";
		cout << "\n";
	}
	for (int col = 1; col <= rowRest; col++)
		cout << (rowsFull + 1) * col << "\t";
	cout << "\n";*/

	int widthBoard, widthCell;
	cout << "Input width of board: ";
	cin >> widthBoard;
	cout << "Input width of cell: ";
	cin >> widthCell;

	bool order{ false };
	for (int rowBoard = 0; rowBoard < widthBoard; rowBoard++)
	{
		for (int rowCell = 0; rowCell < widthCell; rowCell++)
		{
			for (int colBoard = 0; colBoard < widthBoard; colBoard++)
			{
				for (int colCell = 0; colCell < widthCell; colCell++)
				{
					cout << ((order) ? (char)32 : (char)176);
					cout << ((order) ? (char)32 : (char)176);
				}
				order = !order;
			}
			cout << "\n";
		}
		order = !order;
	}

	return 0;
}
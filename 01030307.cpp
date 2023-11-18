#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <sstream>
using namespace std;
class Solution
{
public:
	void findlucky(vector<int>& arr)
	{
		map <int, int> myMap;

		for (int num : arr)
		{
			myMap[num]++;
		}
			
		int res = -1;

		for (auto& element : myMap)
		{
			int number = element.first;
			int periodicity = element.second;

			if (number == periodicity)
			{
				if (number > res)
				{
					res = number;
				}
			}
		}
		if (res == -1)
		{
			cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
			cout << "Щасливе число не найдено, код помилки: " << res << endl;
			cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
		}
		else
		{
			cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
			cout << "Найбільше 'Щасливе число': " << res << endl;
			cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
		}
	}
};
int main()
{
	system("chcp 1251 > nul");

	vector<int> items;

	int item;
	string line;

	cout << "Ця програма шукає у векторі 'Щасливе число', якщо частота появи числа у векторі дорівнює йому самому, то число щасливе." << endl;
	cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "Введіть масив чисел які розділені пробілами: ";
	getline(cin, line);
	istringstream is(line);

	while (is >> item)
	{
		items.push_back(item);
	}

	Solution solution;
	solution.findlucky(items);
}
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

//day 1:
//maybe a clever solution but i think you could do this pretty easily with some sorts and loops.
//star 1 = 00:39:35
//star 2 NOT doing it at this time mwehehehe

void dayOne()
{
	vector<int> left;
	vector<int> right;

	//reading file
	ifstream dayInput("Day1.txt");
	string line;
	while (getline(dayInput, line))
	{
		left.push_back(stoi(line.substr(0, 5)));
		right.push_back(stoi(line.substr(8, 13)));
	}
	dayInput.close();

	sort(left.begin(), left.end());
	sort(right.begin(), right.end());

	int total = 0;
	for (int i = 0; i < left.size(); i++)
	{
		int leftItem = left.at(i);
		int rightItem = right.at(i);
		if (leftItem >= rightItem)
		{
			total += leftItem - rightItem;
		}
		else
		{
			total += rightItem - leftItem;
		}
	}

	cout << "Day 01: " << total << endl;
}

int main()
{
	dayOne();
	cout << "Hello\n";
}
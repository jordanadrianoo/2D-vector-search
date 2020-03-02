
#include <iostream>
#include <vector>
#include <list>

using namespace std;

template <class T>
vector<vector<T>> search(vector<vector<T>> vect, T value)
{
	vector<vector<T>> y{};
	vector<T> x{};
	

	if (vect.size() != 0)
	{
		for (int i = 0; i < vect.size(); i++)
		{
			for (int j = 0; j < vect[i].size(); j++)
			{
				if (vect[i][j] == value)
				{
					x.push_back(j);
				}
			}
			if (x.size() != 0)
			{
				y.push_back(x);
				x.clear();
			}
		}
		return y;
	}
	else
	{
		cout << "The Vector is empty." << endl;
	}

}


template <class T>

int main()
{
	vector <vector<int>>nums = { { 3,2,3 }, {3, 5, 3}, {7, 3, 9} };

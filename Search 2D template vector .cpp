
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
void display(vector<vector<T>> vect)
{
	if (vect.size() != 0)
	{
		cout << "The vector contents are..." << endl;
		for (int i = 0; i < vect.size(); i++)
		{
			for (int j = 0; j < vect[i].size(); j++)
			{
				cout << vect[i][j] << " ";
			}
			cout << endl;
		}
	}
	else
	{
		cout << "The Vector is empty." << endl;
	}
}

template <class T>
void display_locations(vector<vector<T>> vect, T value)
{
	if (vect.size() != 0)
	{
		cout <<"size is"<< vect.size() << endl;
		cout << "The locations of " << value << " were found at..." << endl;
		cout << "[Y] [X]"<<endl;
		for (int i = 0; i < vect.size(); i++)
		{
			for (int j = 0; j < vect[i].size(); j++)
			{
				cout << "[" << i << "] [" << vect[i][j] << "]" << endl;
			}
		}
	}
	else
	{
		cout << "Sorry! No Locations were found using " << value << endl;
	}
}

int main()
{
	vector <vector<int>>nums = { { 3,2,3 }, {3, 5, 3}, {7, 3, 9} };

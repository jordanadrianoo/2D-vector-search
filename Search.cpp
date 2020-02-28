// Jordan Adriano
// This program will search 2D vectors of floats and return the x and y coordinates

//Functions List
// main()
// Search  - will search the 2D vector for a given float and return a 2D vector of locations
// display - will show what contents are in a 2D vector
// display_x_and_y_locations - will show the X and Y coordinates of the locations found in search

# include<iostream>
# include<vector>

using namespace std;

vector<vector<float>> search(vector<vector<float>> vect, float value)
{
	vector<vector<float>> x;
	vector<float> y;

	cout << " Searching for all \""<<value<<"\"s in the 2D vector\n";

	if (vect.size() != 0)
	{
		for (int i = 0; i < vect.size(); i++)
		{
			for(int j=0; j<vect[i].size();j++)
			{
				if (vect[i][j] == value)
				{
					y.push_back(j);
				}
			}
			if (y.size() != 0)
			{
				x.push_back(y);
				y.clear();
			}
		}
	}
	return x;
}

void display(vector<vector<float>> vect)
{
	
	cout << " The vector contains: \n";
	for (int i = 0; i < vect.size(); i++)
	{
		for (int j = 0; j < vect[i].size(); j++)
		{
			cout << vect[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void display_x_and_y_locations(vector<vector<float>> vect,float value)
{
	if (vect.size() != 0)
	{
		cout << " The X and Y coordinates found using " <<value<<".\n";
		for (int i = 0; i < vect.size(); i++)
		{
			for (int j = 0; j < vect[i].size(); j++)
			{
				cout << "[ " << i << " , " << vect[i][j] << "] \n";
			}
		}
		cout << endl;
	}
	else
	{
		cout << " sorry! no locations found!\n";
	}
}

int main()
{
	float search_number = 0;
	vector<vector<float>> positions{};

	vector<vector<float>> nums{ {10,20,80,10,101},
								{80,10,10,10,60},
								{80,10,10,80,10,} };
	display(nums);

	search_number = 10; // sets the number we will look for
	positions=search(nums, search_number); // will set the 2D vector "positions" with all locations found
	display_x_and_y_locations(positions, search_number); // will show the coordinates of the locations if found

	search_number = 80;
	positions = search(nums, 80);
	display_x_and_y_locations(positions,search_number);

	search_number = 0;
	positions = search(nums, search_number);
	display_x_and_y_locations(positions, search_number);

	system("pause");
} 


// This program will search 2D vectors of floats and return the x and y coordinates
//

# include<iostream>
# include<vector>

using namespace std;

vector<vector<float>> search(vector<vector<float>> vect, float value)
{
	vector<vector<float>> x;
	vector<float> y;

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

void display_x_and_y_locations(vector<vector<float>> vect)
{

	for (int i = 0; i < vect.size(); i++)
	{
		for (int j = 0; j < vect[i].size(); j++)
		{
			cout << "[ " << i << " , " << vect[i][j] << "] \n";

		}
		

	}
	cout << endl;

}

int main()
{
	vector<vector<float>> positions{};
	vector<vector<float>> nums{ {10,20,30,10,101},
								{10,10,10,10,60},
								{70,10,10,80,10,} };

	display(nums);

	positions=search(nums, 10);
	display_x_and_y_locations(positions);

	system("pause");
} 

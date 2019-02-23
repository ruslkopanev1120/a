#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector< vector<int> > dp;
vector<int> v, c;

void findSubset(int k, int s)
{
	if (dp[k][s] == 0)
		return;

	if (dp[k - 1][s] == dp[k][s]) 
	{
		findSubset(k - 1, s);
	}
	else 
	{
		findSubset(k - 1, s - c[k]);
		cout << k << " ";
	}
}

int main()
{
	int W, numberItems;
	
	cout << "enter the maximum weight ";
	cin >> W;
	cout << "enter the number of items ";
	cin >> numberItems;

	c.push_back(0);
	v.push_back(0);

	int ct, vt;
	cout << "weight" << endl;
	for (int i = 1; i <= numberItems; i++)
	{
		cout << i;
		cout << " ";
		cin >> ct;
		c.push_back(ct);
	}
	
	cout << "cost" << endl;
	for (int j = 1; j <= numberItems; j++)
	{
		cout << j;
		cout << " ";
		cin >> vt;
		v.push_back(vt);
	}

	dp.resize(numberItems + 1, vector<int>(W + 1, 0));

	for (int i = 1; i <= numberItems; i++)
	{
		for (int w = 1; w <= W; w++) 
		{
			if (c[i] > w)
			{
				dp[i][w] = dp[i - 1][w];
			}
			else
			{
				dp[i][w] = max(dp[i - 1][w], v[i] + dp[i - 1][w - c[i]]);
			}
		}
	}
	
	//cout << dp[numberItems][W] << endl;
	cout <<  "items ";
	findSubset(numberItems, W);
}
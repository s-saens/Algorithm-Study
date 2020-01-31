#include <iostream>
using namespace std;

void MakeStars(int n, int x, int y, char **map)
{
	if(n==1)
	{
		map[x][y] = '*';
	}
	else
	{
		for(int i=0 ; i<3 ; ++i)
		{
			for(int j=0 ; j<3 ; ++j)
			{
				if(i!=1 || j!=1)
				{
					MakeStars(n/3, x+(i*n/3), y+(j*n/3), map);
				}
			}
		}
	}
	return;
}

int main()
{
	/* 크기 n의 map 동적 생성 */
	
	int n; cin >> n;
	char **map;
	map = new char*[n];
	for(int i=0 ; i<n ; ++i)
	{
		map[i] = new char[n];
	}
	
	for(int i=0 ; i<n ; ++i)
	{
		for(int j=0 ; j<n ; ++j)
		{
			map[i][j] = ' ';
		}
	}
	
	/*--------여기까지--------*/
	
	MakeStars(n, 0, 0, map);
	
	//
	
	for(int i=0 ; i<n ; ++i)
	{
		for(int j=0 ; j<n ; ++j)
		{
			cout << map[i][j];
		}
		cout << endl;
	}
	
}

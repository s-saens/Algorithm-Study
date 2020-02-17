#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int X; cin >> X;
	
	int last_dir = 1; // 오른쪽위=0, 왼쪽아래=1
	
	// 좌표
	int x = 0;
	int y = 0;
	
	for(int i = 1; i<X ; ++i)
	{
		if(x==0) // 맨위
		{
			if(y%2 == 0) // 0/0, 0/2 ... : 오른쪽 
			{
				y++;
				continue;
			}
			else // 0/1, 0/3 ... : 왼쪽아래
			{
				y--; x++;
				last_dir = 1;
				continue;
			}
		}
		else if(y==0) // 맨왼쪽
		{
			if(x%2 == 0) // 2/0, 4/0 ... : 오른쪽위
			{
				x--; y++;
				last_dir = 0; 
				continue;
			}
			else // 1/0, 3/0 ... : 아래
			{
				x++;
				continue;
			}
		}
		else
		{
			if(last_dir == 1) // 왼쪽아래
			{
				x++; y--;
				continue;
			}
			else if(last_dir == 0) // 오른쪽위
			{
				x--; y++;
				continue;
			}
		}
	}
	cout << x+1 << '/' << y+1 << endl;
}

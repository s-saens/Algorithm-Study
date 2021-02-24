#include <iostream>
using namespace std;

int main()
{
	int X; cin >> X;
	
	int last_dir = 0; // 오른쪽위=0, 왼쪽아래=1 라고 약속
	
	// 좌표
	int x = 1;
	int y = 1;
	
	for(int i = 1; i<X ; ++i)
	{
		if(x==1) // 맨위
		{
			if(y%2 == 1) { y++; continue; }
			else { y--; x++; last_dir = 1; continue; }
		}
		else if(y==1) // 맨왼쪽
		{
			if(x%2 == 1) { x--; y++; last_dir = 0; continue; }
			else { x++; continue; }
		}
		else // 무조건 대각선 
		{
			if(last_dir == 1) { x++; y--; continue; }
			else if(last_dir == 0) { x--; y++; continue; }
		}
	}
	cout << x << '/' << y << endl;
}

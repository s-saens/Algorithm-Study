#include <iostream>
using namespace std;

int main()
{
	int X; cin >> X;
	
	int last_dir = 0; // ��������=0, ���ʾƷ�=1 ��� ���
	
	// ��ǥ
	int x = 1;
	int y = 1;
	
	for(int i = 1; i<X ; ++i)
	{
		if(x==1) // ����
		{
			if(y%2 == 1) { y++; continue; }
			else { y--; x++; last_dir = 1; continue; }
		}
		else if(y==1) // �ǿ���
		{
			if(x%2 == 1) { x--; y++; last_dir = 0; continue; }
			else { x++; continue; }
		}
		else // ������ �밢�� 
		{
			if(last_dir == 1) { x++; y--; continue; }
			else if(last_dir == 0) { x--; y++; continue; }
		}
	}
	cout << x << '/' << y << endl;
}

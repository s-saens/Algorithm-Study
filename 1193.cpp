#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int X; cin >> X;
	
	int last_dir = 1; // ��������=0, ���ʾƷ�=1
	
	// ��ǥ
	int x = 0;
	int y = 0;
	
	for(int i = 1; i<X ; ++i)
	{
		if(x==0) // ����
		{
			if(y%2 == 0) // 0/0, 0/2 ... : ������ 
			{
				y++;
				continue;
			}
			else // 0/1, 0/3 ... : ���ʾƷ�
			{
				y--; x++;
				last_dir = 1;
				continue;
			}
		}
		else if(y==0) // �ǿ���
		{
			if(x%2 == 0) // 2/0, 4/0 ... : ��������
			{
				x--; y++;
				last_dir = 0; 
				continue;
			}
			else // 1/0, 3/0 ... : �Ʒ�
			{
				x++;
				continue;
			}
		}
		else
		{
			if(last_dir == 1) // ���ʾƷ�
			{
				x++; y--;
				continue;
			}
			else if(last_dir == 0) // ��������
			{
				x--; y++;
				continue;
			}
		}
	}
	cout << x+1 << '/' << y+1 << endl;
}

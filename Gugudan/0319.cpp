#include <iostream>
using namespace std;

int main()
{
	int i = 0; // �����ʱ�ȭ
	int j = 0; // �����ʱ�ȭ
	int v = 0; // �����ʱ�ȭ

	for (i = 2; i < 10; i++)
	{
		cout << i << "��" << '\t';

		for (j = 1; j < 10; j++)
		{
			v = i * j;

			cout << i << "x" << j << "=" << v << '\t';
		}

		cout << endl;

	}
	return 0;
}
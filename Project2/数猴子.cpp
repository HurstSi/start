#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int m, n;
	cout << "����ѡ����(����洢)" << endl << "==========================" << endl << endl;
	cout << "�������������m:" << endl;
	cin >> m;

	cout << "������Ҫѡ�ļ����n:" << endl;
	cin >> n;
	int monkey[1000];
	int monkey_out[1000];
	cout << "ÿ�����ӵ����α��Ϊ:" << endl;
	for (int i = 0; i < m; i++) //�����������
	{
		monkey[i] = i + 1;
		cout << setw(4) << monkey[i];
	}
	//cout << endl;
	int x = 1;  //����ѡ��������x������nʱ������һ�����ӣ�
	if (n != 1)
	{
		for (int i = 0, j = 0, k = 0; i != m;)  //���ӳ��֣�ȫ������ѡ�ν�����
		{
			if (monkey[j] != 0)
			{
				if (x != n)
				{
					j++;
					x++;
					if (j > n)
						j = 0;
				}
				else
				{
					monkey_out[k] = monkey[j];
					monkey[j] = 0;
					i++;  //���ּ���
					j++;  //ѭ������
					x = 1;
					k++;
					if (j > n)
						j = 0;
				}
			}
			if (monkey[j] == 0)
			{
				j++;
			}
		}
		cout << "\n�����뿪��˳������:" << endl;
		for (int i = 0; i < m - 1; i++)
		{
			cout << setw(4) << monkey_out[i];
		}
		cout << endl;
		cout << endl;
		cout << "����Ϊ:" << monkey_out[m - 1];
	}
	if (n == 1)
	{
		cout << "\n�����뿪��˳������:" << endl;
		for (int i = 0; i < m - 1; i++)
		{
			cout << setw(4) << monkey[i];
		}
		cout << endl;

		cout << "����Ϊ:" << monkey[m - 1];

		cout << endl;
	}
	getchar();
	getchar();
	return 0;
}
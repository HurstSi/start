#include <iostream>
#include <iomanip>
using namespace std;
#define Max_size 1000
int main()
{
	int m;  //���ӵĸ��� 
	int n;  //��Ȧ�����Ļ��� 
	int Monkey[Max_size] = { 0 };     //����������ĺ��ӣ�����ʼ��Ϊ0����ʾ���ڶ�����
	//start
	//��ӱ�Ҫ�ı������� 
	//end
	cout << "����ѡ����(����洢)" << endl << "==========================" << endl << endl;
	cout << "�������������m:" << endl;
	cin >> m;
	cout << "������Ҫѡ�ļ����n:" << endl;
	cin >> n;
	cout << "ÿ�����ӵ����α��Ϊ:" << endl;
	//������ӵı��,������á�cout<<setw(4)<<XXX; ����XXX��ʾ���ӵ����
	//start
	for (int i = 1; i <= m; i++)
		cout << setw(4) << i;

	//end
	cout << "\n�����뿪��˳������:" << endl;
	//��������Ȧ������¼�뿪��˳��
	int num = m;
	int i = 0;
	int count = 0;


	while (num >= 1)
	{
		i++;
		if (Monkey[i] == 0)
		{
			count++;
			if (count%n == 0)
			{
				Monkey[i] = 1;
				num--;
				if (num > 0)
					cout << setw(4) << i;
				else if (num == 0)
					cout << endl << "\n����Ϊ:" << i;
			}
		}
		if (i == m)
			i = 0;
	}
	//���á�cout<<setw(4)<<XXX����ʽ��� 
	//start
	//end
	cout << endl;
	//������Ĵ���,���á�cout<<"\n����Ϊ:"<<XXX;����ʽ�����

	//end
	system("pause");
	return 0;
}
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a[100], b = 0, sum = 0, four[1000], j;
	cout << "����Բ������:" << endl;
	for (int i = 0; b != -1; i++)
	{
		cin >> b;
		a[i] = b;
		sum++;
	}
	sum--;
	//cout << sum << endl;
	if (sum < 4)
	{
		cout << "�������,���ݲ���4��" << endl;
	}
	else {
		for (j = 0; j < sum - 3; j++)
		{
			four[j] = a[j] + a[j + 1] + a[j + 2] + a[j + 3];
		}
		//cout << "j=" << j<<endl;
		four[j] = a[j] + a[j + 1] + a[j + 2] + a[0];
		//cout << "j=" << j << endl;
		four[j + 1] = a[j + 1] + a[j + 2] + a[0] + a[1];
		//cout << "j=" << j << endl;
		four[j + 2] = a[j + 2] + a[0] + a[1] + a[2];
		//cout << "j=" << j << endl;
		//sort(four, four + sum);

		int max = four[0];//�������ֵ�ǵ�һ����
		int temp = 0;
		for (int y = 1; y < 10; y++)// �����ж�Ѱ�����ֵ 
		{
			if (four[y] > max)
			{
				temp = y;//�������ֵ���±�
				max = four[y];
			}
		}



		cout << "���Բ������:";

		for (int i = 0; i < sum; i++)
		{
			cout << a[i] << " ";
		}
		/*for (int m = 0; m < sum; m++)
		{
			cout << four[m] << endl;
		}*/
		//end
		cout << "\n�ӵ�" << temp + 1 << "�����ݿ�ʼ�������ĸ����ݺ����,Ϊ:" << max << endl;
	}
	system("pause");
	return 0;
}
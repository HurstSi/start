#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a[100], b = 0, sum = 0, four[1000], j;
	cout << "输入圆环数据:" << endl;
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
		cout << "输入错误,数据不足4个" << endl;
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

		int max = four[0];//假设最大值是第一个数
		int temp = 0;
		for (int y = 1; y < 10; y++)// 依次判断寻找最大值 
		{
			if (four[y] > max)
			{
				temp = y;//保存最大值的下标
				max = four[y];
			}
		}



		cout << "输出圆环数据:";

		for (int i = 0; i < sum; i++)
		{
			cout << a[i] << " ";
		}
		/*for (int m = 0; m < sum; m++)
		{
			cout << four[m] << endl;
		}*/
		//end
		cout << "\n从第" << temp + 1 << "个数据开始的连续四个数据和最大,为:" << max << endl;
	}
	system("pause");
	return 0;
}
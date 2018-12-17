#include <iostream>
using namespace std;
#define CLASS 3
#define STU 4
int FindMax(int score[CLASS][STU], int m, int *pRow, int *pCol);

int main()
{
	int score[CLASS][STU], maxScore, row, col;
	cout << "Please enter score:" << endl;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 4; j++)
		{
			cin >> score[i][j];
		}
	/*for (int i = 0; i < 3; i++)
		for (int j = 0; j < 4; j++)
		{
			cout << score[i][j]<<endl;
		}
		*/
		//计算最高分及其学生所在班号和学号//
	maxScore = FindMax(score, CLASS, &row, &col);
	cout << "maxScore = " << maxScore << ", class= " << row + 1 << ", number = " << col + 1 << endl;
	system("pause");
	return 0;
}

int FindMax(int score[CLASS][STU], int m, int *pRow, int *pCol)
{
	*pRow = 0; *pCol = 0;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 4; j++)
		{
			if (score[i][j] > score[*pRow][*pCol])
			{
				m = score[i][j];
				*pRow = i;
				*pCol = j;
			}
		}
	return m;
}
//定义函数FindMax
/*函数功能：计算任意m行STU列二维数组中元素的最大值，并指出其所在行列下标值
函数入口参数：二维整型数组score，存放学生成绩
			  整型变量m，二维整型数组的行数，代表班级数
函数出口参数：整型指针变量pRow，指向数组元素最大值所在的行
			  整型指针变量pCol，指向数组元素最大值所在的列
函数返回值：数组元素的最大值
*/
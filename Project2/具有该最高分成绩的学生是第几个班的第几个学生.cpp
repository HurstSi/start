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
		//������߷ּ���ѧ�����ڰ�ź�ѧ��//
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
//���庯��FindMax
/*�������ܣ���������m��STU�ж�ά������Ԫ�ص����ֵ����ָ�������������±�ֵ
������ڲ�������ά��������score�����ѧ���ɼ�
			  ���ͱ���m����ά�������������������༶��
�������ڲ���������ָ�����pRow��ָ������Ԫ�����ֵ���ڵ���
			  ����ָ�����pCol��ָ������Ԫ�����ֵ���ڵ���
��������ֵ������Ԫ�ص����ֵ
*/
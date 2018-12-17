#include<iostream>    
#include<iomanip>
using namespace std;
void output_message(struct student stu);
void output_title();
struct student
{
	int num;
	char name[20];
	float score;
};
int main()
{
	int i, n;
	float sum = 0;
	bool  flag = true;
	cout << "The number of student:" << endl;
	cin >> n;
	struct student *stu = new struct student[n];
	for (i = 0; i < n; i++)   //从键盘读入n个学生的数据，并累加总成绩
	{
		cout << "\nInput student " << i + 1 << ":" << endl;
		cout << "Number:";
		cin >> stu[i].num;
		cout << "Name:";
		cin >> stu[i].name;
		cout << "Score:";
		cin >> stu[i].score;
	}
	//输出显示全部学生的信息和全班平均分
	cout << "\nAll students:\n";
	output_title();
	for (i = 0; i < n; i++)
	{
		output_message(stu[i]);
	}
	for (i = 0; i < n; i++)
	{
		sum = sum + stu[i].score;
	}
	cout << "\naverage=" << sum / n << endl;  //平均分显示
	//查找最高分和最低分学生并输出显示其信息
	int max_i = 0, min_i = 0;
	for (i = 0; i < n; i++)
	{
		for (int i = 0, max = 0, min = 200; i < n; i++)
		{
			if (stu[i].score > max)
			{
				max = stu[i].score;
				max_i = i;
			}
			if (stu[i].score < min)
			{
				min = stu[i].score;
				min_i = i;
			}
		}
		if (stu[i].score < 60)
		{
			if (flag)
			{
				cout << "\nFail students:\n";
				output_title();
				output_message(stu[i]);
				flag = false;
			}
			else
			{
				output_message(stu[i]);
			}
		}
	}
	cout << "\nmax_score student:\n";
	output_title();
	output_message(stu[max_i]);
	cout << "\nmin_score student:\n";
	output_title();
	output_message(stu[min_i]);
	system("pause");
	return 0;
}
void output_title()
{
	cout << setw(10) << "Number" << setw(10) << "Name" << setw(10) << "Score\n";
}
void output_message(struct student stu)
{
	cout << setw(10) << stu.num << setw(10) << stu.name << setw(10) << stu.score << endl;
}
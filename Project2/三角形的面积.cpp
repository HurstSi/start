#include<iostream>
#include<cmath>
using namespace std;
float area(float a, float b = 4.0, float c = 3.0);
int main()
{
	int a, b, c;
	cout << "����������������a b c:" << endl;
	cin >> a >> b >> c;
	cout << "Ĭ��ֵ:b=4.0,c=3.0" << endl;
	cout << "���������area(a)Ϊ:";
	cout << area(a);
	cout << endl;
	cout << "���������area(a,b)Ϊ:";
	//start
	//�����
	cout << area(a, b);
	//end
	cout << endl;
	cout << "���������area(a,b,c)Ϊ:";
	//start
	//������
	cout << area(a, b, c);
	//end
	cout << endl;
	system("pause");
	return 0;
}
//���庯�����ݺ��׹�ʽ�����
float area(float a, float b, float c)
{
	float s, ar;
	s = (a + b + c) / 2.0;
	ar = sqrt(s*(s - a)*(s - b)*(s - c));
	return ar;
}
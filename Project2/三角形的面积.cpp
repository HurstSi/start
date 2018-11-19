#include<iostream>
#include<cmath>
using namespace std;
float area(float a, float b = 4.0, float c = 3.0);
int main()
{
	int a, b, c;
	cout << "输入三角形三条边a b c:" << endl;
	cin >> a >> b >> c;
	cout << "默认值:b=4.0,c=3.0" << endl;
	cout << "三角形面积area(a)为:";
	cout << area(a);
	cout << endl;
	cout << "三角形面积area(a,b)为:";
	//start
	//面积输
	cout << area(a, b);
	//end
	cout << endl;
	cout << "三角形面积area(a,b,c)为:";
	//start
	//面积输出
	cout << area(a, b, c);
	//end
	cout << endl;
	system("pause");
	return 0;
}
//定义函数根据海伦公式求面积
float area(float a, float b, float c)
{
	float s, ar;
	s = (a + b + c) / 2.0;
	ar = sqrt(s*(s - a)*(s - b)*(s - c));
	return ar;
}
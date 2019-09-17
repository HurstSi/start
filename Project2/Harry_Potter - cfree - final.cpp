#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

typedef struct
{
	vector<string> sentence;
	int id, line, page, count_chapter;
	char bookname[500];
} Memory;

Memory Memory_input(int id, int page, int count_chapter, vector<string> senten, char bkn[]) 
{
	Memory temp;
	temp.id = id;
	temp.page = page;
	temp.count_chapter = count_chapter;
	temp.sentence = senten;
	strcpy(temp.bookname, bkn);
	return temp;
}

vector<Memory> element;
char book[9][500], ToFind[50]; 

void Show(vector<string>::const_iterator beg, vector<string>::const_iterator end) 
{
	while (beg != end)
		cout << *beg++ << " ";
	cout << endl;
}

void Search(char File[], char Name[],int no) 
{
	ifstream infile;
	if (no == 1)
		infile.open("C:\\Users\\sizhe\\iCloudDrive\\文档\\Vscode\\4\\Final\\HP2--Harry_Potter_and_the_Chamber_of_Secrets_Book_2_.txt", ifstream::in);
	if (no == 2)
		infile.open("C:\\Users\\sizhe\\iCloudDrive\\文档\\Vscode\\4\\Final\\HP7--Harry_Potter_and_the_Deathly_Hallows_Book_7_.txt", ifstream::in);
	if (no == 3)
		infile.open("C:\\Users\\sizhe\\iCloudDrive\\文档\\Vscode\\4\\Final\\J.K. Rowling - HP 0 - Harry Potter Prequel.txt", ifstream::in);
	if (no == 4)
		infile.open("C:\\Users\\sizhe\\iCloudDrive\\文档\\Vscode\\4\\Final\\J.K. Rowling - HP 3 - Harry Potter and the Prisoner of Azkaban.txt", ifstream::in);
	if (no == 5)
		infile.open("C:\\Users\\sizhe\\iCloudDrive\\文档\\Vscode\\4\\Final\\J.K. Rowling - HP 4 - Harry Potter and the Goblet of Fire.txt", ifstream::in);
	if (no == 6)
		infile.open("C:\\Users\\sizhe\\iCloudDrive\\文档\\Vscode\\4\\Final\\J.K. Rowling - HP 6 - Harry Potter and the Half-Blood Prince.txt", ifstream::in);
	if (no == 7)
		infile.open("C:\\Users\\sizhe\\iCloudDrive\\文档\\Vscode\\4\\Final\\J.K. Rowling - Quidditch Through the Ages.txt", ifstream::in);
	if (no == 8)
		infile.open("C:\\Users\\sizhe\\iCloudDrive\\文档\\Vscode\\4\\Final\\J.K. Rowling - The Tales of Beedle the Bard.txt", ifstream::in);
	if (!infile)
	{
		cout << "打开文件错误！" << endl;
		exit(1);
	}
	int page = 1, line = 0, count_chapter = 0;
	static int id = 0; 
	string str;
	while (getline(infile, str))
	{
		istringstream stream(str);
		bool Found = false, flag = true;
		vector<string> sentence;
		string word;
		++line;
		int sumsum = 0;
		while (stream >> word)
		{
			if (word[0] >= '0' && word[0] <= '9' && str.length()<=3)
			{
				if (word.length() == 1)
					page = word[0] - '0'+1; 
				else if (word.length() == 2)
					page = (word[0] - '0') * 10 + word[1] - '0'+1; 
				else if( word.length() == 3)
					page = (word[0] - '0') * 100 + (word[1] - '0') * 10 + word[2] - '0'+1;
			}
			if (word[0] >= 'C' && word[0] <= 'C' && word[1] >= 'H' && word[1] <= 'H' && word[2] >= 'A' && word[2] <= 'A' && word[3] >= 'P' && word[3] <= 'P' || word[0] >= 'C' && word[0] <= 'C' && word[1] >= 'h' && word[1] <= 'h' && word[2] >= 'a' && word[2] <= 'a' && word[3] >= 'p' && word[3] <= 'p') //判断章节
			{
				count_chapter++;
			}
			int pos = 0;
			int l1, l2; 
			l1 = word.length();
			l2 = strlen(Name);
			for (int i = 0; i < l1; i++)
			{
				if (word[i] == Name[0])
				{
					int flag = 1;
					int k = i;
					for (int j = 1; j < l2; j++)
					{
						if (word[++k] != Name[j])
						{
							flag = 0;
							break;
						}
					}
					if (flag == 1 )
					{
						sumsum++;
						Found = true;
					}
				}
			}
			if (flag) 
				sentence.push_back(word);

			if (word[word.length() - 1] == '.' && !Found) 
				sentence.clear();
			else if (word[word.length() - 1] == '.') 
				flag = false;
		}
		for (int u = 0; u < sumsum; u++)
		{
			if (Found)
				element.push_back(Memory_input(++id, page, count_chapter, sentence, File));
		}
	}
	return;
}

void PrintResult()
{
	cout << "序号" << "\t" << "人名/地名" << "\t" << "页码" << "\t" << "章节" << "\t" << "\t""\t" << "\t" << "书名" << endl;
	for (vector<Memory>::const_iterator iter = element.begin(); iter != element.end(); iter++)
		cout << iter->id << "\t" << ToFind << "\t" << "\t" << iter->page << "\t" << iter->count_chapter << "\t" << iter->bookname << endl;
	cout << "序号" << "\t" << "人名/地名" << "\t" <<"\t" <<  "页码" << "\t" << "章节" << "\t" << "\t""\t" << "\t" << "书名" << endl;
	int ID;
	cout << "搜索完成，“" << ToFind << " ”这个单词在所有书目中出现了" << element.size() << "次。" << endl << "请输入要查询的句子对应的编号（如果输入“0”则退出）：" << endl;
	cin >> ID;
	while (ID != 0)
	{
		for (vector<Memory>::const_iterator iter = element.begin(); iter != element.end(); iter++)
			if (iter->id == ID)
				Show((iter->sentence).begin(), (iter->sentence).end());
		cin >> ID;
	}
	return;
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	strcpy(book[1], "HP2--Harry_Potter_and_the_Chamber_of_Secrets_Book_2_.txt");
	strcpy(book[2], "HP7--Harry_Potter_and_the_Deathly_Hallows_Book_7_.txt");
	strcpy(book[3], "J.K. Rowling - HP 0 - Harry Potter Prequel.txt");
	strcpy(book[4], "J.K. Rowling - HP 3 - Harry Potter and the Prisoner of Azkaban.txt");
	strcpy(book[5], "J.K. Rowling - HP 4 - Harry Potter and the Goblet of Fire.txt");
	strcpy(book[6], "J.K. Rowling - HP 6 - Harry Potter and the Half-Blood Prince.txt");
	strcpy(book[7], "J.K. Rowling - Quidditch Through the Ages.txt");
	strcpy(book[8], "J.K. Rowling - The Tales of Beedle the Bard.txt");
	cout << "请输入要查询的单词：" << endl;
	cin >> ToFind;
	for (int i = 1; i <= 8; i++)
		Search(book[i], ToFind, i);

	PrintResult();
	return 0;
}
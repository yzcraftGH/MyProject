#include<iostream>
#include<string>
#include <typeinfo>
#include "Student.h"
using namespace std;
const int lim = 5;

//函数的实现
void Student::add(Student* stu)
{
	string fname[lim] = { "A","B","C","D","E" };
	int fscore[lim];
	//让用户输入每个同学的分数
	for (int i = 0; i < lim; i++)
	{
		while (1)
		{
			cout << "enter" << fname[i] << "\'s score: ";
			cin >> fscore[i];
			//判断输入的数据是否正确
			if (cin.good())
			{
				break;
			}
			else
			{
				cout << "非法的输入内容" << endl;
				cin.clear();
				//清空cin的缓存区
				while (cin.get() != '\n')
				{
					continue;
				}
			}
		}

	}
	//循环赋值
	for (int i = 0; i < lim; i++)
	{
		stu[i].name = fname[i];
		stu[i].score = fscore[i];
	}
	system("cls");
}

void Student::sort(Student* stu)
{
	//冒泡排序
	for (int i = 0; i < lim; i++)
	{
		for (int j = 0; j < lim - i -1; j++)
		{
			if (stu[j].score < stu[j + 1].score)
			{
				Student temp = stu[j];
				stu[j] = stu[j + 1];
				stu[j + 1] = temp;
			}
		}
	}
}

void Student::show(Student stu[])
{
	//循环遍历数组
	for (int i = 0; i < lim; i++)
	{
		cout << i + 1 << "-> " << stu[i].name << "\' score is "
			<< stu[i].score << endl;
	}
}

void Student::setInfo(Student* stu)
{
	//添加备注信息
	while (1)
	{
		int BorS;
		cout << "按1开始，按0退出" << endl;
		while (1)
		{
			cin >> BorS;
			if (cin.good())
			{
				break;
			}
			else
			{
				cout << "非法的输入内容" << endl;
				cin.clear();
				while (cin.get() != '\n')
				{
					continue;
				}
			}
		}
		system("cls");
		while (1)
		{
			if (BorS == 1)
			{
				cout << "输入您要设置备注的学生的姓名 （0退出）：";
				string stuCh;
				cin >> stuCh;
				if (stuCh == "0")
				{
					break;
				}
				for (int i = 0; i < lim; i++)
				{
					if (stu[i].name == stuCh)
					{
						cout << "输入 " << stu[i].name << " 的备注：";
						cin >>stu[i].info;
					}

				}
			}
			else if (BorS == 0)
			{
				break;
			}
			else
			{
				cout << "非法输入内容" << endl;
				system("pause");
				system("cls");
			}
			
		}
		break;
	}
	system("cls");
}

void Student::showInfo(Student* stu)
{
	//显示所有信息
	for (int i = 0; i < lim; i++)
	{
		cout << "姓名：" << stu[i].name << " 分数：" << stu[i].score << " 备注:" << stu[i].info << endl;
	}
	system("pause");
	system("cls");
}


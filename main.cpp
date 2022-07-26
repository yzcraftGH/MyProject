#include<iostream>
#include<string>
#include"Student.h"
using namespace std;
const int lim = 5;
Student stu[lim];
//定义欢迎界面
void ui()
{
	cout << "==================================" << endl;
	cout << "|********************************|" << endl;
	cout << "|********************************|" << endl;
	cout << "|**********   WELCOME  **********|" << endl;
	cout << "|********************************|" << endl;
	cout << "|********************************|" << endl;
	cout << "==================================" << endl;
	system("pause");
	system("cls");
}
//定义开发人员列表
void programmer()
{
	cout << "开发人员列表：" << endl;
	cout << "================" << endl;
	cout << "|              |" << endl;
	cout << "|     余震     |" << endl;
	cout << "|              |" << endl;
	cout << "================" << endl;
	system("pause");
	system("cls");
}
//定义更新日志
void updateData()
{
	cout << "=======更新日志=======" << endl;
	cout << "1.使用了类来进行排序" << endl;
	cout << "2.将文件分开储存为：Student.h | Student.cpp | main.cpp" << endl;
	cout << "3.优化流程,减少了goto指令的使用以及在流程选择中使用IF-ELSE IF ---ELSE" << endl;
	cout << "4.移除了herobrine." << endl;
	system("pause");
	system("cls");
}
//使用类方法进行排名
void scoreSorting()
{

	
	cout << "排名前：" << endl;
	Student::show(stu);
	system("pause");
	system("cls");
	Student::sort(stu);
	cout << "排名后" << endl;
	Student::show(stu);
	system("pause");
	system("cls");
}
//设置备注
void setStuInfo()
{
	Student::setInfo(stu);
}
//显示所有信息
void mainShowInfo()
{
	Student::showInfo(stu);
}
//添加姓名等信息
void AddInfo()
{
	Student::add(stu);
}

//程序运行主体
void body()
{
	ui();
	string username;
	string passwd;
	while (true)
	{
		//密码系统-如果账号密码验证不通过，则循环显示此界面
		cout << "enter your username:";
		cin >> username;
		cout << "enter your password:";
		cin >> passwd;
		if (username == "root" && passwd == "toor")
		{
			system("cls");
			int cho;
			//循环主体 按0退出
			while (true)
			{
				cout << "按 1 开始排名(先按 6 添加基本信息！)" << endl;
				cout << "按 2 查看开发者列表" << endl;
				cout << "按 3 查看更新日志" << endl;
				cout << "按 4 备注学生信息(先按 6 添加基本信息！)" << endl;
				cout << "按 5 显示学生所有信息(先按 6 添加基本信息！)" << endl;
				cout << "按 6 添加姓名分数等信息" << endl;
				cout << "按 0 退出" << endl;
				while (1)
				{
					cin >> cho;
					if (cin.good())
					{
						break;
					}
					else
					{
						cout << "非法的输入内容" << endl;
						cin.clear();//标记cin为正确使其可再次输入
						while (cin.get() != '\n')
						{
							continue;
						}
					}
				}
				system("cls");
			
				if (cho == 1)
				{
					scoreSorting();
				}
				else if (cho == 2)
				{
					programmer();
				}
				else if (cho == 3)
				{
					updateData();
				}
				else if (cho == 4)
				{
					setStuInfo();
				}
				else if (cho == 5)
				{
					mainShowInfo();
				}
				else if (cho == 6)
				{
					AddInfo();
				}
				else if (cho == 0)
				{
					//退出内层循环
					break;
				}
				else
				{
					cout << "表达式错误！" << endl;
					system("pause");
					system("cls");
				}
			}
			//退出外层循环
			break;
		}
		else
		{
			//密码错误的提示语
			cout << "Wrong username or passworld." << endl;
			system("pause");
			system("cls");
		}
	}
}
//MAIN函数
int main()
{
	//调用body()运行
	body();
	
	return 0;
}

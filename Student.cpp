#include<iostream>
#include<string>
#include <typeinfo>
#include "Student.h"
using namespace std;
const int lim = 5;

//������ʵ��
void Student::add(Student* stu)
{
	string fname[lim] = { "A","B","C","D","E" };
	int fscore[lim];
	//���û�����ÿ��ͬѧ�ķ���
	for (int i = 0; i < lim; i++)
	{
		while (1)
		{
			cout << "enter" << fname[i] << "\'s score: ";
			cin >> fscore[i];
			//�ж�����������Ƿ���ȷ
			if (cin.good())
			{
				break;
			}
			else
			{
				cout << "�Ƿ�����������" << endl;
				cin.clear();
				//���cin�Ļ�����
				while (cin.get() != '\n')
				{
					continue;
				}
			}
		}

	}
	//ѭ����ֵ
	for (int i = 0; i < lim; i++)
	{
		stu[i].name = fname[i];
		stu[i].score = fscore[i];
	}
	system("cls");
}

void Student::sort(Student* stu)
{
	//ð������
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
	//ѭ����������
	for (int i = 0; i < lim; i++)
	{
		cout << i + 1 << "-> " << stu[i].name << "\' score is "
			<< stu[i].score << endl;
	}
}

void Student::setInfo(Student* stu)
{
	//��ӱ�ע��Ϣ
	while (1)
	{
		int BorS;
		cout << "��1��ʼ����0�˳�" << endl;
		while (1)
		{
			cin >> BorS;
			if (cin.good())
			{
				break;
			}
			else
			{
				cout << "�Ƿ�����������" << endl;
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
				cout << "������Ҫ���ñ�ע��ѧ�������� ��0�˳�����";
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
						cout << "���� " << stu[i].name << " �ı�ע��";
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
				cout << "�Ƿ���������" << endl;
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
	//��ʾ������Ϣ
	for (int i = 0; i < lim; i++)
	{
		cout << "������" << stu[i].name << " ������" << stu[i].score << " ��ע:" << stu[i].info << endl;
	}
	system("pause");
	system("cls");
}


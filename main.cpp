#include<iostream>
#include<string>
#include"Student.h"
using namespace std;
const int lim = 5;
Student stu[lim];
//���延ӭ����
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
//���忪����Ա�б�
void programmer()
{
	cout << "������Ա�б�" << endl;
	cout << "================" << endl;
	cout << "|              |" << endl;
	cout << "|     ����     |" << endl;
	cout << "|              |" << endl;
	cout << "================" << endl;
	system("pause");
	system("cls");
}
//���������־
void updateData()
{
	cout << "=======������־=======" << endl;
	cout << "1.ʹ����������������" << endl;
	cout << "2.���ļ��ֿ�����Ϊ��Student.h | Student.cpp | main.cpp" << endl;
	cout << "3.�Ż�����,������gotoָ���ʹ���Լ�������ѡ����ʹ��IF-ELSE IF ---ELSE" << endl;
	system("pause");
	system("cls");
}
//ʹ���෽����������
void scoreSorting()
{

	
	cout << "����ǰ��" << endl;
	Student::show(stu);
	system("pause");
	system("cls");
	Student::sort(stu);
	cout << "������" << endl;
	Student::show(stu);
	system("pause");
	system("cls");
}
//���ñ�ע
void setStuInfo()
{
	Student::setInfo(stu);
}
//��ʾ������Ϣ
void mainShowInfo()
{
	Student::showInfo(stu);
}
//�����������Ϣ
void AddInfo()
{
	Student::add(stu);
}

//������������
void body()
{
	ui();
	string username;
	string passwd;
	while (true)
	{
		//����ϵͳ-����˺�������֤��ͨ������ѭ����ʾ�˽���
		cout << "enter your username:";
		cin >> username;
		cout << "enter your password:";
		cin >> passwd;
		if (username == "root" && passwd == "toor")
		{
			system("cls");
			int cho;
			//ѭ������ ��0�˳�
			while (true)
			{
				cout << "�� 1 ��ʼ����(�Ȱ� 6 ��ӻ�����Ϣ��)" << endl;
				cout << "�� 2 �鿴�������б�" << endl;
				cout << "�� 3 �鿴������־" << endl;
				cout << "�� 4 ��עѧ����Ϣ(�Ȱ� 6 ��ӻ�����Ϣ��)" << endl;
				cout << "�� 5 ��ʾѧ��������Ϣ(�Ȱ� 6 ��ӻ�����Ϣ��)" << endl;
				cout << "�� 6 ���������������Ϣ" << endl;
				cout << "�� 0 �˳�" << endl;
				while (1)
				{
					cin >> cho;
					if (cin.good())
					{
						break;
					}
					else
					{
						cout << "�Ƿ�����������" << endl;
						cin.clear();//���cinΪ��ȷʹ����ٴ�����
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
					//�˳��ڲ�ѭ��
					break;
				}
				else
				{
					cout << "���ʽ����" << endl;
					system("pause");
					system("cls");
				}
			}
			//�˳����ѭ��
			break;
		}
		else
		{
			//����������ʾ��
			cout << "Wrong username or passworld." << endl;
			system("pause");
			system("cls");
		}
	}
}
//MAIN����
int main()
{
	//����body()����
	body();
	
	return 0;
}
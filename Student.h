//Student.h
//@YZ
//class Student
#ifndef STUDENT_H_
#define STUDENT_H_
#include <string>

class Student
{
private:
	std::string name;
	int score = 0;
	std::string info = "None";
public:
    void static add(Student* stu);
	void static sort(Student* stu);
	void static show(Student stu[]);
	void static setInfo(Student * stu);
	void static showInfo(Student* stu);
};
// std::string name ->ѧ��������
// int score->ѧ���ķ���
// std::string info = "None" -> ѧ�����зֵı�ע
//void static add(Student* stu);->�ȴ���һ��student������飬�ٴ���ȥ��ȡ�����ͷ���
//void static sort(Student* stu);->�Ѿ�������ĺ�������������鴫��ȥ����������
//void static show(Student stu[]);->�����մ���������鴫��ȥ��ʾ����


#endif

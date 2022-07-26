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
// std::string name ->学生的姓名
// int score->学生的分数
// std::string info = "None" -> 学生操行分的备注
//void static add(Student* stu);->先创建一个student类的数组，再传进去获取姓名和分数
//void static sort(Student* stu);->把经过上面的函数处理过的数组传进去，进行排序
//void static show(Student stu[]);->把最终处理完的数组传进去显示数组


#endif

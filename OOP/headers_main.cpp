#include "headers/main.h"


int main()
{
    Student student;
    
    student.history_group_num = 54;
    student.math_group_num = 91;
    student.biology_group_num = 2;
    student.SumOfGroups();

    std::cout << "Students :: " << student.SumOfGroups();
    student.GroupParticipants();
    std::cout << std::endl;
    std::cout << student.GetMax();
    return 0;
}

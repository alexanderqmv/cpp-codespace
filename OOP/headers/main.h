
#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <iterator>



class School
{   
    private:
        friend class Student;
    private:
        virtual int SumOfGroups() = 0;
        virtual void GroupParticipants() = 0;
        virtual int GetMax() = 0;
               
};

class Student : private School 
{
    public:
        int SumOfGroups() override 
        {
            return (math_group_num + biology_group_num + history_group_num);
        }
        
        void GroupParticipants() override 
        {
            std::cout << std::endl;
            std::cout << "Math Group :: " << math_group_num << std::endl;
            std::cout << "Biology Group :: " << biology_group_num << std::endl;
            std::cout << "History Group :: " << history_group_num << std::endl;
        }

        int GetMax() override 
        {
            if (math_group_num > biology_group_num && math_group_num > history_group_num)
            {   
                std::cout << "Most Students are studing in Math Group :: ";
                return math_group_num;
            }
            else if (biology_group_num > math_group_num && biology_group_num > math_group_num)
            {
                std::cout << "Most Students are studing in Biology Group :: ";
                return biology_group_num;
            }
            else if (history_group_num > math_group_num && history_group_num > biology_group_num)
            {   
                std::cout << "Most Students are studing in History Group :: ";
                return history_group_num;
            }
            else 
            {   
                std::cerr << "\033[31mUknown. Program exit code ";
                return 1;
            }
            
        }

        
    
        int32_t student_all;
        int32_t math_group_num;
        
        int32_t biology_group_num;
        int32_t history_group_num; 

};

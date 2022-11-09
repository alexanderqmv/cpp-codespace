#include <cstdio>
#include <cstdlib>

struct Student 
{
	int age;
	char name[30];
};

void Student_print(Student *x){
	printf("%d",x->age);
}

int main(int argc, char const *argv[])
{
	Student s;
	Student_print(&s);

 

	
	return 0;
}

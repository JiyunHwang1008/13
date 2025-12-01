#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student{
	int ID;//학번
	char name[20];//이름
	double grade;//학점 
	
};

int main(int argc, char *argv[]) {
	
	//변수 선언 및 초기화
	struct student stud = {10, "Juyeop", 4.3};
	struct student *stdPtr;
	
	stdPtr = &stud;
	
	//학번 이름 학점 값 변경
	stdPtr->ID = 17;
	strcpy(stdPtr->name, "KIM");
	stdPtr->grade = 2.0;
	
	//각각 출력 
	printf("ID : %i, name: %s, grade : %lf\n",
	stdPtr->ID, stdPtr->name, stdPtr->grade);
	
	system("PAUSE");
	return 0;
}



//*

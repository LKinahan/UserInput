////////////////////////////////////////////////////////////////////////////
// ELEX 4618 - Lab 1: User Input
// Created Jan 08, 2021 
// By Laurel Kinahan
////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// function delcarations
void print_menu(void);		// display main menu on screen
void add_student(void);		// add student to class list
void edit_student(void);	// edit student in class list
void print_grades(void);	// print class list with grades

// initialize number of students in grade system to zero
int number_of_students = 0;
// initialize student data to edit to zero
int edit_student_data = 0;
// initialize student count
int student_count;

// struct to hold hold each grade variable
struct student_grades
	{
	char student_number[10];
	float lab_grade;
	float quiz_grade;
	float midterm_grade;
	float final_exam_grade;
	float final_grade;
	}
// max class size is 100, stored as global variable
student[100];	// fixed 100 array


int main()
{			
	while(1)	// infinite loop
	{
		print_menu();	// display print_menu at start
		char selection = _getch();	// hold users selection as a char
		printf("\nCMD> %c\n", selection);	// print users selection on screen
		switch (selection)	// case for each selection option
		{
			// if 'A' or 'a' selected then call function add_student
		case 'A': printf("\nAdding student\n");
			add_student();
			number_of_students ++;
			break;
		case 'a': add_student();
			number_of_students++;
			break;
			// if 'E' or 'e' selected then call function edit_student
		case 'E': printf("\nStudent to edit: ");
			edit_student();
			break;
		case 'e': printf("\nStudent to edit: ");
			edit_student();
			break;
			// if 'P' or 'p' selected then call function print_grades
		case 'P': print_grades();
			break;
		case 'p': print_grades();
			break;
			// if 'Q' or 'q' selected then exit program
		case 'Q': return 0;
			break;
		case 'q': return 0;
			break;
		}
	}
	return 0;
}

/////////////////////////////////////////////////////////////////////////////
//		PRINT_MENU FUNCTION
/////////////////////////////////////////////////////////////////////////////
void print_menu(void)
{
	printf("\n\n****************************************");
	printf("\n\nELEX4618 Grade system, by Laurel Kinahan");
	printf("\n\n****************************************");
	printf("\n\n(A)dd student");
	printf("\n\n(E)dit student");
	printf("\n\n(P)rint grades");
	printf("\n\n(Q)uit\n");
}

/////////////////////////////////////////////////////////////////////////////
//		ADD_STUDENT FUNCTION
/////////////////////////////////////////////////////////////////////////////
 void add_student(void)
 {
	 printf("\nStudent Number: ");
	 scanf_s("%s", student[number_of_students].student_number, 10);
	 printf("Lab Grade: ");
	 scanf_s("%f", &student[number_of_students].lab_grade);
	 printf("Quiz Grade: ");
	 scanf_s("%f", &student[number_of_students].quiz_grade);
	 printf("Midterm Grade: ");
	 scanf_s("%f", &student[number_of_students].midterm_grade);
	 printf("Final Exam Grade: ");
	 scanf_s("%f", &student[number_of_students].final_exam_grade);
	 // lab grade is 40% of total grade, quiz grade is 10% of total grade, midterm is 20% of total grade, final exam is 30% of total grade
	 student[number_of_students].final_grade = ((0.4 * student[number_of_students].lab_grade) + (0.1 * student[number_of_students].quiz_grade) + (0.2 * student[number_of_students].midterm_grade) + (0.3 * student[number_of_students].final_exam_grade));
 }

/////////////////////////////////////////////////////////////////////////////
//		EDIT_STUDENT FUNCTION
/////////////////////////////////////////////////////////////////////////////
 void edit_student(void)
 {
	 scanf_s("%d", &edit_student_data - 1);
	 printf("Student Number: ");
	 scanf_s("%s", &student[edit_student_data].student_number, 10);
	 printf("Lab Grade: ");
	 scanf_s("%f", &student[edit_student_data].lab_grade);
	 printf("Quiz Grade: ");
	 scanf_s("%f", &student[edit_student_data].quiz_grade);
	 printf("Midterm Grade: ");
	 scanf_s("%f", &student[edit_student_data].midterm_grade);
	 printf("Final Exam Grade: ");
	 scanf_s("%f", &student[edit_student_data].final_exam_grade);
	 // lab grade is 40% of total grade, quiz grade is 10% of total grade, midterm is 20% of total grade, final exam is 30% of total grade
	 student[edit_student_data].final_grade = ((0.4 * student[edit_student_data].lab_grade) + (0.1 * student[edit_student_data].quiz_grade) + (0.2 * student[edit_student_data].midterm_grade) + (0.3 * student[edit_student_data].final_exam_grade));
 }

/////////////////////////////////////////////////////////////////////////////
//		PRINT_GRADES FUNCTION
/////////////////////////////////////////////////////////////////////////////
 void print_grades(void)
 {
	 printf("\n#\tStudent\t\tLab\tQuiz\tMidterm\t\tFinal Exam\tFinal Grade");
	 for (student_count = 0; student_count < number_of_students; student_count ++)
	{
		 printf("\n%d", student_count + 1);
		 printf("\t%s", student[student_count].student_number);
		 printf("\t%.1f", student[student_count].lab_grade);
		 printf("\t%.1f", student[student_count].quiz_grade);
		 printf("\t%.1f", student[student_count].midterm_grade);
		 printf("\t\t%.1f", student[student_count].final_exam_grade);
		 printf("\t\t%.2f", student[student_count].final_grade);
	}
 }

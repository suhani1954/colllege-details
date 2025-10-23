/* Make structures to store the details of
students, teachers, admins in your college (in detailed) */
#include <stdio.h>
#include <string.h>

// Student structure
typedef struct student
{
    char name[100];
    int roll_no;
    int adm_no;
    float cgpa;
    float attendance;
} stu;

// Teacher structure
typedef struct teacher
{
    char name[100];
    char gender;        // Changed to single char
    long long phone_no; // Changed to long long for phone numbers
    char job_title[500];
    int salary;
} tea;

// Admin structure
typedef struct admin
{
    char name[100];
    char gender;        // Changed to single char
    long long phone_no; // Changed to long long
    char job_title[500];
    int salary;
} adm;

// Function to display student details
void display_student(stu s, int num)
{
    printf("\n--- Student %d ---\n", num);
    printf("Name: %s\n", s.name);
    printf("Roll No: %d\n", s.roll_no);
    printf("Admission No: %d\n", s.adm_no);
    printf("CGPA: %.2f\n", s.cgpa);
    printf("Attendance: %.2f%%\n", s.attendance);
}

// Function to display teacher details
void display_teacher(tea t, int num)
{
    printf("\n--- Teacher %d ---\n", num);
    printf("Name: %s\n", t.name);
    printf("Gender: %c\n", t.gender);
    printf("Phone No: %lld\n", t.phone_no);
    printf("Job Title: %s\n", t.job_title);
    printf("Salary: Rs. %d\n", t.salary);
}

// Function to display admin details
void display_admin(adm a, int num)
{
    printf("\n--- Admin %d ---\n", num);
    printf("Name: %s\n", a.name);
    printf("Gender: %c\n", a.gender);
    printf("Phone No: %lld\n", a.phone_no);
    printf("Job Title: %s\n", a.job_title);
    printf("Salary: Rs. %d\n", a.salary);
}

int main()
{
    // Student records
    stu s1 = {"Prajakta", 145, 5654, 7.6, 87.66};
    stu s2 = {"Dia", 146, 5498, 6.9, 87.66};
    stu s3 = {"Seerat", 147, 3554, 9.6, 90.87};
    stu s4 = {"Dharaya", 148, 5604, 9.0, 70.45};
    stu s5 = {"Vivaan", 149, 5344, 8.5, 66.66};

    // Teacher records
    tea t1 = {"Mahadevaswamy", 'M', 6553569870LL, "Chemistry Department Head", 50000};
    tea t2 = {"Shalini", 'F', 9935656750LL, "Maths HOD", 100000};
    tea t3 = {"Nikita", 'F', 8474925767LL, "English Teacher", 40000};
    tea t4 = {"Jakie", 'M', 9818854123LL, "Physics Department Head", 60000};
    tea t5 = {"Aayushi", 'F', 4693564680LL, "CS Teacher", 80000};

    // Admin records
    adm a1 = {"Lovely", 'M', 7856464343LL, "HR Manager", 20000};
    adm a2 = {"Shanaya", 'F', 7856464344LL, "Language Department Coordinator", 100000};
    adm a3 = {"Rajesh", 'M', 7856464345LL, "Accountant", 35000};
    adm a4 = {"Priya", 'F', 7856464346LL, "Admissions Officer", 30000};
    adm a5 = {"Amit", 'M', 7856464347LL, "Office Administrator", 25000};

    // Display all records
    printf("========================================\n");
    printf("\n========================================\n");
    printf("     COLLEGE MANAGEMENT SYSTEM\n");
    printf("========================================\n");
    printf("\n========================================\n");

    printf("\n********** STUDENT DETAILS **********\n");
    display_student(s1, 1);
    display_student(s2, 2);
    display_student(s3, 3);
    display_student(s4, 4);
    display_student(s5, 5);

    printf("\n\n********** TEACHER DETAILS **********\n");
    display_teacher(t1, 1);
    display_teacher(t2, 2);
    display_teacher(t3, 3);
    display_teacher(t4, 4);
    display_teacher(t5, 5);

    printf("\n\n********** ADMIN DETAILS **********\n");
    display_admin(a1, 1);
    display_admin(a2, 2);
    display_admin(a3, 3);
    display_admin(a4, 4);
    display_admin(a5, 5);

    printf("\n========================================\n");
    printf("\n========================================\n");

    return 0;
}

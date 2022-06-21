#include <iostream>
#include <cstring>
using namespace std;

struct student
{
    char name[100];
    int roll;
    float cgpa;
};

typedef struct computerEngineeringStudent
{
    int roll;
    float cgpa;
    char name[100];
} ces;

void printInfo(struct student s1);

int main()
{
    struct student s1;
    strcpy(s1.name, "MSI");
    s1.roll = 75;
    s1.cgpa = 3.75;

    struct student s2 = {"SI", 25, 4.83};
    struct student s3 = {0};

    cout << s2.name << endl;
    cout << s2.roll << endl;
    cout << s2.cgpa << endl;

    cout << s3.roll << endl;

    struct student *ptr = &s1;

    cout << ptr->name << endl;
    cout << ptr->roll << endl;
    cout << ptr->cgpa << endl;

    printInfo(s1);
}

void printInfo(struct student s1)
{
    cout << "Student Info : " << endl;
    cout << s1.name << endl;
    cout << s1.roll << endl;
    cout << s1.cgpa << endl;
}
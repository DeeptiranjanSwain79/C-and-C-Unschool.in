#include<stdio.h>
#include<string.h>
struct Employee{  // Creating structure
    char Name[70];
    int EmID, salary;
    float experience;
}e1, e2, e3, e4, e5;  //Declaring variables of the structure
int main(){
    // Assigning values to the variables
    strcpy(e1.Name,"Deeptiranjan Swain");
    e1.EmID = 2001289332;
    e1.salary = 70000;
    e1.experience = 7.5;

    strcpy(e2.Name,"Nibedita Behera");
    e2.EmID = 2001289335;
    e2.salary = 70000;
    e2.experience = 7.5;

    strcpy(e3.Name,"Biswajit Behera");
    e3.EmID = 2001289333;
    e3.salary = 45000;
    e3.experience = 5;

    strcpy(e4.Name,"Satyajit Parida");
    e4.EmID = 2001289331;
    e4.salary = 40000;
    e4.experience = 4.5;

    strcpy(e5.Name,"Rajdeep Swain");
    e5.EmID = 2001289330;
    e5.salary = 70000;
    e5.experience = 7.5;
    // Printing the values stored in variables
    printf("\n Name of Employee 1: %s", e1.Name);
    printf("\n His/Her Employee ID: %d", e1.EmID);
    printf("\n His/Her Salary: %d",e1.salary);
    printf("\n His/Her experience: %d Years", e1.experience);

    printf("\n Name of Employee 2: %s", e2.Name);
    printf("\n His/Her Employee ID: %d", e2.EmID);
    printf("\n His/Her Salary: %d",e2.salary);
    printf("\n His/Her experience: %d Years", e2.experience);

    printf("\n Name of Employee 3: %s", e3.Name);
    printf("\n His/Her Employee ID: %d", e3.EmID);
    printf("\n His/Her Salary: %d",e3.salary);
    printf("\n His/Her experience: %f Years", e3.experience);

    printf("\n Name of Employee 4: %s", e4.Name);
    printf("\n His/Her Employee ID: %d", e4.EmID);
    printf("\n His/Her Salary: %d",e4.salary);
    printf("\n His/Her experience: %f Years", e4.experience);

    printf("\n Name of Employee 5: %s", e5.Name);
    printf("\n His/Her Employee ID: %d", e5.EmID);
    printf("\n His/Her Salary: %d",e5.salary);
    printf("\n His/Her experience: %f Years", e5.experience);
}

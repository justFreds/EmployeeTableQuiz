//Compile using the following command: gcc employeeMain.c employeeTable.c employeeOne.c
//gcc employeeMain.c employeeTable.c employeeTwo.c 
#include <string.h> 
#include <stdlib.h> 
#include "employee.h" 

int main(void) { 
    //defined in employeeSearchOne.c ---defining function created in employeeOne.c
    PtrToEmployee searchEmployeeByNumber(const Employee table[], int sizeTable, long numberToFind);
    PtrToEmployee searchEmployeeByName(const Employee table[], int sizeTable, char * nameToFind);  

    //defined in employeeTable.c ---don't allocate space for these
    extern Employee EmployeeTable[];  
    extern const int EmployeeTableEntries;   

    PtrToEmployee matchPtr;  //Declaration --already a pointer declared in employee.h
    matchPtr = searchEmployeeByNumber(EmployeeTable, EmployeeTableEntries, 1045);  

    //Example not found 
    if (matchPtr != NULL) 
        printf("Employee ID 1045 is in record %d\n", matchPtr - EmployeeTable); 
    else 
        printf("Employee ID is NOT found in the record\n");  

    //Example found 
    matchPtr = searchEmployeeByName(EmployeeTable, EmployeeTableEntries, "Tony Bobcat"); 
    if (matchPtr != NULL) 
        printf("Employee Tony Bobcat is in record %d\n", matchPtr - EmployeeTable); 
    else 
        printf("Employee Tony Bobcat is NOT found in the record\n");      

    return EXIT_SUCCESS; 
}    
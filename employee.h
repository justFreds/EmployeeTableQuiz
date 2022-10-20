#include <stdio.h>  
#include <stddef.h> 

typedef struct {
    long number; //4bytes
    char *name;  //4bytes
    char *phone; //4bytes
    double salary; //8bytes
    //worst case scenario is 8bytes so previous 3 pad 4bytes to become 8
    //total of 32 bytes 
} Employee, *PtrToEmployee; 
typedef const Employee *PtrToConstEmployee; 
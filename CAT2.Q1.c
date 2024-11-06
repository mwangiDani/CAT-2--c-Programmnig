/*
Name: MWANGI DANIEL GITARI
DATE: 6/11/24
REG NO : CT101/G/21346/24
PROGRAM FOR CAT TWO QUESTION ONE STRUCTURE
*/
 




#include <stdio.h>
#include <string.h>

struct employee {
	char name [25];
	int Id;
	char Department[20];
	float salary ;
	char email [50];
	
    }employee1;
    
 int main (){
	 strcpy(employee1.name,"john.Doe");
	 employee1.Id=12345;
	 strcpy(employee1.Department,"human resources");
	 employee1.salary=55000.50;
	 strcpy(employee1.email,"johndoe@company.com");
	 
	 printf("name:%s\n",employee1.name);
	  printf("Id:%i\n",employee1.Id); 
	  printf("Department:%s\n",employee1.Department);
	   printf("salary:%f\n",employee1.salary);
	    printf("Email:%s\n",employee1.email);
	    
	    return 0;
	    
 }

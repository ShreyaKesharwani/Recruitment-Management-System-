#include <stdio.h>
#include <stdlib.h>

	struct applicant{
	
	char id[10];
	char pswd[15];
	char aname[20];
	char eid[20];
	char dob[10];
	char mobile[10];
	char add[30];
	char b10[30];
	char gra10[4];
	char b12[30];
	float perc12;
	char tech[100];
	char wEx[100];
}; 
int main()
{ 
struct applicant AA;
   char ch[10], file_name[25];
   FILE *f;
 
   printf("Enter your file in .txt type :\t");
   gets(file_name);
 
   f=fopen(file_name,"r"); // read mode
 fread(&AA,sizeof(struct applicant),1,f);
 
   
	printf("\nName :");
	puts(AA.aname);
	printf("\n login EmailID :");
	puts(AA.eid);
	printf("\nEnter DOB :");
	puts(AA.dob);
	printf("\n moblie number :");
    puts(AA.mobile);
    printf("\n address :");
    puts(AA.add);
    printf("\n Technical Skills :");
    puts(AA.tech);
    printf("\nr Work Experience  :");
    puts(AA.wEx);
    printf("\n name of 10th Board :");
    puts(AA.b10);
    printf("\n 10th std. CGPA/percentage :");
    puts(AA.gra10);
    printf("\n name of 12th Board :");
    puts(AA.b12);
    printf("\n 12th std. percentage :");
    printf("%f",AA.perc12);
 
   fclose(f);
   return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
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
int choice, num, i;;
system("cls");

while(1)
{
printf("1.View Profile\n");
printf("2.Edit Profile\n");
printf("3.View Vacancy\n");
printf("4.Apply for Posts\n");
printf("5.Appear for Test\n");
printf("6.New User\n");
printf("7.Exit\n");

printf("\nYour choice?");
scanf("%d",&choice);

switch(choice)
{
case 1:
	printf("****Your Profile****");
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
   
	break;
	
case 2:
	
	struct applicant A;

	FILE *ff;
	char chh[10];
	
	printf("\nEnter login ID(Please enter a abc.txt type file):");
	gets(chh);
	
	 ff=fopen(chh,"r+");
	 strcpy(ch,A.id);
	printf("\nEnter password :");
	gets(A.pswd);
	printf("\nEnter name :");
	gets(A.aname);
	printf("\nEnter login EmailID :");
	gets(A.eid);
	printf("\nEnter DOB :");
	gets(A.dob);
	printf("\nEnter moblie number :");
    gets(A.mobile);
    printf("\nEnter address :");
    gets(A.add);
    printf("\nEnter Technical Skills :");
    gets(A.tech);
    printf("\nEnter Work Experience (if any) :");
    gets(A.wEx);
    printf("\nEnter name of 10th Board :");
    gets(A.b10);
    printf("\nEnter 10th std. CGPA/percentage :");
    gets(A.gra10);
    printf("\nEnter name of 12th Board :");
    gets(A.b12);
    printf("\nEnter 12th std. percentage :");
    scanf("%f",&A.perc12);
    fwrite(&A,sizeof(struct applicant),1,ff);
    fclose(ff);
    break;
	
	case 6:
	 
	 struct applicant B;

	FILE *f1;
	char c[10];
	
	printf("\nEnter login ID(Please enter a abc.txt type file):");
	gets(c);
	
	 f1=fopen(c,"w");
	 strcpy(c,B.id);
	printf("\nEnter password :");
	gets(B.pswd);
	printf("\nEnter name :");
	gets(B.aname);
	printf("\nEnter login EmailID :");
	gets(B.eid);
	printf("\nEnter DOB :");
	gets(B.dob);
	printf("\nEnter moblie number :");
    gets(B.mobile);
    printf("\nEnter address :");
    gets(B.add);
    printf("\nEnter Technical Skills :");
    gets(B.tech);
    printf("\nEnter Work Experience (if any) :");
    gets(B.wEx);
    printf("\nEnter name of 10th Board :");
    gets(B.b10);
    printf("\nEnter 10th std. CGPA/percentage :");
    gets(B.gra10);
    printf("\nEnter name of 12th Board :");
    gets(B.b12);
    printf("\nEnter 12th std. percentage :");
    scanf("%f",&B.perc12);
    fwrite(&B,sizeof(struct applicant),1,f1);
    fclose(f1);
    break;
    case 7:
    	
		exit(0);
    	
}
}
    return 0;
}

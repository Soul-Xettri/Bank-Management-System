#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<string.h>
#include<stdlib.h>
void login();
void loan_details();
void New_loan();
void show_loanbill();
void unsecured_loan();
void secured_loan();
void loan_menu();
void loan_info();
void loan_type();
void menu();
void new_account();
void show_account();
void balace_enquiry();
void withdraw();
void deposite();
void all_accounts();
void close_accounts();
void bank_loan();
char type[100];
char first[100];
char first1[100];
char first2[100];
char last[100];
char last1[100];
char last2[100];
char info[100];
char occupation[100];
char occupation1[100];
char gender[100];
char gender1[100];
char address[100];
char address1[100];
char id[100];
char id1[100];
char ph[100];
char ph1[100];
char ph2[100];
FILE *fptr;
FILE *fpt;
int acc,dep,age,age1,principal,time,totalmonths,i,draw,addamt,newamt,newamt1;
float rate,monthlypay,totalpay,interestamt,formu=1;
int main()
{
	login();
	return 0;
}
void login()
{
char password[10],username[10],ch;
printf("\n\n\t\t\t         LEVEL BANK OF NEPAL");
printf("\n________________________________________________________________________________");
printf("\n\n\t\t ENTER USERNAME AND PASSWORD: ");
printf("\n\n\t\t USERNAME :: ");
scanf("%s",username);
printf("\n\t\t PASSWORD :: ");
scanf("%s",password);
if(strcmp(username,"ADMIN")==0&&strcmp(password,"Password")==0)
{
	printf("LOGIN SUCCESSFULL");
	system("cls");
	menu();
}
else
{
	printf("INCORRECT PASSWORD");
}
getch();
system("cls");
login();
}
void menu()
{
	system("cls");
	int option;
	printf("\n\n\tChoose Any Transactions That You Want to DO (1-7): \n");
	printf("________________________________________________________________________________");
	printf("\n\t 01. CREATE NEW ACCOUNT\n\n");
	printf("\t 02. BALANCE/ACCOUNT ENQUIRY\n\n");
	printf("\t 03. DEPOSITE AMOUNT\n\n");
	printf("\t 04. WITHDRAW AMOUNT\n\n");
	printf("\t 05. CLOSE AN ACCOUNT\n\n");
	printf("\t 06. BANK LOAN\n\n");
	printf("\t 07. LOG OUT\n\n");
	scanf("%d",&option);
	switch(option)
	{
		case 1:
			system("cls");
			new_account();
		case 2:
			system("cls");
			balace_enquiry();
		case 3:
			system("cls");
			deposite();
		case 4:
			system("cls");
			withdraw();
		case 5:
			system("cls");
			close_accounts();
		case 6:
			system("cls");
			loan_menu();
		case 7:
	    	system("cls");
			login();
		break;
		default:
			system("cls");
			printf("\n\n\n************************* YOUR TRANSACTION IS COMPLETE *************************");
			printf("\n\n\t\t\t\t   THANK YOU :)");
	}
	
}
void new_account()
{
	fptr = fopen("D:\\Bank_Accounts.txt","w");
	if(fptr==NULL)
	{
		printf("File Does not exists \n");
		return;
	}
	printf("Enter 5 Digit Account no. :: ");
	scanf("%d",&acc);
	fprintf(fptr,"Account No.:: %d\n",acc);
	printf("\nEnter First Name:: ");
	scanf("%s",&first);
	fprintf(fptr,"Account Holder Name:: %s ",first);
	printf("\nEnter Last Name:: ");
	scanf("%s",&last);
	fprintf(fptr,"%s\n",last);
	printf("\nEnter The Gender(M/F/O):: ");
	scanf("%s",&gender);
	fprintf(fptr,"Gender:: %s\n",gender);
	printf("\nEnter Address:: ");
	scanf("%s",&address);
	printf("\nEnter Age(>16):: ");
	scanf("%d",&age);
	fprintf(fptr,"Age:: %d\n",age);
	fprintf(fptr,"Address:: %s\n",address);
	printf("\nEnter The Occupation(Student/BussinessPerson):: ");
	scanf("%s",&occupation);
	fprintf(fptr,"Occupation:: %s\n",occupation);
	printf("\nEnter Contact No.:: ");
	scanf("%s",&ph);
	fprintf(fptr,"Contact No.:: %s\n",ph);
	printf("\nEnter E-Mail ID:: ");
	scanf("%s",&id);
	fprintf(fptr,"E-Mail ID:: %s\n",id);
	printf("\nEnter The Type Of Account Current/Saving Account(C/S):: ");
	scanf("%s",&type);
	fprintf(fptr,"Account Type:: %s\n",type);
	printf("\nEnter The Initial Amount::\n|___________________________|\n|<>=500 For Saving Account  |\n|---------------------------|\n|>=1000 For Current Account |\n|---------------------------|\n\n");
	scanf("%d",&dep);
	fprintf(fptr,"Balance Amount:: Rs%d\n",dep);
		if(age<18)
	{
		system("cls");
		printf("\n\nYOUR AGE IS INVALID...\n");
		printf("________________________________________________________________________________\n");
		new_account();
 }
	else
	printf("\n\n\nAccount Created..\n");
	printf("________________________________________________________________________________\n");
	fclose(fptr);
	getch();
	show_account();
}
void show_account()
{
	printf("Account No.:: %d",acc);
	printf("\nAccount Holder Name:: %s %s",first,last);
	printf("\nGender:: %s",gender);
	printf("\nAddress:: %s",address);
	printf("\nAge:: %d",age);
	printf("\nOccupation:: %s",occupation);
	printf("\nContact No.:: %s",ph);
	printf("\nE-Mail ID:: %s",id);
	printf("\nAccount Type:: %s",type);
	printf("\nBalance Amount:: Rs.%d",dep);
	printf("\n\nPress Any Key To Continue :)..");
getch();
menu();
}
void loan_menu()
{
	system("cls");
	char opt;
	printf("\n\n\tChoose Any Transactions That You Want to DO (A-G): \n");
	printf("________________________________________________________________________________");
	printf("\n\t  1. ABOUT BANK");
	printf("\n\n\t  2. DETAILS OF LOAN\n\n");
	printf("\t  3. RESISTOR NEW LOAN\n\n");
	printf("\t  4. VIEW ALL LOANS TRANSACTIONS\n\n");
	printf("\t  5. GO BACK\n\n");
	printf("\t  6. LOG OUT\n\n");
	scanf("%d",&opt);
	switch(opt)
	{
		case 1:
			system("cls");
			bank_loan();
		case 2:
			system("cls");
			loan_info();
		case 3:
			system("cls");
			New_loan();
		case 4:
			system("cls");
			loan_details();
		case 5:
			system("cls");
			menu();
		case 6:
			system("cls");
			login();
		break;
		default:
			system("cls");
			printf("\n\n\n************************* YOUR TRANSACTION IS COMPLETE *************************");
			printf("\n\n\t\t\t\t   THANK YOU :)");
	}
}
void bank_loan()
{
    printf("\n\n\t\t\t   BANK LOAN MAGEMENT SYSTEM");
    printf("\n________________________________________________________________________________");
	printf("\n      'Level Bank Of Nepal', a leading public sector bank in the world, offers  personal loans suitable for various individual needs. Some of the key reasons   why 'Level Bank Of Nepal' personal loans are preferred by people from various   walks of life include expenses related to vacations, wedding, home renovation/  restoration, debt consolidation and much more.");
	printf("\n\n\nPress Any Key to Continue..");
	getch();
	loan_menu();
}
void loan_info()
{     printf("\t      _________________________________________________");
	printf("\n\t      |                                               |");
	printf("\n\t      |");
   	printf("\t  -> Interest Rate Starts From 13.10%\t      |");
   	printf("\n\t      |_______________________________________________|");
   	printf("\n\t      |                                               |");
   	printf("\n\t      |");
	printf("\t  -> Loan Amount: Upto Rs. 20 lakh\t      |");
	printf("\n\t      |_______________________________________________|");
	printf("\n\t      |                                               |");
	printf("\n\t      |");
	printf("\t  -> Processing Fees: As Offered By The Bank  |");
	printf("\n\t      |_______________________________________________|");
	printf("\n\t      |                                               |");
	printf("\n\t      |");
	printf("\t  -> Quick Approval & Disbursal rate\t      |");
    printf("\n\t      |_______________________________________________|");
    printf("\n________________________________________________________________________________");
	printf("\n-----------------\n|Amount of Loan |\n-----------------\n\t The maximum and minimum amount of Level Bank of Nepal personal loans depends upon the nature of loan and the area of the applicant’s residence.");
	printf("\n\n\n Press key to continue..");
	getch();
	loan_type();
}
void loan_type()
{
	system("cls");
    int op;
	printf("\n\n\t\t\t\t TYPES OF LOAN:");
    printf("\n________________________________________________________________________________");
    printf("\n\n 1. UNSECURED LOANS\n");
    printf("\n 2. SECURED LOANS\n");
    printf("\n 3. GO_BACK\n");
    printf("\n 4. LOG OUT\n");
    scanf("%d",&op);
    switch(op)
    {
    	case 1:
    		system("cls");
    		unsecured_loan();
    	case 2:
    		system("cls");
    		secured_loan();
    	case 3:
    		system("cls");
    		loan_menu();
    	case 4:
    		system("cls");
    		login();
    	break;
    	default:
    		system("cls");
			printf("\n\n\n************************* YOUR TRANSACTION IS COMPLETE *************************");
			printf("\n\n\t\t\t\t   THANK YOU :)");
    }
}
void unsecured_loan()
{
    printf("\n\n\t\t\t\t UNSECURED LOANS:");
    printf("\n________________________________________________________________________________");
	printf("\n\tAn applicant residing in metro, urban areas, rural and semi urban areas is eligible for a maximum loan of Rs.5 lakhs. The minimum amount of loan for an applicant who is living in urban and metro areas is set at Rs.10000. However, no such minimum amount requirement is set for applicants from rural or semi urban areas.");
	printf("\n\n    _____________________________________________________________________");
	printf("\n    |                    |                       |                      |");
	printf("\n    | Area of residence\t |  Maximum Loan Amount\t |  Minimum Loan Amount |");
	printf("\n    |--------------------|-----------------------|----------------------|");
	printf("\n    |1. Metro And Urban\t |  Rs. 5 Lakhs\t\t |  Rs. 1 Lakh          |\n    |   Areas            |                       |                      |");
	printf("\n    |--------------------|-----------------------|----------------------|");
	printf("\n    |2. Rural And Urban\t |  Rs. 5 Lakhs\t\t |  NILL                |\n    |   Areas            |                       |                      |");
	printf("\n    |____________________|_______________________|______________________|");
	printf("\n\nPress any key to continue..");
	getch();
	loan_type();
}
void secured_loan()
{
	printf("\n\n\t\t\t\t   SECURED LOANS:");
    printf("\n________________________________________________________________________________");
	printf("\n\tAn applicant residing in metro, urban areas, rural and semi urban areas is eligible for a maximum loan of Rs.10 lakhs. The minimum amount of loan for an applicant residing in metro and urban areas is set at Rs.10000. However, no such minimum amount requirements for personal loans are set for applicants from rural or semi urban areas.");
	printf("\n\n    _____________________________________________________________________");
	printf("\n    |                    |                       |                      |");
	printf("\n    | Area of residence\t |  Maximum Loan Amount\t |  Minimum Loan Amount |");
	printf("\n    |--------------------|-----------------------|----------------------|");
	printf("\n    |1. Metro And Urban\t |  Rs. 10 Lakhs\t |  Rs. 1 Lakh          |\n    |   Areas            |                       |                      |");
	printf("\n    |--------------------|-----------------------|----------------------|");
	printf("\n    |2. Rural And Urban\t |  Rs. 10 Lakhs\t |  NILL                |\n    |   Areas            |                       |                      |");
	printf("\n    |____________________|_______________________|______________________|");
	printf("\n\nPress any key to continue..");
	getch();
	loan_type();
}
void balace_enquiry()
{
	FILE* fptr;
	char data[100];
	fptr = fopen("D:\\Bank_Accounts.txt","r");
	if(fptr==NULL)
	{
		printf("File Does not exists \n");
		return;
	}
	else
	{
		printf("\n");
		printf("________________________________________________________________________________");
		while(!feof(fptr))
		{
			fgets(data,100,fptr);
			printf("%s",data);
		}
		printf("________________________________________________________________________________");
	fclose(fptr);
	getch();
    }
	menu();
}
void New_loan()
{
	int ln;
	printf("\n\n\t\t\t\t LEVEL BANK OF NEPAL");
	printf("\n\n\t\t\t\t     LOAN FORM");
    printf("\n________________________________________________________________________________");
   	fpt = fopen("D:\\Bank_Loan.txt","w");
	if(fpt==NULL)
	{
		printf("File Does not exists \n");
		return;
	}
	printf("\nEnter First Name:: ");
	scanf("%s",&first1);
	fprintf(fpt,"Loan Holder Name:: %s ",first1);
	printf("\nEnter Last Name:: ");
	scanf("%s",&last1);
	fprintf(fpt,"%s\n",last1);
	printf("\nEnter The Gender(M/F/O):: ");
	scanf("%s",&gender1);
	fprintf(fpt,"Gender:: %s\n",gender1);
	printf("\nEnter Address:: ");
	scanf("%s",&address1);
	fprintf(fpt,"Address:: %s\n",address1);
	printf("\nEnter Age(>16):: ");
	scanf("%d",&age1);
	fprintf(fpt,"Age:: %d\n",age1);
	printf("\nEnter The Occupation(Student/BussinessPerson):: ");
	scanf("%s",&occupation1);
	fprintf(fpt,"Occupation:: %s\n",occupation1);
	printf("\nEnter Contact No.:: ");
	scanf("%s",&ph1);
	fprintf(fpt,"Contact No.:: %s\n",ph1);
	printf("\nEnter E-Mail ID:: ");
	scanf("%s",&id1);
	fprintf(fpt,"E-Mail ID:: %s\n",id1);
	printf("\nEnter The Witness First Name:: ");
	scanf("%s",&first2);
	fprintf(fpt,"Witness First Name:: %s\n",first2);
	printf("\nEnter Witness Last Name:: ");
	scanf("%s",&last2);
	fprintf(fpt,"Witness Last Name:: %s\n",last2);
	printf("\nEnter Witness Contact No.:: ");
	scanf("%s",&ph2);
	fprintf(fpt,"Witness Contact No.:: %s\n",ph2);
	printf("\nEnter Amount Of Loan:: ");
	scanf("%d",&principal);
	printf("\nEnter The Number Of Year:: ");
	scanf("%d",&time);
	printf("\nEnter The Interest Rate:: ");
	scanf("%f",&rate);
	interestamt= rate/100;
	totalmonths=time*12;
	for(i=0;i<totalmonths;i++)
	{
		formu=(1/((1+(interestamt/12)))*formu);
	}
	monthlypay=principal*(interestamt/12)/(1-formu);
	totalpay=monthlypay*totalmonths;
	fprintf(fpt,"Monthly Payment:: Rs.%f\n",monthlypay);
	fprintf(fpt,"Total Payement:: Rs.%f\n",totalpay);
	printf("________________________________________________________________________________\n");
	fclose(fpt);
	printf("\n Generating Bill Please wait...");
	getch();
	show_loanbill();
}
void show_loanbill()
{
	system("cls");
	printf("\n\n\t\t\t\t LEVEL BANK OF NEPAL");
	printf("\n________________________________________________________________________________");
	printf("\n\t     Loan Holder Name\t  \t%s %s\n",first1,last1);
	printf("\n\t     Contact NO.\t\t%s\n",ph1);
	printf("\n\t     E-Mail ID.\t\t  \t%s\n",id1);
	printf("\n\t     Witness Name\t\t%s %s\n",first2,last2);
	printf("\n\t     Witness Contact No.\t%s\n",ph2);
	printf("\n\t     Amount Of Loan\t\tRs %d\n",principal);
	printf("\n\t     Number Of Years\t\t%d Years\n",time);
	printf("\n\t     Interest Rate\t\t%f P.A\n",rate);
	printf("\n\t     Monthly Payment\t\tRs %f\n",monthlypay);
	printf("\n\t     Total Payment\t\tRs %f\n",totalpay);
	printf("\n-----------------------------------THANK YOU------------------------------------");
getch();
loan_menu();
}
void loan_details()
{
	FILE* fpt;
	char data[100];
	fpt = fopen("D:\\Bank_Loan.txt","r");
	if(fpt==NULL)
	{
		printf("File Does not exists \n");
		return;
	}
	else
	{
		printf("\n");
		printf("________________________________________________________________________________");
		while(!feof(fpt))
		{
			fgets(data,100,fpt);
			printf("%s",data);
		}
		printf("________________________________________________________________________________");
	fclose(fptr);
	getch();
    }
    loan_menu();
}
void withdraw()
{

	printf("Account No.:: %d",acc);
	printf("\nAccount Holder Name:: %s %s",first,last);
	printf("\nGender:: %s",gender);
	printf("\nAddress:: %s",address);
	printf("\nAge:: %d",age);
	printf("\nOccupation:: %s",occupation);
	printf("\nContact No.:: %s",ph);
	printf("\nE-Mail ID:: %s",id);
	printf("\nAccount Type:: %s",type);
	printf("\nBalance Amount:: Rs.%d",newamt);
	printf("\n________________________________________________________________________________");
    fptr = fopen("D:\\Bank_Accounts.txt","w");
	if(fptr==NULL)
	{
		printf("File Does not exists \n");
		return;
	}
	printf("\n\nEnter The Amount You Want To Withdraw:: ");
    scanf("%d",&draw);
    newamt1=newamt-draw;
    printf("The New Deposite Amount is:: %d",newamt1);
    printf("\n________________________________________________________________________________");
    fprintf(fptr,"Account No.:: %d\n",acc);
	fprintf(fptr,"Account Holder Name:: %s ",first);
	fprintf(fptr,"%s\n",last);
	fprintf(fptr,"Gender:: %s\n",gender);
	fprintf(fptr,"Age:: %d\n",age);
	fprintf(fptr,"Address:: %s\n",address);
	fprintf(fptr,"Occupation:: %s\n",occupation);
	fprintf(fptr,"Contact No.:: %s\n",ph);
	fprintf(fptr,"E-Mail ID:: %s\n",id);
	fprintf(fptr,"Account Type:: %s\n",type);
	fprintf(fptr,"Balance Amount:: Rs%d\n",newamt1);
	fclose(fptr);
	printf("\t\t\t     *---------------*");
	printf("\n\t\t\t        |NEW AMOUN|");
	printf("\n\t\t\t     *---------------*");
	printf("\nAccount No.:: %d",acc);
	printf("\nAccount Holder Name:: %s %s",first,last);
	printf("\nGender:: %s",gender);
	printf("\nAddress:: %s",address);
	printf("\nAge:: %d",age);
	printf("\nOccupation:: %s",occupation);
	printf("\nContact No.:: %s",ph);
	printf("\nE-Mail ID:: %s",id);
	printf("\nAccount Type:: %s",type);
	printf("\nNew Balance Amount:: Rs.%d",newamt1);
	printf("\n\nYOUR TRANSACTION COMPLETED....");
	printf("\n\nPress Any Key To Continue :)..");
	printf("\n________________________________________________________________________________");
	getch();
	menu();
}
void deposite()
{
	printf("Account No.:: %d",acc);
	printf("\nAccount Holder Name:: %s %s",first,last);
	printf("\nGender:: %s",gender);
	printf("\nAddress:: %s",address);
	printf("\nAge:: %d",age);
	printf("\nOccupation:: %s",occupation);
	printf("\nContact No.:: %s",ph);
	printf("\nE-Mail ID:: %s",id);
	printf("\nAccount Type:: %s",type);
	printf("\nBalance Amount:: Rs.%d",dep);
	printf("\n________________________________________________________________________________");
    fptr = fopen("D:\\Bank_Accounts.txt","w");
	if(fptr==NULL)
	{
		printf("File Does not exists \n");
		return;
	}
	printf("\n\nEnter The Amount You Want To Deposite:: ");
    scanf("%d",&addamt);
    newamt=dep+addamt;
    printf("The New Deposite Amount is:: %d",newamt);
    printf("\n________________________________________________________________________________");
    fprintf(fptr,"Account No.:: %d\n",acc);
	fprintf(fptr,"Account Holder Name:: %s ",first);
	fprintf(fptr,"%s\n",last);
	fprintf(fptr,"Gender:: %s\n",gender);
	fprintf(fptr,"Age:: %d\n",age);
	fprintf(fptr,"Address:: %s\n",address);
	fprintf(fptr,"Occupation:: %s\n",occupation);
	fprintf(fptr,"Contact No.:: %s\n",ph);
	fprintf(fptr,"E-Mail ID:: %s\n",id);
	fprintf(fptr,"Account Type:: %s\n",type);
	fprintf(fptr,"Balance Amount:: Rs%d\n",newamt);
	fclose(fptr);
	printf("\t\t\t     *---------------*");
	printf("\n\t\t\t        |NEW AMOUN|");
	printf("\n\t\t\t     *---------------*");
	printf("\nAccount No.:: %d",acc);
	printf("\nAccount Holder Name:: %s %s",first,last);
	printf("\nGender:: %s",gender);
	printf("\nAddress:: %s",address);
	printf("\nAge:: %d",age);
	printf("\nOccupation:: %s",occupation);
	printf("\nContact No.:: %s",ph);
	printf("\nE-Mail ID:: %s",id);
	printf("\nAccount Type:: %s",type);
	printf("\nNew Balance Amount:: Rs.%d",newamt);
	printf("\n\nYOUR TRANSACTION COMPLETED....");
	printf("\n\nPress Any Key To Continue :)..");
	printf("\n________________________________________________________________________________");
	getch();
	menu();
}
void close_accounts()
{
		FILE *fptr;
		char test;
		printf("\nDO YOU WANT TO DELETE THE ACCOUNT(y/n)?:: ");
		scanf("%s",&test);
		switch(test)
		{
			case'y':
				fptr = fopen("D:\\Bank_Accounts.txt","w");
				if(fptr==NULL)
				{
					printf("File Does not exists \n");
					return;
				}
				fclose(fptr);
				printf("\n\nAccount Sucessfully Deleted...");
				printf("\n\n\n************************* YOUR TRANSACTION IS COMPLETE *************************");
				printf("\n\n\t\t\t\t   THANK YOU :)");
				break;
			case'n':
				printf("\n\n\n************************* YOUR TRANSACTION IS COMPLETE *************************");
				printf("\n\n\t\t\t\t   THANK YOU :)");
				break;
			default:
				system("cls");
				menu();
		}
	getch();
	menu();
}

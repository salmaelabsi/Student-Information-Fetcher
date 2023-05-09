//Code by Salma Elabsi 20/12/2020
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

#define ENGINEERING 1
#define SCIENCE_AND_LETTERS 2
#define LAW 3
#define EDUCATION 4
#define ECONOMICS_AND_ADMINISTRATIVE 5
#define ART_AND_DESIGN 6
#define ARCHITECTURE 7
#define HEALTH_AND_SCIENCES 8

int main(void)
{
	int ID, year, facnum, depnum, studentnum; //declaration of numeric variables
	char y_n[4]; //declaration of the string variable

	printf("**STUDENT INFORMATION SCREEN**");

	do {
		printf("\n\nPlease enter your Student ID> "); //prompt user to enter their ID number
		scanf("%d", &ID);

		studentnum = ID % 10000;                   //student number = final 4 digits of ID
		depnum = (ID / 10000) % 100;               //department number = final 2 digits of new 
		facnum = (ID/1000000) % 100;               //faculty number = final 2 digits of new
		year = (ID / 100000000);                   //year = first 2 digits of ID

		if (year < 10) {
			printf("\nYear of enrollment: 200%d\n", year);
		}
		else {
			printf("\nYear of enrollment: 20%d\n", year);
		}

		/* Testing:
			printf("Faculty number: %d\n", facnum);
			printf("Dep number: %d\n", depnum);
		*/
		switch (facnum) //Finding the faculty name based on its number
		{
		case ENGINEERING: printf("Faculty: Faculty of Engineering\n");
			break;
		case SCIENCE_AND_LETTERS: printf("Faculty: Faculty of Science and Letters\n");
			break;
		case LAW: printf("Faculty: Faculty of Law\n");
			break;
		case EDUCATION: printf("Faculty: Faculty of Education\n");
			break;
		case ECONOMICS_AND_ADMINISTRATIVE: printf("Faculty: Faculty of Economics and Administrative\n");
			break;
		case ART_AND_DESIGN: printf("Faculty: Faculty of Art and Design\n");
			break;
		case ARCHITECTURE: printf("Faculty: Faculty of Architecture\n");
			break;
		case HEALTH_AND_SCIENCES: printf("Faculty: Faculty of Health and Sciences\n");
			break;
		}
		//Finding the department name based on the faculty number and the number stored in variable depnum
		if (facnum == ENGINEERING) {
			switch (depnum)
			{
			case 1: printf("Department: Industrial Engineering\n");
				break;
			case 2: printf("Department: Computer Engineering\n");
				break;
			case 3: printf("Department: Civil Engineering (English)\n");
				break;
			case 4: printf("Department: Civil Engineering (Turkish)\n");
				break;
			case 5: printf("Department: Electrical-Electronic Engineering\n");
				break;
			}

		}
		if (facnum == SCIENCE_AND_LETTERS) {
			switch (depnum)
			{
			case 1: printf("Department: Mathematics and Computer Science\n");
				break;
			case 2: printf("Department: English Language and Literature\n");
				break;
			case 3: printf("Department: Turkish Language and Literature\n");
				break;
			case 4: printf("Department: Physics\n");
				break;
			case 5: printf("Department: Molecular Biology and Genetics\n");
				break;
			case 6: printf("Department: Psychology\n");
				break;
			}

		}
		if (facnum == LAW) {
			switch (depnum)
			{
			case 1: printf("Department: Private Law\n");
				break;
			case 2: printf("Department: Public Law\n");
				break;
			}
		}
		if (facnum == EDUCATION) {
			switch (depnum)
			{
			case 1: printf("Department: Department of Educational Sciences\n");
				break;
			case 2: printf("Department: Department of Foreign Language Education\n");
				break;
			case 3: printf("Department: Department of Elementary Education\n");
				break;
			}
		}
		if (facnum == ECONOMICS_AND_ADMINISTRATIVE) {
			switch (depnum)
			{
			case 1: printf("Department: Economics");
				break;
			case 2: printf("Department: Business Administration (English)\n");
				break;
			case 3: printf("Department: Business Administration (Turkish)\n");
				break;
			case 4: printf("Department: Internatioanl Relations\n");
				break;
			case 5: printf("Department: Internatioanl Trade (English)\n");
				break;
			case 6: printf("Department: Internatioanl Trade (Turkish)\n");
				break;
			case 7: printf("Department: Enterpreneurship\n");
				break;
			}
		}
		if (facnum == ART_AND_DESIGN) {
			switch (depnum)
			{
			case 1: printf("Department: Communication Design\n");
				break;
			case 2: printf("Department: Art Management\n");
				break;
			case 3: printf("Department: Communication Arts\n");
				break;
			case 4: printf("Department: Film and Television\n");
				break;
			case 5: printf("Department: Gastronomy and Culinary Arts\n");
				break;
			case 6: printf("Department: New Media and Communication\n");
				break;
			case 7: printf("Department: Cartoon and Animation\n");
				break;
			}

		}
		if (facnum == ARCHITECTURE) {
			switch (depnum)
			{
			case 1: printf("Department: Architecture (Turkish)\n");
				break;
			case 2: printf("Department: Architecture (English)\n");
				break;
			case 3: printf("Department: Interior Architecture & Environmental Design (Turkish)\n");
				break;
			case 4: printf("Department: Interior Architecture & Environmental Design (English)\n");
				break;
			}
		}
		if (facnum == HEALTH_AND_SCIENCES) {
			switch (depnum)
			{
			case 1: printf("Department: Nutrition and Diabetics\n");
				break;
			case 2: printf("Department: Physiotherapy and Rehabiliation\n");
				break;
			}

		}

		printf("Student No: %d\n", studentnum); //Printing the student number

		printf("\nContinue..? (Yes/No)> "); //Asking the user if they want to continue giving ID's to the program
		scanf("%s", &y_n);
	}
	while (strcmp(y_n, "yes") == 0 || strcmp(y_n, "Yes") == 0);
	
	return 0;
}
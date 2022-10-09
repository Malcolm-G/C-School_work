#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

struct Main
{
	int a, b, t;
}m;

struct matrices
{
	int t, b, l;
}c;

struct Sets
{
	int set1[50], set2[50], set3[50], first, second, i, j, d, swap, k, l, x, a, n, m, z;
}s;

void unionofset();
void intersection();
void cardinalproduct();
void difference();

void multiplication();
void transpose();
void addition();

void matrices();
void sets();


main()
{
	int i = 0;
	char user[10], pass[10];
	while (i < 3)
	{
		printf("\t\t\tLOGIN SCREEN\n");
		printf("\nWelcome please enter username and password below");
		printf("\nUsername:");
		scanf("%s", &user);
		printf("Password:");
		scanf("%s", &pass);
		if (strcmp("man", pass) == 0 && strcmp("big", user) == 0)
		{
			printf("\n\nLogin credentials accepted\n\nWelcome");
			i = 4;
			for (m.t = 0; m.t < 800000000; m.t++);
			system("cls");

			printf("\t\t\tMAIN MENU\n");
			printf("1.Matrices\n2.Sets\n3.Exit program");
			printf("\nChoose which you wish to work with: ");
			scanf("%d", &m.a);
			for (;;)
			{
				switch (m.a)
				{
				case 1:
					system("cls");
					matrices();
					break;
				case 2:
					system("cls");
					sets();
					break;
				case 3:
					exit(0);
					break;
				default:
					printf("\nChoose one of the three options");
					for (m.t = 0; m.t < 600000000; m.t++);
					system("cls");
					printf("\t\t\tMAIN MENU\n");
					printf("1.Matrices\n2.Sets\n3.Exit program");
					printf("\nChoose which you wish to work with: \n");
					scanf("%d", &m.a);
					break;
				}
			}
		}

		else
		{
			printf("\nWrong username or password\n");
			for (m.t = 0; m.t < 400000000; m.t++);
			i++;
			if (i == 3)
			{
				printf("No more tries left");
				for (m.t = 0; m.t < 1000000000; m.t++);
				exit(0);
			}
			system("cls");
		}
	}
	_getch();
}

void matrices()
{
	printf("\t\t\t\tMATRICES\n");
	printf("\n1.Multiplication of matrices\n2.Transpose of matrix\n3.Addition of matrices\n4.Back to main menu\n5.Exit program\n\n");
	printf("Select what you wish to carry out: ");
	scanf("%d", &c.b);
	for (;;)
	{
		switch (c.b)
		{
		case 1:
			multiplication();
			break;
		case 2:
			transpose();
			break;
		case 3:
			addition();
			break;
		case 4:
			printf("\nReturning to main menu");
			for (c.t = 0; c.t < 900000000; c.t++);
			system("cls");
			printf("\t\t\tMAIN MENU\n");
			printf("1.Matrices\n2.Sets\n3.Exit program");
			printf("\nChoose which you wish to work with: ");
			scanf("%d", &m.a);
			break;
		case 5:
			exit(0);
			break;
		default:
			printf("\nThat was not one of the options");
			for (c.t = 0; c.t < 700000000; c.t++);
			system("cls");
			printf("\t\t\t\tMATRICES\n");
			printf("1.Multiplication of matrices\n2.Transpose of matrix\n3.Addition of matrices\n4.Back to main menu\n5.Exit program");
			printf("\n\nSelect what you wish to carry out: ");
			scanf("%d", &c.b);
			break;
		}
		if (c.l == 1)
		{
			break;
		}
		if (c.b == 4)
		{
			break;
		}
		if (c.l == 2)
		{
			break;
		}
	}

}

void multiplication()
{
	int row1, column1, matrix1[100][100], row2, column2, matrix2[100][100], i, j, k, mul[100][100], mult = 0;
	printf("Please enter size of row and column of matrix 1");
	printf("\nRow: ");
	scanf("%d", &row1);
	printf("Column: ");
	scanf("%d", &column1);
	printf("\nNow please enter size of row and column of second matrix");
	printf("\nRow:");
	scanf("%d", &row2);
	printf("Column:");
	scanf("%d", &column2);
	if (column1 == row2)
	{
		printf("\nPlease enter values of your first matrix:\n");
		for (i = 0; i < row1; i++)
		{
			for (j = 0; j < column1; j++)
			{
				scanf("%d", &matrix1[i][j]);
			}
		}
		printf("\nThe elements of your first matrix are:\n");
		for (i = 0; i < row1; i++)
		{
			for (j = 0; j < column1; j++)
			{
				printf("\t%d", matrix1[i][j]);
			}
			printf("\n");
		}
		printf("Now please enter values of your second matrix:\n");
		for (i = 0; i < row2; i++)
		{
			for (j = 0; j < column2; j++)
			{
				scanf("%d", &matrix2[i][j]);
			}
		}
		printf("\nThe elements of your second matrix are:\n");
		for (i = 0; i < row2; i++)
		{
			for (j = 0; j < column2; j++)
			{
				printf("\t%d", matrix2[i][j]);
			}
			printf("\n");
		}
		for (i = 0; i < row1; i++)
		{
			for (j = 0; j < column2; j++)
			{
				mul[i][j] = 0;
			}
		}
		printf("The multiplication of your two matrices is:\n");
		for (i = 0; i < row1; i++)
		{
			for (j = 0; j < column2; j++)
			{
				for (k = 0; k < column1; k++)
				{
					mult = mult + ((matrix1[i][k] * matrix2[k][j]));

				}
				mul[i][j] = mult;
			}
		}
		for (i = 0; i < row1; i++)
		{
			for (j = 0; j < column2; j++)
			{
				printf("\t%d", mul[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("\nNumber of columns in matrix 1 and number of rows in matrix 2 must be equal");
	}

	printf("\n\nWhat do you wish to do now?");
	printf("\n1.Go back to main menu\n2.Continue working with matrices\n\nPress any other number to Exit program");
	printf("\n\nAnswer: ");
	scanf("%d", &c.l);
	if (c.l == 1)
	{
		printf("\nPress Enter to return to main menu");
		for (c.t = 0; c.t < 900000000; c.t++);
		_getch();
		system("cls");
		printf("\t\t\tMAIN MENU\n");
		printf("1.Matrices\n2.Sets\n3.Exit program");
		printf("\nChoose which you wish to work with: ");
		scanf("%d", &m.a);
		printf("\nPress Enter");
	}
	else if (c.l == 2)
	{
		printf("\nOkay");
		for (c.t = 0; c.t < 600000000; c.t++);
		system("cls");
	}
	else
	{
		exit(0);
	}
}
void transpose()
{
	int matrix[100][100], row, column, i, j;
	printf("\nPlease enter number of rows of matrix:\n");
	scanf("%d", &row);
	printf("Please enter number of columns of matrix:\n");
	scanf("%d", &column);
	if (row == column)
	{
		printf("Enter matrix values:\n");
		for (i = 0; i < row; i++)
		{
			for (j = 0; j < column; j++)
			{
				scanf("%d", &matrix[i][j]);
			}
		}
		printf("The values of your matrix are:\n");
		for (i = 0; i < row; i++)
		{
			for (j = 0; j < column; j++)
			{
				printf("\t%d", matrix[i][j]);
			}
			printf("\n");
		}
		printf("The transpose of your matrix is:\n");
		for (i = 0; i < row; i++)
		{
			for (j = 0; j < column; j++)
			{
				printf("\t%d", matrix[j][i]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("\nNumber of rows and columns must be equal\n");
		for (c.t = 0; c.t < 1100000000; c.t++);
		system("cls");
	}
	printf("\n\nWhat do you wish to do now?");
	printf("\n1.Go back to main menu\n2.Continue working with matrices\n\nPress any other number to Exit program");
	printf("\n\nAnswer: ");
	scanf("%d", &c.l);
	if (c.l == 1)
	{
		printf("\nPress Enter to return to main menu");
		for (c.t = 0; c.t < 900000000; c.t++);
		_getch();
		system("cls");
		printf("\t\t\tMAIN MENU\n");
		printf("1.Matrices\n2.Sets\n3.Exit program");
		printf("\nChoose which you wish to work with: ");
		scanf("%d", &m.a);
		printf("\nPress Enter");
	}
	else if (c.l == 2)
	{
		printf("\nOkay\n");
		for (c.t = 0; c.t < 600000000; c.t++);
		system("cls");
	}
	else
	{
		exit(0);
	}
}
void addition()
{
	int row1, column1, matrix1[100][100], row2, column2, matrix2[100][100], i, j, add[100][100];
	printf("\nPlease enter size of row and column of matrix 1");
	printf("\nRow:");
	scanf("%d", &row1);
	printf("Column:");
	scanf("%d", &column1);
	printf("\nNow enter size of row and column of second matrix");
	printf("\nRow:");
	scanf("%d", &row2);
	printf("Column:");
	scanf("%d", &column2);
	if (row1 == row2 && column1 == column2)
	{
		printf("\nEnter values of your first matrix:\n");
		for (i = 0; i < row1; i++)
		{
			for (j = 0; j < column1; j++)
			{
				scanf("%d", &matrix1[i][j]);
			}
		}
		printf("The elements of your first matrix are:\n");
		for (i = 0; i < row1; i++)
		{
			for (j = 0; j < column1; j++)
			{
				printf("\t%d", matrix1[i][j]);
			}
			printf("\n");
		}
		printf("Now please enter values of your second matrix:\n");
		for (i = 0; i < row2; i++)
		{
			for (j = 0; j < column2; j++)
			{
				scanf("%d", &matrix2[i][j]);
			}
		}
		printf("The elements of your second matrix are:\n");
		for (i = 0; i < row2; i++)
		{
			for (j = 0; j < column2; j++)
			{
				printf("\t%d", matrix2[i][j]);
			}
			printf("\n");
		}
		for (i = 0; i < row1; i++)
		{
			for (j = 0; j < column1; j++)
			{
				add[i][j] = matrix1[i][j] + matrix2[i][j];
			}
		}
		printf("\nThe addition of the two matrices is:\n");
		for (i = 0; i < row1; i++)
		{
			for (j = 0; j < column1; j++)
			{
				printf("\t%d", add[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("\nNumber of rows and columns of each matrix must be equal");
		for (c.t = 0; c.t < 800000000; c.t++);
	}

	printf("\n\nWhat do you wish to do now?");
	printf("\n1.Go back to main menu\n2.Continue working with matrices\n\nPress any other number to Exit program");
	printf("\n\nAnswer: ");
	scanf("%d", &c.l);
	if (c.l == 1)
	{
		printf("\nPress Enter to return to main menu");
		for (c.t = 0; c.t < 900000000; c.t++);
		_getch();
		system("cls");
		printf("\t\t\tMAIN MENU\n");
		printf("1.Matrices\n2.Sets\n3.Exit program");
		printf("\nChoose which you wish to work with: ");
		scanf("%d", &m.a);
		printf("\nPress Enter");
	}
	else if (c.l == 2)
	{
		printf("\nOkay");
		for (c.t = 0; c.t < 600000000; c.t++);
		system("cls");
	}
	else
	{
		exit(0);
	}
}



void sets()
{
	printf("\t\t\tSETS\n");
	printf("1.Union\t\t\t\t5.Return to main menu\n2.Intersectiont\t\t\t6.Exit program\n3.Cardinal Product\n4.Difference\n");
	printf("\nSelect which function you wish to carry out with your sets: ");
	scanf("%d", &s.k);
	printf("\n");
	for (;;)
	{
		switch (s.k)
		{
		case 1:
			unionofset();
			break;
		case 2:
			intersection();
			break;
		case 3:
			cardinalproduct();
			break;
		case 4:
			difference();
			break;
		case 5:
			printf("\nReturning to main menu");
			for (c.t = 0; c.t < 900000000; c.t++);
			system("cls");
			printf("\t\t\tMAIN MENU\n");
			printf("1.Matrices\n2.Sets\n3.Exit program");
			printf("\nChoose which you wish to work with: \n");
			scanf("%d", &m.a);
			printf("Press Enter");
			break;
		case 6:
			exit(0);
			break;
		default:
			printf("Please select one of the options above");
			for (s.x = 0; s.x < 800000000; s.x++);
			system("cls");
			printf("\t\t\tSETS\n");
			printf("1.Union\t\t\t\t5.Return to main menu\n2.Intersectiont\t\t\t6.Exit program\n3.Cardinal Product\n4.Difference\n");
			printf("\nSelect which function you wish to carry out with your sets: ");
			scanf("%d", &s.k);
			printf("\n");
			break;
		}
		if (s.l == 1)
		{
			break;
		}
		if (s.k == 5)
		{
			break;
		}
		if (s.l == 2)
		{
			break;
		}
	}
}

void unionofset()
{
	printf("State number of elements of first set:\n");
	scanf("%d", &s.first);
	printf("State number of elements of second set:\n");
	scanf("%d", &s.second);
	printf("Enter values of first set\n");
	for (s.i = 0; s.i < s.first; s.i++)
	{
		scanf("%d", &s.set1[s.i]);
	}
	for (s.i = 0; s.i < (s.first - 1); s.i++)
	{
		for (s.d = 0; s.d < (s.first - s.i - 1); s.d++)
		{
			if (s.set1[s.d] > s.set1[s.d + 1])
			{
				s.swap = s.set1[s.d];
				s.set1[s.d] = s.set1[s.d + 1];
				s.set1[s.d + 1] = s.swap;
			}
		}
	}


	printf("This is your first set having been sorted in ascending order:\n");
	for (s.i = 0; s.i < s.first; s.i++)
	{
		printf("%d", s.set1[s.i]);
		printf("\t");
	}
	printf("\nEnter values of second set\n");
	for (s.j = 0; s.j < s.second; s.j++)
	{
		scanf("%d", &s.set2[s.j]);
	}

	for (s.j = 0; s.j < (s.second - 1); s.j++)
	{
		for (s.d = 0; s.d < (s.second - s.j - 1); s.d++)
		{
			if (s.set2[s.d] > s.set2[s.d + 1])
			{
				s.swap = s.set2[s.d];
				s.set2[s.d] = s.set2[s.d + 1];
				s.set2[s.d + 1] = s.swap;
			}
		}
	}

	printf("This is your second set having been sorted in ascending order:\n");
	for (s.j = 0; s.j < s.second; s.j++)
	{
		printf("%d", s.set2[s.j]);
		printf("\t");
	}

	printf("\nBelow is your union:");
	printf("\n");
	s.i = 0, s.j = 0;
	while (s.i < s.first && s.j < s.second)
	{
		if (s.set1[s.i] < s.set2[s.j])
		{
			printf("%d", s.set1[s.i]);
			s.i++;
		}
		else if (s.set2[s.j] < s.set1[s.i])
		{
			printf("%d", s.set2[s.j]);
			s.j++;
		}
		else
		{
			printf("%d", s.set1[s.i]);
			s.j++;
			s.i++;
		}
		printf("\t");
	}
	while (s.i < s.first)
	{
		printf("%d", s.set1[s.i]);
		printf("\t");
		s.i++;
	}
	while (s.j < s.second)
	{
		printf("%d", s.set2[s.j]);
		printf("\t");
		s.j++;
	}
	printf("\n\nWhat do you wish to do now?");
	printf("\n1.Go back to main menu\n2.Continue working with sets\n\nPress any other number to Exit program");
	printf("\n\nAnswer: ");
	scanf("%d", &s.l);
	if (s.l == 1)
	{
		printf("\nPress Enter to return to main menu");
		for (c.t = 0; c.t < 900000000; c.t++);
		_getch();
		system("cls");
		printf("\t\t\tMAIN MENU\n");
		printf("1.Matrices\n2.Sets\n3.Exit program");
		printf("\nChoose which you wish to work with: ");
		scanf("%d", &m.a);
		printf("\nPress Enter");
	}
	else if (s.l == 2)
	{
		printf("\nOkay\n");
		for (s.x = 0; s.x < 600000000; s.x++);
		printf("%d", s.x);
		system("cls");
	}
	else
	{
		exit(0);
	}
}
void intersection()
{
	printf("State number of elements of first set:\n");
	scanf("%d", &s.first);
	printf("State number of elements of second set:\n");
	scanf("%d", &s.second);
	printf("Enter values of first set\n");
	for (s.i = 0; s.i < s.first; s.i++)
	{
		scanf("%d", &s.set1[s.i]);
	}
	for (s.i = 0; s.i < (s.first - 1); s.i++)
	{
		for (s.d = 0; s.d < (s.first - s.i - 1); s.d++)
		{
			if (s.set1[s.d] > s.set1[s.d + 1])
			{
				s.swap = s.set1[s.d];
				s.set1[s.d] = s.set1[s.d + 1];
				s.set1[s.d + 1] = s.swap;
			}
		}
	}


	printf("This is your first set having been sorted in ascending order:\n");
	for (s.i = 0; s.i < s.first; s.i++)
	{
		printf("%d", s.set1[s.i]);
		printf("\t");
	}
	printf("\nEnter values of second set\n");
	for (s.j = 0; s.j < s.second; s.j++)
	{
		scanf("%d", &s.set2[s.j]);
	}

	for (s.j = 0; s.j < (s.second - 1); s.j++)
	{
		for (s.d = 0; s.d < (s.second - s.j - 1); s.d++)
		{
			if (s.set2[s.d] > s.set2[s.d + 1])
			{
				s.swap = s.set2[s.d];
				s.set2[s.d] = s.set2[s.d + 1];
				s.set2[s.d + 1] = s.swap;
			}
		}
	}

	printf("This is your second set having been sorted in ascending order:\n");
	for (s.j = 0; s.j < s.second; s.j++)
	{
		printf("%d", s.set2[s.j]);
		printf("\t");
	}
	printf("\nBelow is your Intersection:");
	printf("\n");
	s.i = 0, s.j = 0;
	while (s.i < s.first && s.j < s.second)
	{
		if (s.set1[s.i] < s.set2[s.j])
		{
			s.i++;
		}
		else if (s.set2[s.j] < s.set1[s.i])
		{
			s.j++;
		}
		else
		{
			printf("%d", s.set1[s.i]);
			s.i++;
			s.j++;
			printf("\t");
		}
	}

	printf("\n\nWhat do you wish to do now?");
	printf("\n1.Go back to main menu\n2.Continue working with sets\n\nPress any other number to Exit program");
	printf("\n\nAnswer: ");
	scanf("%d", &s.l);
	if (s.l == 1)
	{
		printf("\nPress Enter to return to main menu");
		for (c.t = 0; c.t < 900000000; c.t++);
		_getch();
		system("cls");
		printf("\t\t\tMAIN MENU\n");
		printf("1.Matrices\n2.Sets\n3.Exit program");
		printf("\nChoose which you wish to work with: ");
		scanf("%d", &m.a);
		printf("\nPress Enter");
	}
	else if (s.l == 2)
	{
		printf("\nOkay\n");
		for (s.x = 0; s.x < 600000000; s.x++);
		printf("%d", s.x);
		system("cls");
	}
	else
	{
		exit(0);
	}

}
void cardinalproduct()
{
	printf("State number of elements of first set:\n");
	scanf("%d", &s.first);
	printf("State number of elements of second set:\n");
	scanf("%d", &s.second);
	printf("\nEnter values of first set\n");
	for (s.i = 0; s.i < s.first; s.i++)
	{
		scanf("%d", &s.set1[s.i]);
	}
	printf("This is your first set:\n");
	for (s.i = 0; s.i < s.first; s.i++)
	{
		printf("%d", s.set1[s.i]);
		printf("\t");
	}
	printf("\n\nEnter values of second set\n");
	for (s.j = 0; s.j < s.second; s.j++)
	{
		scanf("%d", &s.set2[s.j]);
	}
	printf("This is your second set:\n");
	for (s.j = 0; s.j < s.second; s.j++)
	{
		printf("%d", s.set2[s.j]);
		printf("\t");
	}
	printf("\n\nBelow is the cardinal product:\n");
	for (s.i = 0; s.i < s.first; s.i++)
	{
		for (s.j = 0; s.j < s.second; s.j++)
		{
			printf("{%d,%d}\t", s.set1[s.i], s.set2[s.j]);
		}
	}
	printf("\n\nWhat do you wish to do now?");
	printf("\n1.Go back to main menu\n2.Continue working with sets\n\nPress any other number to Exit program");
	printf("\n\nAnswer: ");
	scanf("%d", &s.l);
	if (s.l == 1)
	{
		printf("\nPress Enter to return to main menu");
		for (c.t = 0; c.t < 900000000; c.t++);
		_getch();
		system("cls");
		printf("\t\t\tMAIN MENU\n");
		printf("1.Matrices\n2.Sets\n3.Exit program");
		printf("\nChoose which you wish to work with: ");
		scanf("%d", &m.a);
		printf("\nPress Enter");
	}
	else if (s.l == 2)
	{
		printf("\nOkay\n");
		for (s.x = 0; s.x < 600000000; s.x++);
		printf("%d", s.x);
		system("cls");
	}
	else
	{
		exit(0);
	}
}
void difference()
{
	printf("State number of elements of first set:\n");
	scanf("%d", &s.first);
	printf("State number of elements of second set:\n");
	scanf("%d", &s.second);
	printf("\nEnter values of first set\n");
	for (s.i = 0; s.i < s.first; s.i++)
	{
		scanf("%d", &s.set1[s.i]);
	}
	printf("This is your first set:\n");
	for (s.i = 0; s.i < s.first; s.i++)
	{
		printf("%d", s.set1[s.i]);
		printf("\t");
	}
	printf("\n\nEnter values of second set\n");
	for (s.j = 0; s.j < s.second; s.j++)
	{
		scanf("%d", &s.set2[s.j]);
	}
	printf("\nThis is your second set:\n");
	for (s.j = 0; s.j < s.second; s.j++)
	{
		printf("%d", s.set2[s.j]);
		printf("\t");
	}
	printf("\n\n1.First set-Second set\n2.Second set-First set");
	printf("\n\nWhat difference do you wish to carry out: ");
	scanf("%d", &s.a);
	switch (s.a)
	{
	case 1:
		s.n = 0;
		s.z = 0;
		for (s.i = 0; s.i < s.first; s.i++)
		{
			s.m = 0;
			for (s.j = 0; s.j < s.second; s.j++)
			{
				if (s.set1[s.i] == s.set2[s.j])
				{
					s.m = 0;
					break;
				}
				else
					s.m = 1;
			}
			if (s.m == 1)
			{
				s.set3[s.n] = s.set1[s.i];
				s.n++;
				s.z++;
			}
		}
		printf("\nDifference of set1-set2 is below\n");
		for (s.n = 0; s.n < s.z; s.n++)
		{
			printf("%d", s.set3[s.n]);
			printf("\t");
		}
		break;
	case 2:
		s.n = 0;
		s.z = 0;
		for (s.j = 0; s.j < s.second; s.j++)
		{
			s.m = 0;
			for (s.i = 0; s.i < s.first; s.i++)
			{
				if (s.set2[s.j] == s.set1[s.i])
				{
					s.m = 0;
					break;
				}
				else
					s.m = 1;
			}
			if (s.m == 1)
			{
				s.set3[s.n] = s.set2[s.j];
				s.n++;
				s.z++;
			}
		}
		printf("\nDifference of set 2 - set 1 is below\n");
		for (s.n = 0; s.n < s.z; s.n++)
		{
			printf("%d", s.set3[s.n]);
			printf("\t");
		}

		break;
	default:
		printf("\nInvalid option");
		break;
	}
	printf("\n\nWhat do you wish to do now?");
	printf("\n1.Go back to main menu\n2.Continue working with sets\n\nPress any other number to Exit program");
	printf("\n\nAnswer: ");
	scanf("%d", &s.l);
	if (s.l == 1)
	{
		printf("\nPress Enter to return to main menu");
		for (c.t = 0; c.t < 900000000; c.t++);
		system("cls");
		printf("\t\t\tMAIN MENU\n");
		printf("1.Matrices\n2.Sets\n3.Exit program");
		printf("\nChoose which you wish to work with: ");
		scanf("%d", &m.a);
		printf("\nPress Enter");
	}
	else if (s.l == 2)
	{
		printf("\nOkay\n");
		for (s.x = 0; s.x < 600000000; s.x++);
		printf("%d", s.x);
		system("cls");
	}
	else
	{
		exit(0);
	}
}
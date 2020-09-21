#define _CRT_SECURE_NO_WARNINGS
#include <conio.h> 
#include <dos.h>  
#include <stdio.h> 
#include <string.h> 


void inputchar(void);
void outputchar(void);


struct charstr
{
	char Letters[4];
	int i;
}str;

int main()
{
	inputchar();
	_getch();
	outputchar();
	_getch();


}

void inputchar()
{
	printf("InPut T or F : ");
	for (str.i = 0; str.i < 3; str.i++)
	{
		str.Letters[str.i] = _getch();
		printf("%c", str.Letters[str.i]);
	}
	str.Letters[str.i] = '\0';
	printf("\n");

}
void outputchar()
{

	printf("Output T or F : ");

	//^
	if (str.Letters[1] == '^')
	{
		if (str.Letters[0] == 'T' && str.Letters[2] == 'T')
		{
			printf("T");
		}
		else
		{
			printf("F");
		}
	}

	//V
	if (str.Letters[1] == 'V')
	{
		if (str.Letters[0] == 'F' && str.Letters[2] == 'F')
		{
			printf("F");
		}
		else
		{
			printf("T");
		}
	}

	//>
	if (str.Letters[1] == '>')
	{
		if (str.Letters[0] == 'T' && str.Letters[2] == 'F')
		{
			printf("F");
		}
		else
		{
			printf("T");
		}
	}

	//<
	if (str.Letters[1] == '<')
	{
		if (str.Letters[0] == 'T' && str.Letters[2] == 'T' || str.Letters[0] == 'F' && str.Letters[2] == 'F')
		{
			printf("T");
		}
		else
		{
			printf("F");
		}
	}

}
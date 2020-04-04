#include<stdio.h>
#include<conio.h>
char a[9]={'1','2','3','4','5','6','7','8','9'};
int count=0;
void check(char,char);
void game()
{
	printf("\n\t\t\tTIK TOK TOE");
}
void table()
{
	printf("\n\n\t\t\t|---|---|---|");
	printf("\n\t\t\t| %c | %c | %c |",a[0],a[1],a[2]);
	printf("\n\t\t\t|---|---|---|");
	printf("\n\t\t\t| %c | %c | %c |",a[3],a[4],a[5]);
	printf("\n\t\t\t|---|---|---|");
	printf("\n\t\t\t| %c | %c | %c |",a[6],a[7],a[8]);
}
void player()
{
printf("\nplayer1 symbol :x:\n");
printf("player2 symbol :0:\n");	
}
void choice()
{
	char num;
	printf("\n enter the first player who will start the game\n");
	fflush(stdin);
	scanf("%c",&num);
}
void start()
{
	char p,s;
	printf("\n enter your position and symbol\n");
	fflush(stdin);
	scanf("%c %c",&p,&s);
	count++;
	check(p,s);
}
int enter()
{
	if((a[0]=='x'&&a[1]=='x'&&a[2]=='x') || (a[0]=='x'&&a[3]=='x'&&a[6]=='x')||(a[0]=='x'&&a[4]=='x'&&a[8]=='x'))
	return(100);
	else if((a[0]=='0'&&a[1]=='0'&&a[2]=='0') || (a[0]=='0'&&a[3]=='0'&&a[6]=='0')||(a[0]=='0'&&a[4]=='0'&&a[8]=='0'))
	return(200);
	else if(a[1]=='x'&&a[4]=='x'&&a[7]=='x')
	return(100);
	else if(a[1]=='0'&&a[4]=='0'&&a[7]=='0')
	return(200);
	else if((a[2]=='x'&&a[5]=='x'&&a[8]=='x')||(a[2]=='x'&&a[4]=='x'&&a[6]=='x'))
	return(100);
	else if((a[2]=='0'&&a[5]=='0'&&a[8]=='0')||(a[2]=='0'&&a[4]=='0'&&a[6]=='0'))
	return(200);
	else if(a[3]=='x'&&a[4]=='x'&&a[5]=='x')
	return(100);
	else if(a[3]=='0'&&a[4]=='0'&&a[5]=='0')
	return(200);
	else if(a[6]=='x'&&a[7]=='x'&&a[8]=='x')
	return(100);
	else if(a[6]=='0'&&a[7]=='0'&&a[8]=='0')
	return(200);
	return(300);
}
void check(char P,char S)
{
	int i;
	for(i=0;i<=8;i++)
	{
		if(a[i]==P)
		{
			a[i]=S;
		}
	}
}
int main()
{
	int t;
	char ch;
	again:
	game();
	table();
	player();
	choice();
	label:
	start();
	t=enter();
	table();
	if(count<9)
  {
	if(t==100)
	{
		printf("\n player 1 won:");
	}
	else if(t==200)
	{
		printf("\n player 2 won:");
	}
	else
	goto label;
  }
else
{
	printf("\n game draw");
}
	printf("\n do you want to play again? Press 'y' for yes OR 'n' for no");
	fflush(stdin);
	scanf("%c",&ch);
	if(ch=='y'||ch=='Y')
	{
		a[0]='1';
		a[1]='2';
		a[2]='3';
		a[3]='4';
		a[4]='5';
		a[5]='6';
		a[6]='7';
		a[7]='8';
		a[8]='9';
		count=0;
		goto again;
	}
	getch();
}

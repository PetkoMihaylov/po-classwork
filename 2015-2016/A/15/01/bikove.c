#include <stdio.h> //15 nomer 10a klas Ivo Todorov

int number=5389;

int main()
{
	int curCows, curBulls, curInput, tempN, tempI guess=0, curPos, posBlacklist[10]={0};
	while(guess!=1)
	{
		curCows=0;
		curBulls=0;
		printf("Input your guess: ");
		scanf("%d", &curInput);
		tempN=number;
		tempI=curInput;
		curPos=0;
		while(tempN!=0) //check for bull
		{
			if(temp%10==curInput%10)
			{
				curBulls++;
				posBlacklist[curPos]=1;
			}
			tempN/=10;
			tempI/=10;
			curPos++;
		}
		tempN=number; 
		while(tempN!=0) //unfinished cycle to find the remaining cows
		{
			tempI=input;
			while(tempI!=0)
			{
				if(tempN%10==tempI%10)
			}
		}
	}
	
}
int posIsTaken(int arr[10], int pos)//checks if the position is taken
{
	int i, temp=number;
	for(i=0; number!=0; i++)
	{
		if()
	}
}

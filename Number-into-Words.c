#include<stdio.h>
#pragma warning(disable:4996)

void main()
{
	int userinput=1;

	do
	{
		if (userinput <= 0 || userinput > 99999 )
		{
			printf("\n---------- Wrong Input, Please Enter a Number between 1 and 99999 ----------");
		}
		printf("\nEnter a Number (1-99999):\t ");
		scanf(" %d", &userinput);
	} while (userinput <= 0 || userinput >99999);

// Check the Digits - Method 1

	int temp1 = 0, td = 0;
	
	int countcheck=1, digits=0;
	countcheck=100000-userinput;
	
// Check the Digits - Method 2
	
	int temp3=userinput, count_temp3=0;
	while(temp3>0)
	{
		temp3 = temp3/10;
		count_temp3++;
	}
	

	
//Digit Counting

	if ( countcheck > 99990 && countcheck <= 99999)
	{
		// Means the number is only one digit
		digits=1;
	}

	else if ( count_temp3==2 ) //( countcheck > 99901) && ( countcheck <= 99990) 
	{
		// Means the number is two digit
		digits=2;
		
	}
	
	else if( count_temp3==5 )
	{
		// Means the number is five digit
		digits = 5;
	}
	
	else if ( count_temp3==3) // countcheck <= 99900 && countcheck >= 99001
	{
		// Means the number is three digit
		digits=3;

	}
	
	else if( count_temp3==4 ) //countcheck >= 90001 && countcheck <= 99000
	{
		// Means the number is four digit
		digits = 4;
	}
	
	else
	{
		printf(" %s", "Sorry for InConvenience, we're having some problem right now. Please Try Again Later...!!!");
	}
	
// Digits Count --- completed
	
	printf("\n\nYour Number in Words:");
	
// Printing of Output for a One-Digit Number
	
	if(digits==1)
	{
		switch(userinput)
		{
			case 0: printf("\nZero"); break;
			case 1: printf("\nOne"); break;
			case 2: printf("\nTwo"); break;
			case 3: printf("\nThree"); break;
			case 4: printf("\nFour"); break;
			case 5: printf("\nFive"); break;
			case 6: printf("\nSix"); break;
			case 7: printf("\nSeven"); break;
			case 8: printf("\nEight"); break;
			case 9: printf("\nNine"); break;
		}
	}
	
// Printing of Output for a Two-Digit Number
	
	else if(digits==2)
	{
		if (userinput>=11 && userinput<=19)
		{
			switch(userinput)
			{
				case 11: printf("\nEleven"); break;
				case 12: printf("\nTwelve"); break;
				case 13: printf("\nThirteen"); break;
				case 14: printf("\nFourteen"); break;
				case 15: printf("\nFifteen"); break;
				case 16: printf("\nSixteen"); break;
				case 17: printf("\nSeventeen"); break;
				case 18: printf("\nEighteen"); break;
				case 19: printf("\nNineteen"); break;
			
			}
		}
		else
		{
			int firstdigit=0, lastdigit=0;
			
			firstdigit=userinput/10;
			lastdigit=userinput%10;
			
			switch(firstdigit)
			{
				case 2: printf("\nTwenty "); break;
				case 3: printf("\nThirty "); break;
				case 4: printf("\nForty "); break;
				case 5: printf("\nFifty "); break;
				case 6: printf("\nSixty "); break;
				case 7: printf("\nSeventy "); break;
				case 8: printf("\nEighty "); break;
				case 9: printf("\nNinty "); break;
			}
			
			switch(lastdigit)
			{
				case 0: printf(""); break;
				case 1: printf("One"); break;
				case 2: printf("Two"); break;
				case 3: printf("Three"); break;
				case 4: printf("Four"); break;
				case 5: printf("Five"); break;
				case 6: printf("Six"); break;
				case 7: printf("Seven"); break;
				case 8: printf("Eight"); break;
				case 9: printf("Nine"); break;
			}
		}
		
		
	}
	
// Printing Output For a Three-Digit Number

	else if(digits==3)
	{
		int firstdigit=0, lastdigit=0, middigit=0;
		
		// Suppose userinput = 765
		
		firstdigit=userinput/100; // firstdigit = 7
		
		int temp2=0;
		temp2=userinput%100; // temp2 = 65
		middigit=temp2/10; // middigit = 6
		
		lastdigit=temp2%10; // lastdigit = 5
		
// printing the results
		
		switch(firstdigit)
		{
			case 1: printf("\nOne Hundred "); break;
			case 2: printf("\nTwo Hundred "); break;
			case 3: printf("\nThree Hundred "); break;
			case 4: printf("\nFour Hundred "); break;
			case 5: printf("\nFive Hundred "); break;
			case 6: printf("\nSix Hundred "); break;
			case 7: printf("\nSeven Hundred "); break;
			case 8: printf("\nEight Hundred "); break;
			case 9: printf("\nNine Hundred "); break;
		}
		
		if(temp2>=11 && temp2<=19)
		{
			switch(temp2)
			{
				case 11: printf(" and Eleven"); break;
				case 12: printf(" and Twelve"); break;
				case 13: printf(" and Thirteen"); break;
				case 14: printf(" and Fourteen"); break;
				case 15: printf(" and Fifteen"); break;
				case 16: printf(" and Sixteen"); break;
				case 17: printf(" and Seventeen"); break;
				case 18: printf(" and Eighteen"); break;
				case 19: printf(" and Nineteen"); break;
			
			}
		}
		else
		{		
			switch(middigit)
				{
					case 0: printf("");break;
					case 2: printf(" and Twenty "); break;
					case 3: printf(" and Thirty "); break;
					case 4: printf(" and Forty "); break;
					case 5: printf(" and Fifty "); break;
					case 6: printf(" and Sixty "); break;
					case 7: printf(" and Seventy "); break;
					case 8: printf(" and Eighty "); break;
					case 9: printf(" and Ninty "); break;
				}
				
				switch(lastdigit)
				{
					case 0: printf(""); break;
					case 1: printf("One"); break;
					case 2: printf("Two"); break;
					case 3: printf("Three"); break;
					case 4: printf("Four"); break;
					case 5: printf("Five"); break;
					case 6: printf("Six"); break;
					case 7: printf("Seven"); break;
					case 8: printf("Eight"); break;
					case 9: printf("Nine"); break;
				}
		}
		
		
	}
	
// printing for a Four Digit Number

	else if (digits == 4)
	{
		int temp2=0;
		int firstdigit, seconddigit, thirddigit, forthdigit;
		
		// Suppose Userinput = 9876
		forthdigit = userinput % 10; // forthdigit = 6
		temp2= userinput/10; // temp2 = 987
		thirddigit=temp2%10; // thirddigit = 7;
		temp2= temp2/10; //temp2 = 98
		seconddigit = temp2%10; // seconddigit = 8
		temp2= temp2/10; // temp2=9
		firstdigit=temp2; // firstdigit = 9
		
		
		
	// Exceptional Case for 11-19
	
		int temp3 = userinput % 100;
		
		// Printing the numbers
		
		switch(firstdigit)
		{
			case 1: printf("\nOne Thousand"); break;
			case 2: printf("\nTwo Thousand"); break;
			case 3: printf("\nThree Thousand"); break;
			case 4: printf("\nFour Thousand"); break;
			case 5: printf("\nFive Thousand"); break;
			case 6: printf("\nSix Thousand"); break;
			case 7: printf("\nSeven Thousand"); break;
			case 8: printf("\nEight Thousand"); break;
			case 9: printf("\nNine Thousand"); break;
		}
		
		switch(seconddigit)
		{
			case 1: printf(" One Hundred "); break;
			case 2: printf(" Two Hundred "); break;
			case 3: printf(" Three Hundred "); break;
			case 4: printf(" Four Hundred "); break;
			case 5: printf(" Five Hundred "); break;
			case 6: printf(" Six Hundred "); break;
			case 7: printf(" Seven Hundred "); break;
			case 8: printf(" Eight Hundred "); break;
			case 9: printf(" Nine Hundred "); break;
		}
		
		if(temp3>=11 && temp3<=19)
		{
			switch(temp3)
			{
				case 11: printf("and Eleven"); break;
				case 12: printf("and Twelve"); break;
				case 13: printf("and Thirteen"); break;
				case 14: printf("and Fourteen"); break;
				case 15: printf("and Fifteen"); break;
				case 16: printf("and Sixteen"); break;
				case 17: printf("and Seventeen"); break;
				case 18: printf("and Eighteen"); break;
				case 19: printf("and Nineteen"); break;
			}
		}
		else
		{
			switch(thirddigit)
			{
				case 0: 						break;
				case 2: printf("and Twenty "); break;
				case 3: printf("and Thirty "); break;
				case 4: printf("and Forty "); break;
				case 5: printf("and Fifty "); break;
				case 6: printf("and Sixty "); break;
				case 7: printf("and Seventy "); break;
				case 8: printf("and Eighty "); break;
				case 9: printf("and Ninty "); break;	
			}
			
			switch(forthdigit)
			{
				case 0: printf(""); break;
				case 1: printf("One"); break;
				case 2: printf("Two"); break;
				case 3: printf("Three"); break;
				case 4: printf("Four"); break;
				case 5: printf("Five"); break;
				case 6: printf("Six"); break;
				case 7: printf("Seven"); break;
				case 8: printf("Eight"); break;
				case 9: printf("Nine"); break;
			}
		}
		
	}
	
// Printing for a Five-Digit Number

	else if (digits==5)
	{
		int temp2=0, firstdigit=0, seconddigit=0, thirddigit=0, forthdigit=0, fifthdigit=0;
		
	//Calculating the digits of the Userinput
		
		// Suppose userinput = 98765
		temp2 = userinput; // temp2 = 98765
		fifthdigit=userinput%10; // fithdigit= 5
		temp2=temp2/10; // temp2 = 9876
		
		forthdigit=temp2%10; // forthdigit = 6
		temp2=temp2/10; // temp2 = 987
		
		thirddigit = temp2%10; //thirddigit = 7
		temp2=temp2/10; // temp2 = 98
		
		seconddigit = temp2%10; // second digit = 8
		
		firstdigit = temp2 / 10; // first digit = 9
		
		if(temp2 > 10 && temp2 < 20)
		{
			switch(temp2)
			{
				case 11: printf("\nEleven Thousand "); break;
				case 12: printf("\nTwelve Thousand "); break;
				case 13: printf("\nThirteen Thousand "); break;
				case 14: printf("\nFourteen Thousand "); break;
				case 15: printf("\nFifteen Thousand "); break;
				case 16: printf("\nSixteen Thousand "); break;
				case 17: printf("\nSeventeen Thousand "); break;
				case 18: printf("\nEighteen Thousand "); break;
				case 19: printf("\nNineteen Thousand "); break;
			}
		}
		else
		{
			switch(firstdigit)
			{
				case 2: printf("\nTwenty "); break;
				case 3: printf("\nThirty "); break;
				case 4: printf("\nForty "); break;
				case 5: printf("\nFifty "); break;
				case 6: printf("\nSixty "); break;
				case 7: printf("\nSeventy "); break;
				case 8: printf("\nEighty "); break;
				case 9: printf("\nNinty "); break;
			}
			
			switch(seconddigit)
			{
				case 1: printf("One Thousand "); break;
				case 2: printf("Two Thousand "); break;
				case 3: printf("Three Thousand "); break;
				case 4: printf("Four Thousand "); break;
				case 5: printf("Five Thousand "); break;
				case 6: printf("Six Thousand "); break;
				case 7: printf("Seven Thousand "); break;
				case 8: printf("Eight Thousand "); break;
				case 9: printf("Nine Thousand "); break;
			}
		
		
		}
			switch(thirddigit)
			{
			case 1: printf("One Hundred"); break;
				case 2: printf("Two Hundred"); break;
				case 3: printf("Three Hundred"); break;
				case 4: printf("Four Hundred"); break;
				case 5: printf("Five Hundred"); break;
				case 6: printf("Six Hundred"); break;
				case 7: printf("Seven Hundred"); break;
				case 8: printf("Eight Hundred"); break;
				case 9: printf("Nine Hundred"); break;
			}
		
			switch (forthdigit)
			{
				case 0: printf(" "); break;
				case 2: printf(" and Twenty "); break;
				case 3: printf(" and Thirty "); break;
				case 4: printf(" and Forty "); break;
				case 5: printf(" and Fifty "); break;
				case 6: printf(" and Sixty "); break;
				case 7: printf(" and Seventy "); break;
				case 8: printf(" and Eighty "); break;
				case 9: printf(" and Ninty "); break;
			}
		
			switch(fifthdigit)
			{
					case 0: printf(""); break;
					case 1: printf("One"); break;
					case 2: printf("Two"); break;
					case 3: printf("Three"); break;
					case 4: printf("Four"); break;
					case 5: printf("Five"); break;
					case 6: printf("Six"); break;
					case 7: printf("Seven"); break;
					case 8: printf("Eight"); break;
					case 9: printf("Nine"); break;
			}
	
	}
}



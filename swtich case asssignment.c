#include<stdio.h>
main()
{
	int choice=0;
	printf("Enter a random choice from 1 to 5:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Food item- pizza \nPrice - Rs 239 ");
			break;
		case 2:
			printf("Food item- burger \nPrice - Rs 129 ");
			break;
		case 3:
			printf("Food item- pasta \nPrice - Rs 179 ");
			break;
		case 4:
			printf("Food item- french fries \nPrice - Rs 99 ");
			break;
		case 5:
			printf("Food item- sandwich \nPrice - Rs 149 ");
			break;
		default:
			printf("Invalid choice");
	}
	return 0;
}

#include<stdio.h>
#include<math.h>

int main() {
	int y;
	double n, sum = 0, r;
	printf("Enter your money : ");
	scanf("%lf", &n);
	printf("Input years : ");
	scanf("%d", &y);
	printf("Input ");
	printf("Input Interest rate : ");
	scanf("%lf", &r);
	for (int i = 1; i <= y; i++)
	{
		sum = n * pow(1 + (r / 100), i);
		printf("%3d year you have money = %.4lf\n", i, sum);
	}
	if (sum >= 100000)
	{
		int s;
		printf("Select 1 buy car\nselect 2 not\nPlease select : ");
		scanf("%d", &s);
		if (s == 1)
		{
			double m, t;
			printf("You have money : %.4lf\n", sum);
			printf("Input money to pay car : ");
			scanf("%lf", &m);
			if ((sum - m) >= 0) {
				printf("congrats! you have car\n");
				printf("Your balance is %lf\n", sum - m);
			}
			if (sum - m < 0)
			{
				printf("Your Interest rate : 5%/year\n");
				printf("Input time (month) : ");
				scanf("%lf", &t);
				printf("You pay %.4lf bath/month\n", ((m - sum) * 1.05) / t);
				printf("congrats! you have car\n");

			}

		}
		else if (s == 2)
		{
			printf("You have money : %.4lf\n", sum);
		}
		else
		{
			printf("Error\n");
		}
	}
}
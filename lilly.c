#include <stdio.h>
int main()
{
	int account_withdraw;
	int balance;
	int account = 50000;
	int withdraw = 20000;
	printf("you have withdrawn ugx %d\n", withdraw);
	balance = account-withdraw;
	printf("your account balance is ugx %d",balance);
		return 0;
}

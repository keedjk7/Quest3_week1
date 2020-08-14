#include<stdio.h>

int main() {
	int money,T=0,G=0,H=0,B=0,A=0,D=0,count=0;
	bool check = false,X=false;
	char input;
	scanf_s("%d", &money);
	while (check != true) {
		scanf_s("%c", &input);
		if (input == 'X') {
			check = true;
		}
		else if (input == 'T') {
			if (money >= 10) {
				T++;
				count++;
				money -= 10;
			}
			else {
				check = true;
				X = true;
			}
		}
		else if (input == 'G') {
			if (money >= 10) {
				G++;
				count++;
				money -= 10;
			}
			else {
				check = true;
				X = true;
			}
		}
		else if (input == 'H') {
			if (money >= 20) {
				H++;
				count++;
				money -= 20;
			}
			else {
				check = true;
				X = true;
			}
		}
		else if (input == 'B') {
			if (money >= 20) {
				B++;
				count++;
				money -= 20;
			}
			else {
				check = true;
				X = true;
			}
		}
		else if (input == 'A') {
			if (money >= 30) {
				A++;
				count++;
				money -= 30;
			}
			else {
				check = true;
				X = true;
			}
		}

		if (count == 5) {
			D++;
			count = 0;
		}
	}
	if (X == true) {
		printf("You don\'t have enough point to play\t");
	}
	else {
		printf("End Game\t");
	}
	printf("You still have %d point\n", money);
	printf("Tekken %d Game\n", T);
	printf("GuitarHero %d Game\n", G);
	printf("HouseOfTheDead %d Game\n", H);
	printf("BurnOut %d Game\n", B);
	printf("AirHockey %d Game\n", A);
	printf("DanceRevolution %d Game\n", D);
	return 0;
}
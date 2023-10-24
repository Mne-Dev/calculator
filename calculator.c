#include <stdio.h>

void clean()
{
	printf("\e[1;1H\e[2J");
}

int main()
{
	float num1;
	float num2;
	char opr;
	float sonuc;

	clean();
	printf("Lutfen bir islem seciniz\n1-Toplama '+'\n2-Cikarma '-'\n3-Carpma '*'\n4-Bölme '/'\n");
	scanf("%s", &opr);
	
	clean();
	printf("Birinci sayiyi giriniz\n");
	scanf("%f",&num1);

	clean();
	printf("Ikinci sayiyi giriniz\n");
	scanf("%f",&num2);	

	switch (opr)
	{
	case '+':
		sonuc = num1 + num2;
		printf("%f+%f = %f\n",num1,num2,sonuc);
		break;
	case '-':
		sonuc = num1 - num2;
		printf("%f-%f = %f\n",num1,num2,sonuc);
		break;
	case '*':
		sonuc = num1 * num2;
		printf("%f*%f = %f\n",num1,num2,sonuc);
		break;
	case '/':
		if (num2 == 0)
		{
			clean();
			printf("Sifira bolunemez!\n");
		}
		else
		{
			sonuc = num1 / num2;
			printf("%f/%f = %f\n",num1,num2,sonuc);
		}
		break;

	default:
		clean();
		printf("Lutfen uygun operator kullanın\n");
		break;
	}
	

	
}

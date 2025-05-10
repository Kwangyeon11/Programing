/*   파일명: Assignment06_6.c
	 내용: PA06. choose_menu 함수의 리턴값에 따라 어떤 메뉴가 선택되었는지 간단히 출력하는 프로그램을 작성하시오.
	 작성자: 주광연
	 날짜: 2025.05.09
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int choose_munu(int select);
int assignment_6(void);

int choose_munu(int select) 
{
	switch (select)
	{
	case 1:
		printf("파일 열기를 수행합니다\n");
		break;
	case 2:
		printf("파일을 저장합니다.\n");
		break;
	case 3:
		printf("인쇄합니다.\n");
	
	default:
		break;
	} 
	return 0;
}

int assignment_6(void)
{
	int select;
	char str;

	for (; ; )
	{
		printf("[1.파일 열기  2.파일 저장  3.인쇄  0.종료] 선택? ");
		scanf(" %d", &select);

		str = choose_munu(select);

		if (select >= 1 && select <= 3)
		{
			printf("%c", str);
		}
		
		if (select == 0)
		{
			break;
		} else continue;
	}
	return 0;
}

int main()
{
	assignment_6();
	return 0;
}

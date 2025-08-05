// 25. 07. 24

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void manage_playlist(char(*p)[41], int select, int count) // char(*p)[SIZE], SIZE 기입 필요
{
    char temp1[41] = { NULL };
    
    switch (select) 
    {
        case 1:
        {
            printf("노래 제목? ");
            gets_s(p[count - 1], 41);
            break;
            
        }
        case 2:
        {
            printf("찾을 노래 제목? ");
            gets_s(temp1, 41);
            
			int found = 0; // 찾았는지 여부를 나타내는 변수
            for (int i = 0; i < count; i++)
            {
                if (strcmp(p[i], temp1) == 0)
                {
                    printf("수정할 제목? ");
                    gets_s(p[i], 41);
					found = 1;
                    break;
                }
			}
			if (!found) // 이런식으로 쓰기에 좋음
                 printf("찾는 노래가 없습니다.\n");
            
            break;
        }
        case 3:
        {
            printf("<< 노래 목록 >>\n");
            for (int i = 0; i < count; i++)
            {
                printf(" %s\n", p[i]);
			}
            break;
		}
        case 0:
        {
            printf("프로그램을 종료합니다.\n");
            exit(0);
		}
    }

}

void print_str()
{
    char playlist[20][41];
    char (*p)[41] = playlist;
	int select = 0;
    int count = 0;

    while (1)
    {
        printf("[ 0.종료 1.추가 2.수정 3.목록 ] 선택? ");
		scanf("%d", &select);
		getchar(); // 버퍼 제거 (필요성 모르겠음)

        if (select == 1) 
        {
            if (count >= 20) 
            {
                printf("더 이상 추가할 수 없습니다.\n");
                continue;
            }
            count++;
        }

        manage_playlist(p, select, count);
    }
}

int main()
{
    print_str();
    return 0;
}
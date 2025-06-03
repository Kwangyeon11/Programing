/*   파일명: Assignment10_18.c
     내  용: PA18. 음원 사이트의 플레이리스트 기능을 구현한 프로그램을 작성하시오.
     작성자: 주광연
     날  짜: 2025.06.02
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 5

typedef struct song {
    char title[30];
    char artist[20];
    char genre[20];
    int time;
} SONG;

void print_songs();
void assignment18();

void print_songs(SONG music[], int count)
{

    printf("%-3s %-30s %-20s %-10s %s\n", "", "제목", "아티스트", "장르", "재생시간");
    
    int i;
    for (i = 1; i <= count; i++)
    {
        printf("%-3d: %-30s %-20s %-10s %d초\n", 
            i, music[i - 1].title, music[i - 1].artist, music[i - 1].genre, music[i - 1].time);
    }

}

void assignment18()
{
    
    SONG music[] = { {"thatk u, nexy", "Ariana Grande","pop", 208}, {"Attention", "Charlie Puth","pop", 211}, {"별 보러 가자", "박보검","ballad", 316},
       {"How Long", "Charlie Puth", "pop", 198}, {"I'm Fine", "방탄소년단", "hip-pop", 209}, {"봄날", "방탄소년단", "hip-pop", 274},
       {"Awake", "방탄소년단", "ballad", 226}, {"아낙네", "MINO", "hip-pop", 241} };
    int count = sizeof(music) / sizeof(music[0]);
    SONG* playlist[SIZE] = { NULL };
    int num = 0;

    print_songs(music, count);

    int i, j;
    for (i = 0; i < SIZE; )
    {
        printf("플레이리스트에 추가할 곡 번호? ");
        scanf("%d", &num);

        if (num > 0 && num < 9)
        {
            playlist[i] = &music[num - 1];
            printf("<< 플레이리스트 >>\n");

            int sum = 0;
            for (j = 0; j <= i; j++)
            {
                
                printf("%-20s %-20s %-10s %d초\n",
                    playlist[j]->title, playlist[j]->artist, playlist[j]->genre, playlist[j]->time);

                sum += playlist[j]->time;
            }
            printf("총 재생시간 : %d초\n", sum);
            i++;
        }
        else
        {
            printf("잘못된 곡 번호입니다.\n");
            continue;
        }
    }     
}

int main()
{
    assignment18();

    return 0;
}

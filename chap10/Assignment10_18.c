/*   ���ϸ�: Assignment10_18.c
     ��  ��: PA18. ���� ����Ʈ�� �÷��̸���Ʈ ����� ������ ���α׷��� �ۼ��Ͻÿ�.
     �ۼ���: �ֱ���
     ��  ¥: 2025.06.02
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

    printf("%-3s %-30s %-20s %-10s %s\n", "", "����", "��Ƽ��Ʈ", "�帣", "����ð�");
    
    int i;
    for (i = 1; i <= count; i++)
    {
        printf("%-3d: %-30s %-20s %-10s %d��\n", 
            i, music[i - 1].title, music[i - 1].artist, music[i - 1].genre, music[i - 1].time);
    }

}

void assignment18()
{
    
    SONG music[] = { {"thatk u, nexy", "Ariana Grande","pop", 208}, {"Attention", "Charlie Puth","pop", 211}, {"�� ���� ����", "�ں���","ballad", 316},
       {"How Long", "Charlie Puth", "pop", 198}, {"I'm Fine", "��ź�ҳ��", "hip-pop", 209}, {"����", "��ź�ҳ��", "hip-pop", 274},
       {"Awake", "��ź�ҳ��", "ballad", 226}, {"�Ƴ���", "MINO", "hip-pop", 241} };
    int count = sizeof(music) / sizeof(music[0]);
    SONG* playlist[SIZE] = { NULL };
    int num = 0;

    print_songs(music, count);

    int i, j;
    for (i = 0; i < SIZE; )
    {
        printf("�÷��̸���Ʈ�� �߰��� �� ��ȣ? ");
        scanf("%d", &num);

        if (num > 0 && num < 9)
        {
            playlist[i] = &music[num - 1];
            printf("<< �÷��̸���Ʈ >>\n");

            int sum = 0;
            for (j = 0; j <= i; j++)
            {
                
                printf("%-20s %-20s %-10s %d��\n",
                    playlist[j]->title, playlist[j]->artist, playlist[j]->genre, playlist[j]->time);

                sum += playlist[j]->time;
            }
            printf("�� ����ð� : %d��\n", sum);
            i++;
        }
        else
        {
            printf("�߸��� �� ��ȣ�Դϴ�.\n");
            continue;
        }
    }     
}

int main()
{
    assignment18();

    return 0;
}

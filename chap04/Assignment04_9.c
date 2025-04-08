/*   파일명: Assignment04_9.c
    * 내용: PA09. 동영상의 재생시간을 초 단위로 입력받아 몇 시간 몇 분 몇 초인지 출력하는 프로그램을 작성하시오.
    * 작성자: 주광연
    * 날짜: 2025.4.08
    */

#include <stdio.h>


int assignment0409(void);


int assignment0409(void)
{
    int sec;
    int leftsec;
    int min;
    int hour;


    printf("재생시간(초)? ");
    scanf_s(" %d", &sec);
    
    min = (sec % 3600) / 60;
    hour = sec / 3600;
    leftsec = sec - (min * 60 + hour * 3600);
   
    printf("재생시간은 %d시간 %d분 %d초입니다.", hour, min, leftsec);
   
    
    return 0;

       
}
int main()
{
    assignment0409();
    return 0;

}
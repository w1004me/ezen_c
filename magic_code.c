#include <stdio.h>
#include <windows.h>
#include <stdbool.h>
#include <math.h>

bool que()
{
    char in;
    printf("컴퓨터가 숫자를 맞춥니다.\r\n");
    printf("시작할까요? y or n\r\n");
    scanf("%c",&in);
    fflush(stdin);
    if(in == 'y')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int call_num(int lev, int g_result)
{
    char in;
    int count = 0, line_count = 0;
    bool hi_lo = true;
    for(int i = (int)pow(2,lev); i<= 50; i++)
    {
        if(count == 0)
        {
            hi_lo = true;
        }
        else if(count == (int)pow(2,lev))
        {
            hi_lo = false;
        }

        if(hi_lo == true)
        {
            printf("%d ",i);
            count++;
            line_count++;
        }
        else
        {
            count--;
        }
        if(line_count == 9)
        {
            printf("\r\n");
            line_count = 0;
        }
    }

    printf("\r\n생각하신 숫자가 존재합니까? y or n");
    scanf("%c",&in);
    fflush(stdin);
    if(in == 'y')
    {
        return g_result+(int)pow(2,lev);
    }
    else
    {
        return g_result;
    }
}

void main()
{
    bool result;
    int g_result = 0;
    int level = 0;
    while(1)
    {
        if((level == 6 || level == 0))
        {
            result = que();
        }
        if(result)
        {
            g_result = call_num(level, g_result);
            level++;
            system("cls");
            if(level == 6)
            {
                printf("당신이 생각하신 숫자는 %d 입니다.\r\n",g_result);
            }
        }
        else
        {
            break;
        }
    }
}



#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include<stdio.h>
int main()
{
    
        printf("请选择：\n");
        printf("*******************\n");
        printf("**** 1 猜大小游戏****\n");
        printf("**** 2 掷骰子游戏****\n");
        printf("*******************\n");
        int start;
        scanf("%d", &start);
        switch (start)
        {
          case 1:
          {
            FILE* fp = fopen("C:\\Users\\123\\Desktop\\write_txt.txt", "a+");
            int random;
            int input;
            char StrLine[1024]; 
            printf("*****游戏开始*****\n");
            while (!feof(fp)) 
            { 
              random = atoi(fgets(StrLine,1024,fp)); 
            } 
            input = 0;
            FILE* fp = fopen("C:\\Users\\123\\Desktop\\write_txt.txt", "a+");
            while (1)
            {
                printf("你猜多少：\n");
                scanf("%d", &input);
                if (input > random)
                {   

                    fputs("猜大了", fp);
                }
                else if (input < random)
                {

                    fputs("猜小了", fp);
                }
                else
                {
                    fputs("猜对了", fp);
                    fclose(fp);
                    Sleep(1000);
                    break;
                }
            }
           break;
          }
        case 2:
        {    
             FILE* fp = fopen("C:\\Users\\123\\Desktop\\write_txt.txt", "a+");
             int ai[3];  
             int bi[3];  
             int i;
             srand((unsigned)time(NULL)); 
             for (i = 0; i < 3; i++)
            {
               ai[i] = rand() % 6 + 1;  
               bi[i] = rand() % 6 + 1;
            }  
             for (i = 0; i<3; i++)
            {
                char b[50];
                fputs("甲的点数：", fp);
                fputs(itoa(ai[i],b,10), fp);
            }
            for (i = 0; i<3; i++)
            {
                char c[50];
                fputs("乙的点数：", fp);
                fputs(itoa(ai[i],c,10), fp);
            }
 
             if (ai[0] + ai[1] + ai[2]>bi[0] + bi[1] + bi[2])
            {
               close(fp); 
               fputs("甲获胜", fp);
            }
		  
             else
			{
				close(fp); 
                fputs("乙获胜", fp);
            }
            fclose(fp); 
         break;
        }
        default:
        {  
             printf("输入错误"); 
			 break; 
        }
    return 0;  
    }
}


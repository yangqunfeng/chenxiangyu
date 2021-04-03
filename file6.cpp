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
                    Sleep(1000);
                    fclose(fp);
                    fputs("猜对了", fp);//1 
                    break;
                }
            }
           break;
          }
        case 2:
        {    
             FILE* fp = fopen("C:\\Users\\123\\Desktop\\write_txt.txt", "a+");
             int ai[3];  //甲的三个骰子的点数
             int bi[3];  
             int i;
             srand((unsigned)time(NULL));  //播时间种子，产生随机数
             for (i = 0; i < 3; i++)
            {
               ai[i] = rand() % 6 + 1;  //随机产生1-6的点数
               bi[i] = rand() % 6 + 1;
            }  
            FILE* fp = fopen("C:\\Users\\123\\Desktop\\write_txt.txt", "a+");
             printf("甲的点数：");
             for (i = 0; i<3; i++)
            {  
               fclose(fp);
               printf("%d  ", ai[i]);
                
            }
            printf("\n乙的点数：");
            for (i = 0; i<3; i++)
            {
                 printf("%d  ", bi[i]);
            }
            FILE* fp = fopen("C:\\Users\\123\\Desktop\\write_txt.txt", "a+");
             if (ai[0] + ai[1] + ai[2]>bi[0] + bi[1] + bi[2])
            {  
			   fclose(fp);
               printf("甲获胜");
            }
		  
             else
			{
				fclose(fp);
                printf("乙获胜", fp);
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


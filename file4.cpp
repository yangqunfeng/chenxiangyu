#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include<stdio.h>
int main()
{
    
        printf("��ѡ��\n");
        printf("*******************\n");
        printf("**** 1 �´�С��Ϸ****\n");
        printf("**** 2 ��������Ϸ****\n");
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
            printf("*****��Ϸ��ʼ*****\n");
            while (!feof(fp)) 
            { 
              random = atoi(fgets(StrLine,1024,fp)); 
            } 
            input = 0;
            FILE* fp = fopen("C:\\Users\\123\\Desktop\\write_txt.txt", "a+");
            while (1)
            {
                printf("��¶��٣�\n");
                scanf("%d", &input);
                if (input > random)
                {   

                    fputs("�´���", fp);
                }
                else if (input < random)
                {

                    fputs("��С��", fp);
                }
                else
                {
                    fputs("�¶���", fp);
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
                fputs("�׵ĵ�����", fp);
                fputs(itoa(ai[i],b,10), fp);
            }
            for (i = 0; i<3; i++)
            {
                char c[50];
                fputs("�ҵĵ�����", fp);
                fputs(itoa(ai[i],c,10), fp);
            }
 
             if (ai[0] + ai[1] + ai[2]>bi[0] + bi[1] + bi[2])
            {
               close(fp); 
               fputs("�׻�ʤ", fp);
            }
		  
             else
			{
				close(fp); 
                fputs("�һ�ʤ", fp);
            }
            fclose(fp); 
         break;
        }
        default:
        {  
             printf("�������"); 
			 break; 
        }
    return 0;  
    }
}


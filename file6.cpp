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
                    Sleep(1000);
                    fclose(fp);
                    fputs("�¶���", fp);//1 
                    break;
                }
            }
           break;
          }
        case 2:
        {    
             FILE* fp = fopen("C:\\Users\\123\\Desktop\\write_txt.txt", "a+");
             int ai[3];  //�׵��������ӵĵ���
             int bi[3];  
             int i;
             srand((unsigned)time(NULL));  //��ʱ�����ӣ����������
             for (i = 0; i < 3; i++)
            {
               ai[i] = rand() % 6 + 1;  //�������1-6�ĵ���
               bi[i] = rand() % 6 + 1;
            }  
            FILE* fp = fopen("C:\\Users\\123\\Desktop\\write_txt.txt", "a+");
             printf("�׵ĵ�����");
             for (i = 0; i<3; i++)
            {  
               fclose(fp);
               printf("%d  ", ai[i]);
                
            }
            printf("\n�ҵĵ�����");
            for (i = 0; i<3; i++)
            {
                 printf("%d  ", bi[i]);
            }
            FILE* fp = fopen("C:\\Users\\123\\Desktop\\write_txt.txt", "a+");
             if (ai[0] + ai[1] + ai[2]>bi[0] + bi[1] + bi[2])
            {  
			   fclose(fp);
               printf("�׻�ʤ");
            }
		  
             else
			{
				fclose(fp);
                printf("�һ�ʤ", fp);
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


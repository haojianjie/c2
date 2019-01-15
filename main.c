#include <stdio.h>

int main()
{
    int qian = 0;
    printf("jinrucunquqianguanlixitong\n");
    while (1)
    {
        int a;
        printf("1---cunqian\n");
        printf("2---quqian\n");
        printf("3---xianshijine\n");
        printf("4---tuichuchengxu\n");
        printf("qingshurugongnengbianhao\n");
        scanf("%d", &a);
        if (a == 1)
        {
            int cun;
            printf("jinrucunqianxitong,qingshuruyaocunrudejine\n");
            scanf("%d", &cun);
            qian += cun;
            printf("cunruchenggong,dianjihuichejixu\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (a == 2)
        {
            int qu;
            printf("qingshuruyaoqudejine\n");
            scanf("%d", &qu);
            if (qian < qu)
            {
                printf("yuebuzu,quqianshibai\n");
                char x;
                scanf("%c", &x);
                scanf("%c", &x);
            }
            else
            {
                qian -= qu;
                printf("quqianchenggong,dianjihuichetuichu\n");
                char x;
                scanf("%c", &x);
                scanf("%c", &x);
            }
        }
        if (a == 3)
        {
            printf("dangqianyuewei%d,dianjihuichetuichu\n", qian);
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (a == 4)
        {
            printf("cunxujieshu");
            break;
        }
    }
    return 0;
}
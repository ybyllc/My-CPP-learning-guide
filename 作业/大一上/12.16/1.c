//胡书畅的作业
//coding: GB18030
/*
【问题描述】青年歌手大奖赛中，10个评委给参赛选手打分。选手得分规则为去掉一个最高分和一个最低分，然后计算平均得分。计算并输出选手张三的得分。（注：如果最高分或最低分有多个相同时，去掉其中一个）

【输入形式】输入10个数
【输出形式】输出平均分（保留4位小数）
【样例输入】

88 85 86.5 90 91.5 82 83.5 86.5 92 90.5
【样例输出】

87.6875
*/
#include<stdio.h>

int main()
{
    int i;
    float max,min,x,y;
    scanf("%f",&x);
    max=min=x=y;
    for(i=1;i<10;i++)
    {
        scanf("%f",&x);
        y+=x;
        max=(x>max)?x:max;
        min=(x<min)?x:min;
    }
    y=(y-max-min)/8;
    printf("%.4f",y);
    return 0;
}
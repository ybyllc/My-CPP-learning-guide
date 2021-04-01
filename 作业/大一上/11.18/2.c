/*	
【问题描述】编写程序，求出给定半径r的圆以及内接正n边形的面积（计算公式为：n*r*r*sin(2π/n)/2），输出计算结果。r和n的值由键盘输入。
【输入形式】输1个浮点数和1个整数，分别表示r、n。中间用空格分隔。
【输出形式】输出圆的面积，正n边形的面积，均保留4位小数，中间用逗号分隔。
【样例输入】
3.4 9
【样例输出】
36.3168,33.4378
【样例说明】π取3.14159
*/
#include<stdio.h>
#include<math.h>
#define pi 3.14159
int main()
{
    float r,s1,s2;
    int n;
    scanf("%f%d",&r,&n);
    s1=pi*pow(r,2);
    s2=n*r*r*sin(2*pi/n)/2;
    printf("%.4f,%.4f",s1,s2);
    return 0;
}
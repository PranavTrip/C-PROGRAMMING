//CALCULATING THE DISTANCE BETWEEN TWO POINTS
#include <stdio.h>
#include <math.h>
typedef struct distance
{
    int pt1, pt2, pt3, pt4;
    double dist;
} dis;
int main()
{
    dis point;
    printf("Enter point 1\n");
    scanf("%d%d", &point.pt1, &point.pt2);
    printf("Enter point 2\n");
    scanf("%d%d", &point.pt3, &point.pt4);
    point.dist = sqrt(pow(point.pt1 - point.pt3, 2) + pow(point.pt2 - point.pt4, 2));
    printf("The distance is %lf", point.dist);
    return 0;
}
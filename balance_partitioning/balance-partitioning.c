#include<stdio.h>

void balance(int n)
{
    int array[n],part1,part2;
    for (int i = 0; i < n; i++)
    {
        int partition=6;               //n/2;
        array[i]=((2*i)+4);
        if (i<partition)
        {
            part1+=array[i];
        }
        else if(i>partition)
        {
            part2+=array[i];
        }
        
        
    }

    printf("%d %d %d ",part2-part1);

    

}
int main()
{
    int n;
    scanf("%d",&n);
 balance(n);
}

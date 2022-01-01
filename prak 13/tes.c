#include <stdio.h>
int main()
{
    int i, j, m, n;
    printf("Enter number of rows : ");
    scanf("%d", &m);
    printf("Enter number of columns : ");
    scanf("%d", &n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("A", j);
        }
        printf("\n");
    }
    return 0;
}
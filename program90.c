int main()
{
    int r, c, n;
    printf("Enter the number of rows:\n");
    scanf("%d", &n);
    for (r = 0; r < n; r++)
    {
        for (c = 0; c < n; c++)
            printf("*\t");
        printf("\n");
    }
    return 0;
}

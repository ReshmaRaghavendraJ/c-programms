1  // Reverse of numbers:  
i/p:123    o/p:321

int main()
{
    int rev, num;
    printf("Enter Numbers:");
    scanf("%d", &num);
    while (num != 0)
    {
        rev = num % 10;
        num = num / 10;
        printf("%d", rev);
    }
    return 0;
}

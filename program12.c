int main()
{
    int num;
    printf("Enter number:\n");
    scanf("%d", &num);
    if (num < 0)
        printf("It is Negative number", num);
    else if (num > 0)
        printf("It is Positive number", num);
    else
        printf("Zero");
    return 0;
}

int main()
{
    float unit, qty, total, discount, netamnt;
    printf("Enter Unit price and Quantity:\n");
    scanf("%f%f", &unit, &qty);
    total = unit * qty;
    if (total >= 5000)
        discount = 500;
    else
        discount = 20;
    netamnt = total - discount;
    printf("Information:\n");
    printf("<------BILL------>\n");
    printf("Unit Price:   %.2f\n", unit);
    printf("Quantity:     %.2f\n", qty);
    printf("Total Amnt:   %.2f\n", total);
    printf("Discount:     %.2f\n", discount);
    printf("netamnt:      %.2f\n", netamnt);
    printf("<------close------>");
    return 0;
}

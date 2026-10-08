#include <stdio.h>

int main()
{
    int product, customer, orderNo, group;
    float amount, discount, discountAmount, finalAmount;
    float distance, delivery, priority;

    printf("1. Electronics\n");
    printf("2. Clothing\n");
    printf("3. Books\n");
    printf("4. Household\n");

    printf("Enter product: ");
    scanf("%d", &product);

    printf("\n1. Regular\n");
    printf("2. Premium\n");
    printf("3. Corporate\n");

    printf("Enter customer: ");
    scanf("%d", &customer);

    printf("Enter order amount: ");
    scanf("%f", &amount);

    printf("Enter delivery distance: ");
    scanf("%f", &distance);

    printf("Enter order number: ");
    scanf("%d", &orderNo);

    /* Product switch + nested customer switch */

    switch(product)
    {
        case 1:
            printf("\nProduct: Electronics\n");

            switch(customer)
            {
                case 1:
                    discount = 5;
                    printf("Customer: Regular\n");
                    break;

                case 2:
                    discount = 10;
                    printf("Customer: Premium\n");
                    break;

                case 3:
                    discount = 15;
                    printf("Customer: Corporate\n");
                    break;

                default:
                    printf("Invalid customer\n");
                    return 0;
            }
            break;

        case 2:
            printf("\nProduct: Clothing\n");

            switch(customer)
            {
                case 1:
                    discount = 10;
                    printf("Customer: Regular\n");
                    break;

                case 2:
                    discount = 15;
                    printf("Customer: Premium\n");
                    break;

                case 3:
                    discount = 20;
                    printf("Customer: Corporate\n");
                    break;

                default:
                    printf("Invalid customer\n");
                    return 0;
            }
            break;

        case 3:
            printf("\nProduct: Books\n");

            switch(customer)
            {
                case 1:
                    discount = 8;
                    printf("Customer: Regular\n");
                    break;

                case 2:
                    discount = 12;
                    printf("Customer: Premium\n");
                    break;

                case 3:
                    discount = 18;
                    printf("Customer: Corporate\n");
                    break;

                default:
                    printf("Invalid customer\n");
                    return 0;
            }
            break;

        case 4:
            printf("\nProduct: Household\n");

            switch(customer)
            {
                case 1:
                    discount = 7;
                    printf("Customer: Regular\n");
                    break;

                case 2:
                    discount = 14;
                    printf("Customer: Premium\n");
                    break;

                case 3:
                    discount = 20;
                    printf("Customer: Corporate\n");
                    break;

                default:
                    printf("Invalid customer\n");
                    return 0;
            }
            break;

        default:
            printf("Invalid product\n");
            return 0;
    }

    discountAmount = amount * discount / 100;
    finalAmount = amount - discountAmount;

    printf("Discount: %.0f%%\n", discount);
    printf("Discount Amount: Rs. %.2f\n", discountAmount);
    printf("Final Amount: Rs. %.2f\n", finalAmount);

    /* Free shipping */

    if(finalAmount >= 5000 || customer == 2 || customer == 3)
    {
        delivery = 0;
        printf("Shipping: Free\n");
    }
    else
    {
        /* Sample distance charges */
        if(distance <= 10)
            delivery = 200;
        else if(distance <= 20)
            delivery = 350;
        else
            delivery = 500;

        printf("Shipping: Charged\n");
    }

    /* Priority */

    if((customer == 2 || customer == 3) && amount >= 10000)
    {
        priority = 500;
        printf("Priority Delivery: Yes\n");
    }
    else
    {
        priority = 0;
        printf("Priority Delivery: No\n");
    }

    group = orderNo % 4;

    switch(group)
    {
        case 0:
            printf("Processing Group: A\n");
            break;
        case 1:
            printf("Processing Group: B\n");
            break;
        case 2:
            printf("Processing Group: C\n");
            break;
        case 3:
            printf("Processing Group: D\n");
            break;
    }

    printf("Delivery Charges: Rs. %.2f\n", delivery);
    printf("Priority Charges: Rs. %.2f\n", priority);

    printf("Total Payable: Rs. %.2f\n",
           finalAmount + delivery + priority);

    return 0;
}
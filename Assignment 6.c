/*1.Write a program to calculate sum of first N natural numbers.
main()
{
    int n,i,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("Sum of the first N natural numbers is %d",sum);
}
*/

/*2.Write a program to calculate sum of first N even natural numbers.
main()
{
    int n,i,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+2*i;
    }
    printf("Sum of the first N even natural numbers is %d",sum);
}
*/

/*3.Write a program to calculate sum of first N odd natural numbers.
main()
{
    int n,i,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+2*i-1;
    }
    printf("Sum of the first N odd natural numbers is %d",sum);
}
*/

/*4.Write a program to calculate sum of squares of first N natural numbers.
main()
{
    int n,i,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i*i;
    }
    printf("Sum of squares of first N natural numbers is %d",sum);
}
*/

/*5.Write a program to calculate sum of cubes first N natural numbers.
main()
{
    int n,i,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i*i*i;
    }
    printf("Sum of cubes of first N natural numbers is %d",sum);
}
*/

/*6.Write a program to calculate factorial of a number.
main()
{
    int n,i,fact=1;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("Factorial of %d is %d",n,fact);
}
*/

/*7.Write a program to count digits in a given number.
main()
{
    int n,count=0;
    printf("Enter a number:");
    scanf("%d",&n);
    do
    {
        count++;
        n=n/10;
    }
    while(n!=0);
    printf("Total digits = %d",count);
}
*/

/*8.Write a program to check whether a given number is a Prime or not.
main()
{
    int n,i,flag=0;
    printf("Enter a number:");
    scanf("%d",&n);

    if(n==0 || n==1)
        flag=1;

    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("%d is a prime number",n);
    else
        printf("%d is not a prime number",n);
}
*/

/*9.Write a program to calculate LCM of two numbers.
main()
{
    int n1,n2,max;
    printf("Enter two numbers:");
    scanf("%d%d",&n1,&n2);

    max = (n1>n2) ? n1 : n2;

    while(1)
    {
        if((max % n1==0) && (max % n2==0))
        {
            printf("The LCM of %d and %d is %d",n1,n2,max);
            break;
        }
        max++;
    }
    return 0;
}
*/

//10.Write a program to reverse a given number.
main()
{
    int n,rev=0,remainder;
    printf("Enter a number:");
    scanf("%d",&n);

    while(n!=0)
    {
        remainder = n%10;
        rev = rev*10 + remainder;
        n=n/10;
    }
    printf("Reversed number = %d",rev);
    return 0;
}

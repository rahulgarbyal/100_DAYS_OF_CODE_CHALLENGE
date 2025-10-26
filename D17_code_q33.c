#include<stdio.h>

int dig_it(int n)         //i made a function to count number of digits
{
    int count_;
    while (n)
    {
        count_++;
        n/=10;
    }
    return count_;
}

int pow_er(int a,int b)      // made a function to calculate power of number
{
    int ans = 1;
    while (b)
    {
        ans*= a;
        b--;
    }
    
    return ans;
}

int main()
{
    int og_num,check_armstrong = 0,total_digit;
    int ext, copy_og;
    printf("ENTER NUMBER TO CHECK IF ITS ARMSTRONG NUMBER : ");
    scanf("%d", &og_num);

    total_digit = dig_it(og_num);
    copy_og = og_num;

    while (copy_og)
    {
        ext = copy_og % 10;
        check_armstrong += pow_er(ext,total_digit); 
        copy_og /= 10;
    } 

    if (og_num == check_armstrong)
    {
        printf("THE NUMBER %d IS ARMSTRONG \n", og_num);
    }
    else
    {
        printf("THE NUMBER %d IS NOT ARMSTRONG \n", og_num);
    }

    return 0;
}
    
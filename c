
void Sum(int *ptr1,int *ptr2);
int main()
{
    int arr [2];
    Sum(&arr[0],&arr[1]);

}
void Sum(int *ptr1,int *ptr2)
{
    printf("enter your frist value : \n");
    scanf("%d",&ptr1);

    printf("enter your Second value : \n");
    scanf("%d",&ptr2);

    int x;
    printf("enter your operate\n");
    scanf("%d",x);
    switch(x)
    {
        case (1) :
            int z;
            z = (*ptr1)*(*ptr2);
            printf("the value is equal:%d",z);
        break;

    }
}

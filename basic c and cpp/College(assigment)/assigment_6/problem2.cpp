#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define null LLONG_MIN
int prime_number( int n){
    int i,fact =0;
    for(i=1; i<= n ;i++){
        if(n % i == 0){
            fact++;
        }
    }
    if(fact == 2)
    return 1;
    else
    return 0;
}
int prime( int p){
    int num;
    long long int i=2*p;
    while(i >= 2*p){
        if(prime_number(i) == 1){
            num = i;
            break;
        }
        i++;
    }
    return num;
}
long long int probing(long long int table[], long long int i, long long int index)
{
    if (table[index + i] == null)
        return (index + i);
    else
        return -1;
}
long long int seach_hash_table(long long int table[], long long int data, long long int size)
{
    long long int i, key, index;
    index = data % size;
    index = (index >= 0) ? index : (index + size);
    for (i = 0; i < size; i++)
    {
        key = (index + i) % size;
        //printf("\n\tfor %d search key is%d",data,key);
        if (key != -1)
        {
            if (table[key % size] == data)
            {
                return 1;
                break;
            }
        }
    }
    return 0;
}

void insert_In_table(long long int table[], long long int size, long long int data)
{
    long long int i, key, index;
    index = data % size;
    index = (index >= 0) ? index : (index + size);
    for (i = 0; i < size;)
    {
        key = probing(table, i, index);
        // printf("\n\t for %d key is%d",data ,key);
        if (key != -1)
        {
            table[key % size] = data;
            break;
        }
        i = i+1;
    }
}
main()
{
    FILE *fptr;
    //fptr=fopen("test.txt", "r");
    fptr = fopen("test.txt", "r");
    if (fptr == NULL)
    {
        printf("\n\n\tError....I am not able to read this file\n\n");
        return 0;
    }
    else
    {
        long long int DAta;
        long long int size = 0;
        while (!feof(fptr))
        {
            fscanf(fptr, "%d", &DAta);
            size++;
        }
        printf("\n\n size is %d\n", size - 1);
        rewind(fptr);
        long long int size_arry = size;
        size = prime(2*size);
        //size=25*size;
        printf("\n\n size is hash table %d\n", size );
        long long int *hash_table = (long long int *)malloc(size * sizeof(long long int));

        long long int j; //initialize the hash table
        for (j = 0; j < size; j++)
        {
            hash_table[j] = null;
        }

        long long int i = 0;
        int num;
        long long int *arr = (long long int *)malloc(size_arry * sizeof(long long int));

        while (!feof(fptr))
        {
            fscanf(fptr, "%lld", &num);
            arr[i] = num;
            i++;
            insert_In_table(hash_table, size, num);
            //printf("%d\n",i);
        }

        fclose(fptr);
        printf("it is ok");
        long long int t;
        long long int s = 0;
        for (t = -100; t <= 100; t++)
        {
            for (i = 0; i < size_arry; i++)
            {
                long long int y = t - arr[i];
                if (seach_hash_table(hash_table, y, size))
                {	//printf("done");
                printf("\n\tfor %d pair is (%d , %d)",t,arr[i],y);
                    s++;
                    break;
                }
            }
        }

        printf("\n\ttotal No of such posible is :%lld\n\n", s);
    }
    return 0;
}

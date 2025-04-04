// Write a C program to display the sizes and ranges for each of C's data types.
// Sample Output:

// Size of C data types:

// Type               Bytes

// --------------------------------
// char                 1
// int8_t               1
// unsigned char        1
// uint8_t              1
// short                2
// int16_t              2
// uint16t              2
// int                  4
// unsigned             4
// long                 8
// unsigned long        8
// int32_t              4
// uint32_t             4
// long long            8
// int64_t              8
// unsigned long long   8
// uint64_t             8
// float                4
// double               8
// long double          16
// _Bool                1

#include<stdio.h>
int main()
{
   printf("size of c datatypes") ;
   printf("------------------------------");
   printf("char                      %d\n",sizeof(char));
   printf("int8_t                    %d\n",sizeof(__INT8_TYPE__));
   printf("unsigned char             %d\n",sizeof(unsigned char));
   printf("uint8_t                   %d\n",sizeof(__UINT8_TYPE__));
   printf("short                     %d\n",sizeof(short));
   printf("int16_t                   %d\n",sizeof(__INT16_TYPE__));
   printf("uint16t                   %d\n",sizeof(__UINT16_TYPE__));
   printf("int                       %d\n",sizeof(int));
   printf("unsigned                  %d\n",sizeof(unsigned));
   printf("long                      %d\n",sizeof(long));
   printf("unsigned long             %d\n",sizeof(unsigned long));
   printf("int32_t                   %d\n",sizeof(__INT32_TYPE__));
   printf("uint32_t                  %d\n",sizeof(__UINT32_TYPE__));
   printf("long long                 %d\n",sizeof(long long));
   printf("int64_t                   %d\n",sizeof(__INT64_TYPE__));
   printf("float                     %d\n",sizeof(float));
   printf("double                    %d\n",sizeof(double));
   printf("long double               %d\n",sizeof(long double));
   printf("_Bool                     %d\n",sizeof(_Bool));

   return 0;
}

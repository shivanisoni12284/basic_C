// Write a program in C to check whether two given strings are an anagram.

// Test Data :

// Input the first String : spare
// Input the second String : pears

// Expected Output :

//  spare and pears are Anagram.

#include<stdio.h>
#include<string.h>
void Anagram();
void Anagram()
{
    int sum=0,count=0,i,j;
    char str1[20]="spare";
    char str2[20]="pears";
    int len1=strlen(str1);
    int len2=strlen(str2);
    for(i=0;i<len1;i++)
    {
        // printf("%d ",count);
        for(j=0;j<len2;j++)
        {
            if(str1[i]==str2[j])
            {
                // printf("%c",str1[i]);
                count++;
            }
        }
        if(count == 1 )
        {
           sum=sum+count;
        }
        count=0;
    }

    if(sum==5)
    {
        printf("spare and pears are Anagram");
    }
    else
    {
        printf("spare and pears are not Anagram");
    }
    
}
int main()
{
    Anagram();
}

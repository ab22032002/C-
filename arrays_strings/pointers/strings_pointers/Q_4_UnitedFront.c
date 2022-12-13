#include<stdio.h>
#include<string.h>
int main()
{
char *s1="United";
char *s2="Front";
char *s3;
// s3=strcat(s1,s2); Assignment Issue:
// printf("%s",s3);
printf("\n %s",s2);
printf("\nthis is a good Prog");
strcat(s1,s2);
printf("%s",s1);
return 0;
}
/**
#include<stdio.h>
#define start main
///  start will be replaced before the complilation as the preprocessor directive
int start()
{
 printf("hello this is the program without the main function directly ");
 return 0;
}
**/

/// second way of doin' it
/// with preprocessor directive ## is used for merging the string
/**
#include<stdio.h>
#define start m##a##i##n
///  start will be replaced before the complilation as the preprocessor directive
int start()
{
 printf("hello this is the program without the main function directly ");
 return 0;
}
**/

/// 3rd way is argumented micro values
#include<stdio.h>
#define begin(m,a,i,n) m##a##i##n /// first ptr
#define start begin(m,a,i,n)  /// double ptr
///  start will be replaced before the complilation as the preprocessor directive
int start()
{
 printf("hello this is the program without the main function directly ");
 return 0;
}

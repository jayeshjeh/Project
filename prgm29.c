#include<stdio.h> 
//Sequence 

int Display(int);   
int main ()   

{
    int iValue=0, iRet = 0;

    printf("Enter number\n");   
    scanf("%d",&iValue);

    iRet = Display(iValue);   
    printf("Addition of digits is : %d\n", iRet);
    return 0;
}

int Display(int iNo)   
{
    //Local variables 
    int iDigit = 0, iSum = 0;
    if(iNo < 0)                 // Updater
    {
        iNo = -iNo;
    }

    while (iNo!= 0)
    {
    iDigit = iNo%10;           
    iSum = iSum + iDigit;   
    iNo = iNo/10;               
    }
    return iSum;
}
    


#include<stdio.h>
int main()
{
    printf("Bit string representation !!");
    int U[10]={1,2,3,4,5,6,7,8,9,10};
    int A[5]={1,3,5,7,9};
    int B[5]={2,4,6,8,10};

int BU[10],BA[10],BB[10],AUB[10],AIB[10],ADB[10];
int i,j;
//set U set to 1 and other set to 0
for(i=0;i<10;i++)
{
    BU[i]=1;
    BA[i]=0;
    BB[i]=0;
}
printf("\nBit string representation of set U   :");
for(i=0;i<10;i++)
{
    printf(" %d",BU[i]);
}
//bit rep of A
for(i=0;i<5;i++)
{
    for(j=0;j<10;j++)
    {
        if(A[i]==U[j])
        {
            BA[j]=1;
            break;
        }
    }
}
printf("\nBit string representation of set A   :");
for(i=0;i<10;i++)
{
    printf(" %d",BA[i]);
}
//bit rep of B
for(i=0;i<5;i++)
{
    for(j=0;j<10;j++){
        if(B[i]==U[j]){
            BB[j]=1;
            break;
        }
    }
}
printf("\nBit string representation of set B   :");
for(i=0;i<10;i++)
{
    printf(" %d",BB[i]);
}
//bit rep of AUB,AIB,ADB
for(i=0;i<10;i++)
{
    AUB[i]=BA[i] | BB[i];
    AIB[i]=BA[i] & BB[i];
    ADB[i]=BA[i] & (~BB[i]);
}
printf("\nBit string representation of set AUB :");
for(i=0;i<10;i++)
{
    printf(" %d",AUB[i]);
}
printf("\nBit string representation of set AIB :");
for(i=0;i<10;i++)
{
    printf(" %d",AIB[i]);
}
printf("\nBit string representation of set ADB :");
for(i=0;i<10;i++)
{
    printf(" %d",ADB[i]);
}
}
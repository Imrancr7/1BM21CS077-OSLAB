#include <stdio.h>
#include<stdlib.h>
int r,c,r1,c1;
  
  int main(){
      printf("Enter the number of rows  for matrix 1:");
      scanf("%d",&r);
      printf("Enter the number of columns  for matrix 1:");
      scanf("%d",&c);
      int mat1[r][c];
      for(int i=0;i<r;i++){
          for(int j=0;j<c;j++){
              printf("Enter the %d %d element:",i,j);
              scanf("%d",&mat1[i][j]);
          }
      }
      
      printf("Enter the number of rows  for matrix 2:");
      scanf("%d",&r1);
      printf("Enter the number of columns  for matrix 2:");
      scanf("%d",&c1);
      int mat2[r1][c1];
      for(int i=0;i<r1;i++){
          for(int j=0;j<c1;j++){
              printf("Enter the %d %d element:",i,j);
              scanf("%d",&mat2[i][j]);
          }
      }
      printf("Matrix A\n");
      for(int i=0;i<r;i++){
          for(int j=0;j<c;j++){
              printf("%d \t",mat1[i][j]);
          }
          printf("\n");
      }
      printf("Matrix B\n");
      for(int i=0;i<r1;i++){
          for(int j=0;j<c1;j++){
              printf("%d \t",mat2[i][j]);
          }
          printf("\n");
      }
      int a=1;
      while(a==1){
      int ch;
      printf("Enter choice\n 1.Add matrices\n2.Subtract matrices\n3.sum of columns and rows of matrix1\n4.sum of columns and rows of  matrix2\n5.exit:\n");
      scanf("%d",&ch);
      if(ch==1){
      printf("Sum of two matrices:\n");
      int sum[r][c];
      for(int i=0;i<r;i++){
          for(int j=0;j<c;j++){
              sum[i][j]=mat1[i][j]+mat2[i][j];
          }
      }
      for(int i=0;i<r;i++){
          for(int j=0;j<c;j++){
              printf("%d \t",sum[i][j]);
          }
          printf("\n");
      }
      }
      if(ch==2){
      printf("Difference of two matrices:\n");
      int diff[r][c];
      for(int i=0;i<r;i++){
          for(int j=0;j<c;j++){
              diff[i][j]=mat1[i][j]-mat2[i][j];
          }
      }
      for(int i=0;i<r;i++){
          for(int j=0;j<c;j++){
              printf("%d \t",diff[i][j]);
          }
          printf("\n");
      }
      }
      if(ch==3){
           for(int i=0;i<r;i++)
                {
                    int s=0;
                     for(int j=0;j<c;j++)
                     {
                         
                     s+=mat1[i][j];

                     }
                                         printf("sum of elements of row %d is:%d",i+1,s );
                      printf("\n");
                }
             for(int j=0;j<c;j++)
                {
                    int cs=0;
                     for(int i=0;i<r;i++)
                     {
                     cs+=mat1[i][j];
                   
                     }
                      printf("sum of elements of column %d is: %d",j+1,cs );
                     printf("\n");
                }    
      }
      if(ch==4){
           for(int i=0;i<r1;i++)
                {
                    int s2=0;
                     for(int j=0;j<c1;j++)
                     {
                         
                     s2+=mat2[i][j];

                     }
                                         printf("sum of elements of row %d is:%d",i+1,s2 );
                      printf("\n");
                }
             for(int j=0;j<c1;j++)
                {
                    int cs2=0;
                     for(int i=0;i<r1;i++)
                     {
                     cs2+=mat2[i][j];
                   
                     }
                      printf("sum of elements of column %d is: %d",j+1,cs2 );
                     printf("\n");
                }    
      }
      if(ch==5){
          a=0;
      }
      }
      return 0;
  }
 


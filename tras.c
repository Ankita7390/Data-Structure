#include<stdio.h>
int main(){
    int mat1[2][2],transpose[2][2];
      int i,j,row,col;
    printf("How many rows and columns?\n");
    scanf("%d%d",&row,&col);
 
//Input matrix 1
printf("enter the value of first matrix:\n ");
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
       //printf("element[%d][%d]:",i,j);
        scanf("%d",&mat1[i][j]);
    }
}
for(int i=0;i<row;i++)
    for(int j=0;j<col;j++){
        transpose[j][i]=mat1[i][j];
    }
printf("tha transpose of matrix is:\n");
for(int i=0;i<col;i++){
    for(int j=0;j<row;j++){
     printf("%d  ", transpose[i][j]);
    }
  printf("\n");
}

}
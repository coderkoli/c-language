#include <stdio.h>
int main(){
    int arry[3][3]={
    {78,45,18},         //0
    {45,18,33},         //1
    {45,23,45}          //2
    };
// printf("element of arry %d",arry[0][2]);
for(int row=0;row<3;row++){
    for( int col=0;col<3;col++){
        printf("%d ",arry[row][col]);
    }
    printf("\n");
}


}
// dry run
// row=0
//     col=0
//         arry[0][0]=78
//     col=1
//         arry[0][1]=45
//     col=2
//         arry[0][2]=18
// row=1
//     col=0
//         arry[1][0]=45
//     col=1
//         arry[1][1]=18
//     col=2
//         arry[1][2]=33

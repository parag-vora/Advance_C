#include<stdio.h>

//void array2D(int arr[][column], int row, int column);  // this function definition also generate error becuase, arr's column has been not initialize yet.
void array2D(int row, int column, int arr[][column]){    // this works perfectly becuase row and column has been declared earlier

    for (size_t i = 0; i < column; i++)
    {
        for (size_t j = 0; j < row; j++)
        {
            arr[i][j] = i+j;
        }
        
    }

    printf("Print 2D array\n");
    for (size_t i = 0; i < column; i++)
    {
        for (size_t j = 0; j < row; j++)
        {
           printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
}

int main(){
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    int arr[size];
    for (size_t i = 0; i < size; i++)
    {
        printf("Enter %d element: ", i+1);
        scanf("%d", &arr[i]);
    }

    for (size_t i = 0; i < size; i++)
    {
        printf("%d element is: %d\n", i+1, *(arr+i));
        
    }
    
    /*  // this comment section generate array by MinGW gcc compiler because row and column doesn't have
    int row, column;
    int _2Darray[row][column];
    printf("Enter row and column\n");
    scanf("%d %d", &row, &column);
    */
 
    // below section work perfectly becuase, here row and column has value then we create with row and column size
    int row, column;
    printf("Enter row and column\n");
    scanf("%d %d", &row, &column);
    int _2Darray[row][column];
    array2D(_2Darray, row, column);

    return 0;
}
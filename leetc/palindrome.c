#include <stdio.h>
#include <stdlib.h>
int output(int* n);
void polin(int* n);

int main(){
    int n;
    if(output(&n)){ 
        polin(&n);
    }
    return 0;
}
int output(int* n){
    int flag =0;
    if(scanf("%d", n)==1 && getchar()=='\n'){ 
        flag = 1;
    }
    return flag;
}
void polin(int* n){
    int a = *n;
    int b = 0;
    int j=0;
    int quantity = 10;
    int* array =(int *) malloc( quantity* sizeof(int));
    do{
        b = a%10;
        *(array + j) = b;
        if(j > 1){ 
           array = realloc(array,  quantity* sizeof(int));
        }
        a=a/10;
        j++;
        
    }while(a > 0);
    int length =  j;
    int* new_array =(int *) malloc( length  * sizeof(int));
    for(int i =0; i < length; i++){
        int temp = array[i];
         new_array[i]= array[length - 1 - i];
         new_array[length - 1 - i] = temp;
        printf("%d ", new_array[i]);
    }
    printf("\n");
    int flag =0;
    for(int l =0; l < length; l++){
        if(array[l]==new_array[l]){
            flag +=1;
            printf("|%d| - |%d| ", array[l], new_array[l]);
        }
    }
     printf("\n");
     printf("%d\n", flag);
    if(flag == length ){ 
        printf("TRUE\n");
    }
    else{ 
        printf("ERROR\n");
    }
        
    free(array);
    free(new_array);
    printf("%d", j);
}
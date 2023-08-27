#include<stdio.h>
#include<stdlib.h>
struct ARRAY
{
   int Array_TotalSize;
   int used_size;
   int *ptr;
};


void createARRAY(struct ARRAY *a,int tsize,int usize){
    (*a).Array_TotalSize=tsize;
    (*a).used_size=usize;
    (*a).ptr = (int *) malloc(tsize * sizeof(int));

}

void setVal(struct ARRAY *a){

    for (int i = 0; i < (*a).ptr; i++);
    {
        printf("element enter %d",i);
        scanf("%d\n",&n);
        (*a).ptr[i]=n;

    }
}
 
int main(){
    struct ARRAY marks;
    createArray(&marks,10,2);
    setVal(&marks);
    show(&marks);

    return 0;
}


#include <stdio.h>
#include <stdlib.h>
int top=-1;
int *queue;

int main()
{
    int size=5;
    queue = (int *) malloc(sizeof(int) * 5);

    for (int i=0;i<size;i++){
        kolejka(i+1);
    }

    usuwanie(size);
    usuwanie(size);


    for (int i=0;i<top+1;i++){
        printf("%d \n", i, queue[i]);
    }

}

void kolejka(int element){
    top++;
    queue[top] = element;
}

void usuwanie(int size){
    for(int i=1; i<size;i++){
        queue[i-1] = queue[i];
    }
    top--;
}





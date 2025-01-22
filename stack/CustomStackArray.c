#include <stdio.h>
#include <stdlib.h>

struct CustomStack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct CustomStack *s) {
    if(s->top == -1) {
        return 1;
    }
    return 0;
}

int isFull(struct CustomStack *s) {
    if(s->top == s->size-1) {
        return 1;
    }
    else{
        return 0;
    }
}

void push(struct CustomStack *s, int value) {
    //Push an element int the stack
    if(isFull(s)){
        printf("The stack is full!!!\n");
    }
    else{
        // s->top++;
        s->arr[++s->top] = value;
    }
}

void pop(struct CustomStack *s) {
    // Check if the stack is empty
    if(isEmpty(s)) {
        printf("The stack is empty!!!\n");
    }
    else{
        printf("The element poped is:- %d \n",s->arr[s->top--]);
    }
}

void displayStack(struct CustomStack *s) {
    if(!isEmpty(s)) {
        printf("FRONT");
        for (int i = s->top; i >= 0; i--)
        {
            printf("->%d", s->arr[i]);
        }
        printf("->BACK\n");
    }
}


int main(){
    // struct CustomStack s;
    // s.size = 80;
    // s.top = -1;
    // s.arr = (int*)malloc(s.size*sizeof(int));

    struct CustomStack *s;
    s->size = 6;
    s->top = -1;
    s->arr = (int*)malloc(s->size*sizeof(int));
    push(s, 5);
    push(s, 2);
    push(s, 4);
    push(s, 3);
    push(s, 6);
    pop(s);
    pop(s);
    displayStack(s);
    pop(s);
    displayStack(s);
    return 0;
}

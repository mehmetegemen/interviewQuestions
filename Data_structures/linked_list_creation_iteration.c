#include <stdio.h>
#include <stdlib.h>

struct node {
    int num;
    node * next;
};

typedef struct node node;

void print(node * r){
    node * iter = r;
    while(iter!=NULL) {
        printf("data is %d \n", iter->num);
        iter = iter->next;
    }
}

void fill_list(node * r, int rep) {
    node * iter = r;
    for(int i=1;i < rep;i++){
        iter->next = (node *)malloc(sizeof(node));
        iter = iter->next;
        iter->num=i;
    }
}

int main()
{
    node * root = (node *)malloc(sizeof(node));
    root -> num = 0;
    fill_list(root, 9);
    print(root);
}

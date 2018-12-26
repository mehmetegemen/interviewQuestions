#include <stdio.h>
#include <stdlib.h>

struct node {
    int x;
    struct node * next;
};

typedef struct node node;

void fill_list(node * r, int rep){
    node * iter = r;
    for(int i = 0;i<rep;i++){
        iter->x=i*10;
        iter->next = (node *)malloc(sizeof(node));
        iter = iter->next;
    }
}

void print_list(node * r){
    node * iter = r;
    while(iter->next!=NULL){
        printf("%d \n", iter->x);
        iter = iter->next;
    }
}

void add_sorted(node * r, int num){
    node * iter = r;
    node * temp = (node *)malloc(sizeof(node));
    while(num > iter->x && iter->next != NULL){
        temp = iter;
        iter = iter->next;
    }
    temp->next = (node *)malloc(sizeof(node));
    temp->next->next = iter;
    temp->next->x = num;
}

int main(){
    node * root = (node*)malloc(sizeof(node));
    fill_list(root, 6);
    // Add 8 to in between
    add_sorted(root, 24);
    add_sorted(root,41);
    add_sorted(root, 52);
    print_list(root);
}
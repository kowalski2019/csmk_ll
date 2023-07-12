#include "csmkll.h"

void linkedList_test(void);

int main(void)
{
    linkedList_test();
    return 0;
}

void linkedList_test(void)
{
    LinkedList *list = NULL;
    ll_append(&list,23);
    ll_append(&list,-9);
    ll_append(&list,12);
    ll_append(&list,78);
    ll_append(&list,-9);
    ll_append(&list,100);
    printf("list size must be 6. size = %d\n",ll_size(list));
    ll_insert(list,50,0);
    printf("list size must be 7. size = %d\n",ll_size(list));
    ll_insert(list,32,ll_size(list));
    ll_insert(list,600,5);
    printf("list size must be 8. size = %d\n",ll_size(list));
    ll_remove(&list,0);
    ll_remove(&list,3);
    printf("list size must be 6. size = %d\n",ll_size(list));
    ll_print(list);
    for(int i = 0; i < ll_size(list);i++){
        printf("list[%d] = %d\n",i,ll_get(list,i));
    }
    ll_clear(list);
    printf("list size must be 0. size = %d\n",ll_size(list));
    ll_append(&list,20);
    printf("list size must be 1. size = %d\n",ll_size(list));
    ll_print(list);
}


#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *prev;
};

int main(void) {
    int n, num, sum = 0;
    struct node *head = NULL;
    
    scanf("%d", &n);

    while (n-- > 0)
    {
        scanf("%d", &num);

        if (num == 0)
        {
            struct node *temp = head;
            head = head->prev;
            free(temp);
        }
        else
        {
            struct node *new_node = malloc(sizeof(struct node));
            new_node->value = num;
            new_node->prev = head;
            head = new_node;
        }
    }

    // 프로그램 종료 전에 메모리 해제
    while (head != NULL) {
        struct node *temp = head;
        sum += head->value;
        head = head->prev;
        free(temp);
    }

    printf("%d\n", sum);

    return 0;
}

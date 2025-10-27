#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *prev;
};

int main(void) {
    int n, type, num;
    int total = 0;
    struct node *head = NULL;
    
    scanf("%d", &n);

    while (n-- > 0) {
        scanf("%d", &type);

        switch (type) {
            // 1 X : 정수 X를 스택에 넣는다.
            case 1: {
                scanf("%d", &num);
                struct node *new_node = malloc(sizeof(struct node));
                new_node->value = num;
                new_node->prev = head;
                head = new_node;
                total++;
                break;
            }
            // 2 : 스택에 정수가 있다면 맨위 정수를 빼고 출력, 없다면 -1 출력
            case 2: {
                if (head == NULL)
                    printf("-1\n");
                else {
                    printf("%d\n", head->value);
                    struct node *temp = head;
                    head = head->prev;
                    free(temp);
                    total--;
                }
                break;
            }
            // 3 : 스택에 들어있는 정수 개수 출력
            case 3: {
                printf("%d\n", total);
                break;
            }
            // 4 : 스택이 비어있으면 1, 아니면 0 출력
            case 4:
                printf("%d\n", head == NULL ? 1 : 0);
                break;
            // 5 : 스택에 정수가 있다면 맨 위 정수를 출력, 없다면 -1 출력
            case 5:
                printf("%d\n", head == NULL ? -1 : head->value);
                break;
        }
    }

    // 프로그램 종료 전에 메모리 해제
    while (head != NULL) {
        struct node *temp = head;
        head = head->prev;
        free(temp);
    }

    return 0;
}

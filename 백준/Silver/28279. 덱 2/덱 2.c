#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    struct node* prev;
    struct node* next;
};

typedef struct node node;

int main(void)
{
    int n, action, num, count = 0;
    scanf("%d", &n);

    node* head = NULL;
    node* tail = NULL;
    
    while(n-- > 0)
    {
        scanf("%d", &action);

        switch (action)
        {
            case 1:
                // 앞 정수 추가
                {
                    count++;
                    scanf("%d", &num);
                    node *new_node = malloc(sizeof(node));
                    new_node->value = num;
                    new_node->prev = NULL;
                    new_node->next = NULL;
                    if (head == NULL)
                    {
                        head = tail = new_node;
                    }
                    else
                    {
                        new_node->next = head;
                        head->prev = new_node;
                        head = new_node;
                    }
                    break;
                }
            case 2:
                // 뒤 정수 추가
                {
                    count++;
                    scanf("%d", &num);
                    node *new_node = malloc(sizeof(node));
                    new_node->value = num;
                    new_node->prev = NULL;
                    new_node->next = NULL;
                    if (tail == NULL)
                    {
                        head = tail = new_node;
                    }
                    else
                    {
                        new_node->prev = tail;
                        tail->next = new_node;
                        tail = new_node;
                    }
                    break;
                }
            case 3:
                // 앞 정수를 빼고 출력
                if (head == NULL)
                {
                    printf("-1\n");
                }
                else
                {
                    count--;
                    printf("%d\n", head->value);
                    node* temp = head;
                    head = head->next;

                    if (head == NULL)
                        tail = NULL;
                    else
                        head->prev = NULL;

                    free(temp);
                }
                break;
            case 4:
                // 뒤 정수를 빼고 출력
                if (tail == NULL)
                {
                    printf("-1\n");
                }
                else
                {
                    count--;
                    printf("%d\n", tail->value);
                    node* temp = tail;
                    tail = tail->prev;
                    
                    if (tail == NULL)
                        head = NULL;
                    else
                        tail->next = NULL;
                    
                    free(temp);
                }
                break;
            case 5:
                // 정수 개수 출력
                printf("%d\n", count);
                break;
            case 6:
                // 덱 비어있는경우 1 출력
                if (count == 0)
                    printf("1\n");
                else
                    printf("0\n");
                break;
            case 7:
                // 앞 정수 출력
                if (head != NULL)
                    printf("%d\n", head->value);
                else
                    printf("-1\n");
                break;
            case 8:
                // 뒤 정수 출력
                if (tail != NULL)
                    printf("%d\n", tail->value);
                else
                    printf("-1\n");
                break;
        }
    }

    while(head != NULL)
    {
        node* temp = head->next;
        free(head);
        head = temp;
    }

    return 0;
}
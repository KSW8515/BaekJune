#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    int value;
    struct node *next;
};

int main(void) {
    int n, num, count = 0;
    char action[6];
    char output[12000000]; // 출력 버퍼 (최대 수만큼 넉넉히)
    int out_idx = 0;

    struct node *head = NULL;
    struct node *tail = NULL;

    scanf("%d", &n);

    while (n-- > 0) {
        scanf("%s", action);

        if (strcmp(action, "push") == 0) {
            scanf("%d", &num);
            count++;

            struct node *temp = malloc(sizeof(struct node));
            temp->value = num;
            temp->next = NULL;

            if (head == NULL) {
                head = tail = temp;
            } else {
                tail->next = temp;
                tail = temp;
            }
        }
        else if (strcmp(action, "pop") == 0) {
            if (head == NULL) {
                out_idx += sprintf(output + out_idx, "-1\n");
            } else {
                count--;
                out_idx += sprintf(output + out_idx, "%d\n", head->value);
                struct node *temp = head;
                head = head->next;
                free(temp);
                if (head == NULL)
                    tail = NULL; // 마지막 노드 제거 시 tail 초기화
            }
        }
        else if (strcmp(action, "size") == 0) {
            out_idx += sprintf(output + out_idx, "%d\n", count);
        }
        else if (strcmp(action, "empty") == 0) {
            out_idx += sprintf(output + out_idx, "%d\n", count == 0);
        }
        else if (strcmp(action, "front") == 0) {
            if (head == NULL)
                out_idx += sprintf(output + out_idx, "-1\n");
            else
                out_idx += sprintf(output + out_idx, "%d\n", head->value);
        }
        else if (strcmp(action, "back") == 0) {
            if (tail == NULL)
                out_idx += sprintf(output + out_idx, "-1\n");
            else
                out_idx += sprintf(output + out_idx, "%d\n", tail->value);
        }
    }

    // 모아둔 출력 한 번에 처리
    fwrite(output, 1, out_idx, stdout);

    // 남은 노드 메모리 해제
    while (head != NULL) {
        struct node *temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}

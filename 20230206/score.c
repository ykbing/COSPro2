#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int score[], int score_len) 
{
	int* result;
	result = (int*)malloc(sizeof(int) * score_len);

	for (int i = 0; i < score_len; i++) 
    {
		result[i] = 1;
        
		for (int j = 0; j < score_len; j++) 
        {
			if (score[i] < score[j]) result[i]++;
		}
	}

	return result;
}

int main() 
{
    int first_score[] = { 90, 87, 87, 23, 35, 28, 12, 46 };
    int first_score_len = 8;
    int* ret1 = solution(first_score, first_score_len);

    printf("solution 함수의 반환 값은 [");

    for (int i = 0; i < first_score_len; i++) 
    {
        if (i != 0) printf(", ");
        printf("%d", ret1[i]);
    }

    printf("] 입니다.\n");

    int second_score[] = {10, 20, 20, 30};
    int second_score_len = 4;
    int* ret2 = solution(second_score, second_score_len);

    printf("solution 함수의 반환 값은 [");

    for (int i = 0; i < second_score_len; i++)
     {
        if (i != 0) printf(", ");
        printf("%d", ret2[i]);
    }

    printf("] 입니다.\n");
}
#include <iostream>

// חשוב לבדוק שהספריות הנל קיימות
#include <stdio.h>
#include <malloc.h>

int main() {
// מערך סטטי
    int arr1[10];
    for (int i = 0; i < 10; ++i) {
        printf("enter the %d number in arr:", i + 1);
        scanf("%d", &arr1[i]);
    }
    printf("your static arr is:");
    for (int i = 0; i < 10; i++) {
        printf(" %d", arr1[i]);
        if (i < 9) {
            printf(",");
        }
    }

    // מערך דינאמי
    double* ptr1;
    int dinamicSize ;

    // מתעדכן פעמיים
    // + בדיקה ששוחרר ע"י הדפסת הכתובת בכל אחד מהמקרים ובכך אין הקצעה חדשה אלא על אותו מקום בזיכרון ע"י שיחרור
    for (int j = 0; j < 2; ++j) {
        printf("\n\n%p\n",&ptr1);

    printf("enter a dinamic arr size: ");
    scanf("%d", &dinamicSize);

    // מכתובת הופך למערך ע"י MALLOC
     ptr1 = (double *) malloc(dinamicSize * sizeof(double));
    if (ptr1 == NULL) {
        printf("error");
        return 0;
    }
        for (int i = 0; i < dinamicSize; ++i) {
            printf("enter the %d number in arr:", i + 1);
            scanf("%lf", &ptr1[i]);
        }
        printf("your dinamic arr is:\n");
        for (int i = 0; i < dinamicSize; i++) {
            printf(" %lf", ptr1[i]);
            if (i < dinamicSize - 1) {
                printf(",");
            }
        }
    // שיחרור
        free(ptr1);
    }
    return 0;
}

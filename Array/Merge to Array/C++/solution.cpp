#include <bits/stdc++.h>
using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;
};
void display(struct Array *arr3)
{
    for (int i = 0; i < (*arr3).length; i++)
    {
        cout << (*arr3).A[i] << " ";
    }
}

void merging(struct Array *arr1, struct Array *arr2, struct Array *arr3)
{

    int i = 0, j = 0, k = 0;
    while (i < (*arr1).length && j < (*arr2).length)
    {
        if ((*arr1).A[i] < (*arr2).A[j])
        {
            (*arr3).A[k] = (*arr1).A[i];
            i++;
            k++;
        }
        else
        {
            (*arr3).A[k] = (*arr2).A[j];
            j++;
            k++;
        }
    }

    for (; i < (*arr1).length; i++)
    {
        (*arr3).A[k] = (*arr1).A[i];
        k++;
    }
    for (; j < (*arr2).length; j++)
    {
        (*arr3).A[k] = (*arr2).A[j];
        k++;
    }
    (*arr3).length = (*arr1).length + (*arr2).length;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    struct Array arr1 = {{3, 6, 9, 12,14}, 10, 5};
    struct Array arr2 = {{4, 8, 12, 16,17}, 10, 5};
    struct Array arr3 = {{0}, 30, 30};
    merging(&arr1, &arr2, &arr3);
    display(&arr3);
    return 0;
}
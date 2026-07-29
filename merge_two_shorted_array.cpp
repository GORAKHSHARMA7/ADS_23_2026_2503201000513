#include <iostream>
using namespace std;

int main()
{
    int a[] = {1, 3, 5, 7, 9};
    int b[] = {2, 4, 6, 8, 10};

    int n1 = 5;
    int n2 = 5;

    int c[10];

    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    while (i < n1)
        c[k++] = a[i++];

    while (j < n2)
        c[k++] = b[j++];

    cout << "Merged Sorted Array: ";

    for (int i = 0; i < n1 + n2; i++)
        cout << c[i] << " ";

    return 0;
}
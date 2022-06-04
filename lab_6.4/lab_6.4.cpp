#include <iostream> 
#include <string> 

using namespace std;
template <typename T>

bool Ordered(T const* begin, T const* end) {
    bool asc = true, desc = true;

    if (begin == end) return true;
        end--;

    while (begin != end) {

        if (*begin < *(begin + 1)) desc = false;

        if (*begin > *(begin + 1)) asc = false;

        begin++;

    }

    return asc || desc;
}

template <class T>

void Sort(T A[], int count)

{

    int i, j;

    T tmp;

    for (i = 0; i < count - 1; i++)

        for (j = i; j >= 0; j--)

            if (A[j] < A[j + 1])

            {



                tmp = A[j];

                A[j] = A[j + 1];

                A[j + 1] = tmp;

            }

}



int main()

{

    int M[] = { 3, 5, -1, 2, -9, 7, 5, 3 };

    double D[] = { 3.3, 2.8, 1.5, 4.8, 6.1, 1.3 };

    Sort(M, 8);



    for (int i = 0; i < 8; i++)
        cout << M[i] << ", ";

    cout << endl << endl;

    Sort(D, 6);

    for (int i = 0; i < 6; i++)
        cout << D[i] << ", " << endl;

    cout << Ordered(M, M + 10) << endl;

    cout << endl;

    return 0;
}
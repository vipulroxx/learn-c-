#include <iostream>
using namespace std;

class backtracking
{
    bool finished;
    int max_candidates;
    public:
        backtracking(int n);
        bool is_a_solution(int a[], int k, int n);
        void construct_candidates(int a[], int k, int n, int c[], int *ncandidates);
        void process_solution(int a[], int k, int n);
        void backtrack(int a[], int k, int input);
        void generate_subsets(int n);
};

backtracking::backtracking(int n)
{
    finished = false;
    max_candidates = n;
}

bool backtracking::is_a_solution(int a[], int k, int n)
{
    return (k == n);
}

void backtracking::construct_candidates(int a[], int k, int n, int c[], int *ncandidates)
{
    c[0] = true;
    c[1] = false;
    *ncandidates = 2;
}

void backtracking::process_solution(int a[], int k, int n)
{
    int i;
    printf("{ ");
    for (i = 1; i <= k; i++)
    {
        if (a[i] == true)
        {
            printf("%d ", i);
        }
    }
    printf("} \n");
}

void backtracking::backtrack(int a[], int k, int input)
{
    int c[max_candidates], ncandidates, i;
    if (is_a_solution(a, k, input))
    {
        process_solution(a, k, input);
    }
    else
    {
        k = k + 1;
        construct_candidates(a, k, input, c, &ncandidates);
        for (i = 0; i < ncandidates; i++)
        {
            a[k] = c[i];
            backtrack(a, k, input);
            if (finished)
            {
                return;
            }
        }
    }
}

void backtracking::generate_subsets(int n)
{
    int a[max_candidates];
    backtrack(a, 0, n);
}

int main()
{
    int n;
    cout << "Enter the number you want to generate all possible subsets of : ";
    cin >> n;
    backtracking bt(100);
    cout << "Generating all possible subsets using backtracking for n = " << n << endl;
    bt.generate_subsets(n);
    return 0;
}
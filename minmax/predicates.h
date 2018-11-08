#ifndef PREDICATES_H_INCLUDED
#define PREDICATES_H_INCLUDED
int min_positive(int a, int b)
{
    return a > 0 && a < b;
}
int max_not_even(int a, int b)
{
    return a%2 != 0 && a > b;
}
int greater_min(int a, int b)
{
    return a > 3 && b > 3 && a < b;
}


#endif // PREDICATES_H_INCLUDED

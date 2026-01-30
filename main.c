#include "push_swap.h"

int main(int ac, char **av)
{
    t_stack *a;
    t_stack *b;
    
    // Если нет параметров - ничего не делаем
    if (ac < 2)
        return (0);
    
    // Парсим аргументы
    a = parse_args(ac, av);
    if (!a)
        return (0);
    
    b = NULL;
    
    // Если уже отсортировано - выходим
    if (is_sorted(a))
    {
        free_stack(a);
        return (0);
    }
    
    // Запускаем алгоритм сортировки
    push_swap(&a, &b);
    
    // Освобождаем память
    free_stack(a);
    free_stack(b);
    
    return (0);
}
// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int C, R, S, Total, Tc, Tr, Ts;
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d C\n%d R\n%d S\n", &C, &R, &S);
//         Total += C + R + S;
//         Tc += C;
//         Tr += R;
//         Ts += S;
//     }
//     int Pc, Pr, Ps;
//     Pc = Total * (Tc / 100);
//     Pr = Total * (Tr / 100);
//     Ps = Total * (Ts / 100);

//     printf("Total: %d cobaiasn\n", &Total);
//     printf("Total de coelhos: %d\n", &Tc);
//     printf("Total de ratos: %d\n", &Tr);
//     printf("Total de sapos: %d\n", &Ts);
//     printf("Percentual de coelhos: %.2f\n", Pc);
//     printf("Percentual de ratos: %.2f\n", Pr);
//     printf("Percentual de sapos:%.2f\n", Ps);

//     return 0;
// }

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int Total = 0, Tc = 0, Tr = 0, Ts = 0;
    int qty;
    char type;

    for (int i = 0; i < n; i++)
    {
        scanf("%d %c", &qty, &type);
        Total += qty;

        if (type == 'C')
            Tc += qty;
        else if (type == 'R')
            Tr += qty;
        else if (type == 'S')
            Ts += qty;
    }

    double Pc = (Tc * 100.0) / Total;
    double Pr = (Tr * 100.0) / Total;
    double Ps = (Ts * 100.0) / Total;

    printf("Total: %d cobaias\n", Total);
    printf("Total de coelhos: %d\n", Tc);
    printf("Total de ratos: %d\n", Tr);
    printf("Total de sapos: %d\n", Ts);
    printf("Percentual de coelhos: %.2lf %%\n", Pc);
    printf("Percentual de ratos: %.2lf %%\n", Pr);
    printf("Percentual de sapos: %.2lf %%\n", Ps);

    return 0;
}
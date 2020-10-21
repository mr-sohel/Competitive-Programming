#include <stdio.h>

int main()
{
    //freopen("out.txt", "w", stdout);
    int T,i,oppnent_run, current_run, balls_remain, terget_run;
    double  over_played,over_remain, current_run_rate, required_run_rate;
    scanf("%d", &T);
    for (i = 0; i < T; i++)
    {
        scanf("%d %d %d", &oppnent_run, &current_run,&balls_remain);
        terget_run = oppnent_run + 1;
        over_played = (double) (300 - balls_remain) / 6;
        over_remain = (double) balls_remain / 6;

        current_run_rate = current_run / over_played;
        if(current_run > oppnent_run) {
            required_run_rate = 0.00;
        }
        else 
            required_run_rate = (terget_run - current_run) / over_remain;
        printf("%0.2lf %0.2lf\n", current_run_rate, required_run_rate);
    }
    return 0;
}

/*
 made by harshith sk
 11-01-2023
*/
#include <stdio.h>
void sem_grd();

int main()
{
    printf("                NIE-CGPA Calculator\n");
    printf("*   *   *   *   *   *   *   *   *   *   *   *   *   *   *\n");
    sem_grd();

    return 0;
}

void sem_grd()
{
    int cred_pt = 0;
    int gd_pt = 0;
    int sem_num = 0;
    int cred_ad_gd = 0;
    int cred_sum = 0;
    int courses_num = 0;
    float sgpa = 0;
    float sum_sgpa = 0;
    float cgpa = 0;
    printf("How many sem have you completed?\n");
    scanf("%d", &sem_num);
    // for sem
    for (int i = 1; i <= sem_num; i++)
    {
        if (i == 1)
        {
            printf("How many courses did you opted in 1st sem?\n");
        }
        else if (i == 2)
        {
            printf("How many courses did you opted in 2nd sem?\n");
        }
        else if (i == 3)
        {
            printf("How many courses did you opted in 3nd sem?\n");
        }
        else
        {
            printf("How many courses did you opted in %dth sem?\n", i);
        }
        scanf("%d", &courses_num);
        // for courses
        for (int j = 1; j <= courses_num; j++)
        {
            if (j == 1)
            {
                printf("What is the credit point of the 1st course ??\n");
            }
            else if (j == 2)
            {
                printf("What is the credit point of the 2nd course ??\n");
            }
            else if (j == 3)
            {
                printf("What is the credit point of the 3rd course ??\n");
            }
            else
            {
                printf("What is the credit point of the %dth course ??\n", j);
            }
            scanf("%d", &cred_pt);
            printf("Its grade point :\n");
            scanf("%d", &gd_pt);

            cred_ad_gd += (cred_pt * gd_pt);
            cred_sum += cred_pt;
        }
        float temp = 0;
        temp = ((float)cred_ad_gd / cred_sum);
        sgpa += temp;
        printf("\n\nYour %d sem sgpa is %f \n\n\n", i, sgpa);
        sum_sgpa += sgpa;
        cred_ad_gd = 0;
        cred_sum = 0;
        sgpa = 0;
    }
    cgpa = ((float)sum_sgpa / (float)sem_num);
    printf("The cgpa is : %f ", cgpa);
}

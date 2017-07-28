#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("tr2.txt","r",stdin);

    freopen("tr3.txt","w",stdout);
    double matrix[150][150];
    for(int i=0;i<12;i++)
    {
        double sum=0;
        for(int j=0;j<12;j++)
        {

            scanf("%lf",& matrix[i][j]);
            sum+=matrix[i][j];

        }
        if(sum<1.0)
        matrix[i][11]+=(1.0-sum);
        if(sum>1.0)
        matrix[i][11]-=(sum-1.0);
    }
//    for(int i=0;i<12;i++)
//    {
//        for(int j=0;j<12;j++)
//        {
//            printf("%lf ",matrix[i][j]);
//
//        }
//        puts("");
//    }

    for(int i=0;i<12;i++)
    {
        double ct=0;
        double sum=0;
        for(int j=0;j<12;j++)
        {

            sum+=matrix[i][j];
            printf("%0.2lf ",matrix[i][j]);

        }
        //printf("%lf",sum);
        puts("");


    }

}


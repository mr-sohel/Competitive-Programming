// problem link : https://cgi.csc.liv.ac.uk/JudgeOnline/problem.php?id=1070
// 1070: Sort odd numbers
// Coder: Sohel Rana // Sohelr360

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,array[10];
    for(i = 0; i < 10; i++)
        cin>>array[i];// input 10 intger in array
    int cnt = 0; 
    for(i = 0; i < 10; i++)
    {
        if(array[i] % 2 != 0)
            cnt++; // count how many odd number is in the array.
    }
    int odds[cnt];// odds for contains the odds numbers.
    for(i = 0,j = 0; i < 10; i++)
    {
        if(array[i] % 2 != 0)
        {
            odds[j] = array[i]; //copy all odd numbers to odds from array.
            j++;
        } 
    }
    sort(odds, odds+cnt);// to sort the odds array in acsending order
    for(i = 0,j = cnt - 1; i < 10; i++)
    {
        if(array[i] % 2 != 0)
        {
            array[i] = odds[j];/* change the odds number of array and assign the sorted odds in reversed mood. Cause we want to sort the odds in descending order */
            j--;
        }
    }
    for(i = 0; i < 10; i++)
        cout<<array[i]<<' ';// print the final array . 
    cout<<'\n';
    return 0;
}
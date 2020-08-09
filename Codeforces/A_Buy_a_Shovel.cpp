#include <bits/stdc++.h>
#define endl '\n'
#define pi acos(-1)
#define faster_io                \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);               \
    cout.tie(NULL);

using namespace std;

int main()
{
    //freopen("/home/sohel/Documents/my_codes/out.txt", "wt", stdout);

    int k, r, min_shovel = 1;
    cin >> k >> r;
    int temp_k = k;

    if (k < 10)
    {
        if(k == r)
            cout << 1 << endl;
        else if(k == 1)
            cout << r << endl;
        else if (k > r)
        {

            while (true)
            {
                if (k >= 10)
                    break;
                else
                {
                    k += temp_k;
                    min_shovel++;
                }
            }
            //cout << "k is " << k << endl;
            for (int i = 10;; i = i + 10)
            {
                if (i > k)
                {
                    if ((i + r - 10) == k)
                    {
                        break;
                    }
                    else
                    {
                        k += temp_k;
                        min_shovel++;
                    }
                }
                if (i == k)
                {
                    break;
                }
                // cout << "i is " << i <<" k is " << k << endl;
            }
            cout << min_shovel << endl;
        }
        else if(r > k) {
            if((r % k)  == 0){
                if((r / k) == 2)
                 cout << 2 << endl;
            }
            else{
                while (true)
                {
                    if (k >= 10)
                        break;
                    else
                    {
                        k += temp_k;
                        min_shovel++;
                    }
                }
               cout << "k is " << k << endl;
                for (int i = 10;; i = i + 10)
                {
                    if (i > k)
                    {
                        if ((i + r - 10) == k)
                        {
                            break;
                        }
                        else
                        {
                            k += temp_k;
                            min_shovel++;
                        }
                    }
                    else if (i == k)
                    {
                        break;
                    }
                    // cout << "i is " << i <<" k is " << k << endl;
                }
                cout << min_shovel << endl;
            }
           
        }
    }
    else
    {
        for (int i = 10;; i = i + 10)
        {
            if (i > k)
            {
                if ((i + r - 10) == k)
                {
                    break;
                }
                else
                {
                    k += temp_k;
                    min_shovel++;
                }
            }
            if (i == k)
            {
                break;
            }
            // cout << "i is " << i <<" k is " << k << endl;
        }
        cout << min_shovel << endl;
    }

    return 0;
}
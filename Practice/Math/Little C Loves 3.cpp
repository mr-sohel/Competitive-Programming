#include <iostream>
using namespace std;
int main() {
    long long n, result, a;
    cin>>n;
    long long mul = n / 3;
    if(mul % 3 == 0){
        a = mul - 1;
        a = a * 2;
        long long result = n - a;
        if(result % 3 == 0)
        {
            a = mul + 1;
            a = a * 2;
            result = n - a;
            cout << mul + 1 << " " << mul + 1 << " " << result << endl;
        }
        else{
            cout << mul - 1 << " " << mul - 1 << " " << result << endl;
        }
    }
    else{
        if(n != mul * 3){
            int temp = mul;
            mul = mul + mul;
            result = n - mul;
            if(result % 3 == 0){
                a = temp + 1;
                if(a % 3 == 0){
                    a = temp - 1;
                    a = a + a;
                    result = n - a;
                    cout << temp - 1 << " " << temp - 1 << " " << result << endl;
                }
                else{
                    a = a * 2;
                    result = n - a;
                    cout << temp + 1 << " " << temp + 1 << " " << result <<endl;
                }
            }
            else
                cout << temp << " " << temp << " " << result << endl;
        }
        else
            cout << mul << " " << mul << " " << mul << endl;
    }
    return 0;
}

/* #include <cstdio>
#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <algorithm>
    using namespace std;

int main()
{
    int num;
    scanf("%d", &num);
    if (num % 3 == 0)
    {
        printf("1 1 %d\n", num - 2);
    }
    else
    {
        printf("1 2 %d\n", num - 3);
    }
    return 0;
} */
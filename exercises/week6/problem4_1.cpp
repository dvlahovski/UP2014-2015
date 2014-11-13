#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int p, q;
    bool isAnswer, check;
    cin >> p >> q;
    while (p > q)
    {
        cout << "Please, enter correct values!";
        cin >> p >> q;
    }

    int num;
    for (int i = p; i <=q; i++ )
    {
        isAnswer = check = true;
        num = i;
        int digit1, digit2;
        while(num > 10 && isAnswer)
        {
            digit1 = num % 10;
            digit2 = num / 10 % 10;
            if(check)
            {
                isAnswer = digit1 > digit2;
            }
            else isAnswer = digit1 < digit2;
            check = !check;
            num /= 10;
        }
        if (isAnswer && i > 10) cout << i << endl;
    }
    return 0;
}

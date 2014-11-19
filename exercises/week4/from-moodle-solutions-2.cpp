//Решения на вторите (по-трудни уж) задачи от moodle
//зад.1: проверява дали въведени 3 числа са валидна дата
//(ще бъде включена в първото ви домашно, затова няма да качим решение)

//зад.2: по въведен номер на месец (от 1 до 12) извежда в кой сезон е
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    switch(n)
    {
        case 12:
        case 1:
        case 2: cout << "It's winter!"; break;
        case 3:
        case 4:
        case 5: cout << "It's spring!"; break;
        case 6:
        case 7:
        case 8: cout << "It's summer!"; break;
        case 9:
        case 10:
        case 11: cout << "It's autumn! Winter is coming!"; break;
    }
    return 0;
}

//зад.3: по въведено цяло число [1, 10], извежда неговия римски запис
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    switch(n)
    {
        case 1: cout << "I"; break;
        case 2: cout << "II"; break;
        case 3: cout << "III"; break;
        case 4: cout << "IV"; break;
        case 5: cout << "V"; break;
        case 6: cout << "VI"; break;
        case 7: cout << "VII"; break;
        case 8: cout << "VIII"; break;
        case 9: cout << "IX"; break;
        case 10: cout << "X"; break;
    }
    return 0;
}

//зад.4: по въведено n извежда n-тото число на Фибоначи
#include <iostream>
using namespace std;

int main()
{
    int n = 1, first = 1, second = 1;
    cin >> n;
    if ( n == 1 || n == 2 ) cout << first;
    else
    {
        for (int i = 2; i < n; i++)
        {
            int temp = first;
            first = second;
            second += temp;
        }
    cout << second;
    }
    return 0;
}

//зад.5: въвежда число n и намира сумата на цифрите на n
#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    int temp = n;
    while(temp)
    {
        sum += temp % 10;
        temp /= 10;
    }
    cout << sum << endl;
    return 0;
}

//зад.6: въвежда число n и да намира сумата от делителите му
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 1 + n; // защото 1 и n са делители на всяко число n
    for(int i = 2; i < n; i++)
    {
        if (n % i == 0) sum += i;
    }
    cout << sum << endl;
    return 0;
}

//зад.7: по въведено число n, проверява дали то е просто
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool isPrime = true;
    for(int i = 2; i < n; i++)
    {
        if (n % i == 0) isPrime = false;
    }
    cout << boolalpha << isPrime << endl;
    return 0;
}

//зад.8: по въведено число n проверява дали броя на делителите му е просто число
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int numberOfDivisors = 2; // защото 1 и n са делители на всяко число n
    for(int i = 2; i < n; i++)
    {
        if (n % i == 0) numberOfDivisors += 1;
    }
    bool isPrime = true;
    for(int i = 2; i < numberOfDivisors; i++)
    {
        if (numberOfDivisors % i == 0) isPrime = false;
    }
    cout << boolalpha << isPrime << endl;
    return 0;
}

//зад.9:  проверява дали 2 въведени числа a и b проверява дали те са приятелски
//(т.е.сбора от делителите на едното е = на сбора от делителите на другото)
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int sumDivisorsA = 1+a;
    int sumDivisorsB = 1+b;
    for(int i = 2; i < max(a, b); i++)
    {
        if (a % i == 0 && i < a) sumDivisorsA += i;
        if (b % i == 0 && i < b) sumDivisorsB += i;
    }
    cout << boolalpha << (sumDivisorsA == sumDivisorsB) << endl;
    return 0;
}

//зад.10: по въведени число n и цифра k проверява дали k се съдържа в n
#include <iostream>
using namespace std;

int main()
{
    int n, k;
    bool digitIsInNumber = false;
    cin >> n >> k;
    int temp = n;
    while(temp)
    {
        if(k == temp % 10) digitIsInNumber = true;
        temp /= 10;
    }
    cout << boolalpha << digitIsInNumber << endl;
    return 0;
}

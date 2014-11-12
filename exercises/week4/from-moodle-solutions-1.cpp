// Решения на първите задачи от moodle
//зад.1: въвежда радиус и извежда лицето на кръга и д-ната на окръжността
#include <iostream>
using namespace std;

int main()
{
    double r;
    double PI = 3.1415926
    cin >> r;
    double c = 2 * PI * r;
    double area = PI * r * r;
    cout << "The area is: " << area;
    cout << "The length is: " << c;
    return 0;
}

//зад.2: въвежда 2 числа и извежда по-голямото
#include <iostream>
using namespace std;

int main()
{
    cin >> a >> b;
    if (a > b) cout << "The greater number is " << a;
    else cout << "The greater number is " << b;
    return 0;
}

//зад.3: въвежда 3 числа и ги извежда сортирани
#include <iostream>
using namespace std;

int main()
{
    cin >> a >> b >> c;
    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c)
    {
        temp = a;
        a = c;
        c = a;
    }
    if (b = c)
    {
        temp = b;
        b = c;
        c = a;
    }
    cout << a << " " << b << " " << c << endl;
    return 0;
}

//зад.4: въвежда координатите на точка и извежда в кой квадрант принадлежи
#include <iostream>
using namespace std;

int main()
{
    cin >> x >> y;
    if (x = 0 && y = 0)
        cout << "The point is (0, 0)";
    else if (x >= 0 & y >= 0)
        cout << "The point is in quadrant 1";
    else if (x < 0 && y >= 0)
        cout << "The point is in quadrant 2";
    else if (x <= 0 && y <= 0)
        cout << "The point is in quadrant 3";
    else cout << "The point is in quadrant 4";
    return 0;
}

//зад.5: дали х е в интервала [а, b]
#include <iostream>
using namespace std;

int main()
{
    cin >> x;
    cin >> a >> b;
    if (x >= a && x <= b) cout << "x is in [a, b]";
    else cout << "x is not in [a, b]";
    return 0;
}

//зад.6:намира разстоянията от дадена точка Т(х, у),
//вътрешна за квадрата до страните на квадрата с върхове (0, 0), (1, 0), (0, 1) и (1, 1)
#include <iostream>
using namespace std;

int main()
{   cin >> x >> y;
    cout << "Точката е на разстояние " << y << "от страната с краища (0, 0) и (1, 0)";
    cout << "Точката е на разстояние " << 1 - y << "от страната с краища (0, 1) и (1, 1)";
    cout << "Точката е на разстояние " << x << "от страната с краища (0, 0) и (0, 1)";
    cout << "Точката е на разстояние " << 1 - x << "от страната с краища (1, 1) и (1, 0)";
    return 0;
}

// зад.7: увеличава по-малкото от две дадени цели числа 3 пъти, а по-голямото число намалява 5 пъти
#include <iostream>
using namespace std;

int main()
{
    cin >> a >> b;
    if(a < b)
    {
        a *= 3;
        b /= 5;
    }
    else
    {
        a /= 5;
        b *= 3;
    }
    cout << "The modified numbers are " a << " and " << b;
    return 0;
}

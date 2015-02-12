int formula()
{
    char c, temp;
    int x, y;
    cin >> c; // c is a digit, 'f' or 'g'
    if (c >= '0' && c <= '9')
    {
        return (int)c - (int)'0';
    }
    //no need for else, c is for sure 'f' or 'g'
    cin >> temp; // temp is '('
    x = formula();
    cin >> temp; // temp is ','
    y = formula();
    cin >> temp; // temp is ')'
    switch (c)
    {
        case 'f' : return (x+y)%3;
        case 'g' : return abs(x-y);
        //we don't need a default case, because the expression that we type will be correct
    }
}

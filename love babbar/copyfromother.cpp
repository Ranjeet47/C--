Lecture 8:
1. 
    int n;
    cin >> n;

    switch (100)
    {
    case 100:
        if ((n / 100) > 0)
        {
            cout << "100s: " << (n / 100) << endl;
            n -= ((n / 100) * 100);
        }
    case 50:
        if ((n / 50) > 0)
        {
            cout << "50s: " << (n / 50) << endl;
            n -= ((n / 50) * 50);
        }
    case 20:
        if ((n / 20) > 0)
        {
            cout << "20s: " << (n / 20) << endl;
            n -= ((n / 20) * 20);
        }
    case 1:
        cout << "1s: " << n << endl;
        break;
    }

2. Arithmetic Progression - AP

int ap(int n)
{
    return ((3 * n) + 7);
}

int _tmain(int argc, _TCHAR* argv[])
{
    int n;
    cin >> n;
    
    cout << ap(n) << endl;

    return 0;
}

3. Total no of set bits

int noOfSetBits(int a)
{
    int count = 0;
    while (a != 0)
    {
        if (a & 1)
        {
            count++;
        }
        a = a >> 1;
    }
    return count;
}

int _tmain(int argc, _TCHAR* argv[])
{
    int a, b;
    cin >> a >> b;

    cout << noOfSetBits(a) + noOfSetBits(b) << endl;
    
    return 0;
}

4. Fibonacci

int fibonacci(int n)
{
    int a = 0;
    int b = 1;

    for (int i = 2; i < n; i++)
    {
        int next = a + b;
        a = b;
        b = next;
    }
    return b;
}

int _tmain(int argc, _TCHAR* argv[])
{
    int n;
    cin >> n;
    
    cout << fibonacci(n) << endl;

    return 0;
}

Outputs:
1. 10
2. 15
3. 196
 //C04EX05.CPP

 #include <iostream>
 #include <ciso646>
 #include <cmath>

 using namespace std;

 int main(void)
 {
   double a, b, c , delta, x1, x2;

    cout << "Entre valor para <A>:"; cin >> a;
    cin.ignore(80, '\n');

    cout << "Entre valor para <B>:"; cin >> b;
    cin.ignore(80, '\n');

    cout << "Entre valor para <C>:"; cin >> c;
    cin.ignore(80, '\n');

    if ((a != 0) and (b != 0) and (c != 0))
        {
            delta = (pow(b,2) - (4 * a * c));
        }
    if (delta < 0)
    {
        cout << "Nao existem raizes reais" << endl;
    }
    else if (delta > 0)
    {
        x1 = (-b + (sqrt(delta)) / (2 * a));
        x2 = (-b - (sqrt(delta)) / (2 * a));
        cout << x1 << endl;
        cout << x1 << endl;
    }
    else
    {
        x1 = - b / (2 * a);
        cout << x1 << endl;
    }

    cout << endl;
    cout << "Tecle <Enter> para encerar...";
    cin.get();
    return 0;
 }

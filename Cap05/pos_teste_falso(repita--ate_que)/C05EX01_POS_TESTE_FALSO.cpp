 //C05EX01.CPP

 #include <iostream>
 #include <cmath>
 #include <ciso646>

 using namespace std;

 int main(void)
 {
     int32_t r;
     int32_t i = 15;

     do
     {
        r = pow(i, 2);

        cout << "Valor ao quadrado: " << r << endl;
        i++;
     }
     while (not (i > 200)); // repita até que

     cout << endl;
     cout << "Tecle <Enter> para encerar...";
     cin.get();
     return 0;

 }

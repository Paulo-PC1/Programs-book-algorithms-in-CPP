 //C05EX01.CPP

 #include <iostream>
 #include <cmath>

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
     while (i <= 200); // execute enquanto for

     cout << endl;
     cout << "Tecle <Enter> para encerar...";
     cin.get();
     return 0;

 }

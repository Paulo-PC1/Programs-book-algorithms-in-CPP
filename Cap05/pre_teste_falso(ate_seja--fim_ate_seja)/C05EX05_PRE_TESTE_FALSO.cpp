 // C05EX05.CPP

 #include <iostream>
 #include <ciso646>

 using namespace std;

 int main(void)
 {
     int32_t r;
     int16_t i = 0;

     while (not(i > 20))
     {
         r = i - 2 * (i / 2);

         if (r != 0 )
            cout << "valor Impar entre <0> e <20>: " << i << endl;
            cout << endl;
        i++;
     }

     cout << endl;
     cout << "Tecle <Enter> para encerar...";
     cin.get();
     return 0;
 }

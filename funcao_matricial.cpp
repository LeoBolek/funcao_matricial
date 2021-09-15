#include <iostream>
#include <iomanip>

using namespace std;

int main(void) {
    // f(x, y) = (3*(x + 1)) + (y * y))
    // (0 < x < 9) e (0 < y < 9)

    int planilha[10][10] = {};
    for (int x = 0; x < 10; x++) {
        for (int y = 0; y < 10; y++) {
            planilha[x][y] = (3 * (x + 1) + (y * y));
            string end = (y < 9) ? ", " : "\n";
            cout << setw(3) << planilha[x][y] << end;
        }
    }
    cout << "Obrigado por utilizar este programa! :)" << endl;
    system("pause");
    return 0;
}

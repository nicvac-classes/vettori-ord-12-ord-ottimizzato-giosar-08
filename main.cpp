
using namespace std;

int main() {
    int N, I, J, t;
    bool A;

    cout << "elementi vettore: ";
    cin >> N;

    vector<int> R(N);

    for (I = 0; I < N; I++) {
        R[I] = rand() % (N * 10 + 1);
    }

   
    cout << "valori generati:" <<;
    for (I = 0; I < N; I++) {
        cout << "valore: " << R[I] <<;
    }
    J = 0;
    do {
        A = true;
        I = 0;
        do {
            if (J == 0 || (N - 2 - I)) {
    
                t = R[I];
                R[I] = R[I + 1];
                R[I + 1] = t;
                A = false;
         {
             
                R[I] = R[I + 1];
            }
            I++;
        } while (I < N - 2);
        J++;
    } while (!A);

    cout << "vettori:" <<;
    for (I = 0; I < N; I++) {
        cout << R[I] << " ";
    }
    cout << l;

    return 0;
}

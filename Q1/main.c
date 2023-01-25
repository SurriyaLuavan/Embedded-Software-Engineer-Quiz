#include <stdio.h>

int getSquares(int, int);

int main() {
    int N, M;
    printf("Please enter the dimensions N by M (Example: 16 5): ");
    fflush(stdout);
    scanf(" %d %d", &N, &M);
    getSquares(N, M);
    return 0;
}

int getSquares(int N, int M) {

int side_length = 0;
int squares = 0;

    if (N == M) {
        printf("%dx%d", N, N);
    }
    else {
        while (N != 0 && M != 0) {
            if (N > M) {
            side_length = M;
            squares = ((N * M) / (side_length * side_length)); // calculate number of squares that can be cut from paper
            N = N % side_length;
            } else {
            side_length = N;
            squares = ((N * M) / (side_length * side_length)); // calculate number of squares that can be cut from paper
            M = M % side_length;
            }

            for (int i = 0; i < squares; i++) {
            printf("%dx%d", side_length, side_length);
            if((N != 0 && M != 0) || (i != (squares-1))) {
                printf(", ");
                }
            }
            }
        }
return 0;
}

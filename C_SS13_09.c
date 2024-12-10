#include <stdio.h>
#include <math.h>

void inputArray(int arr[100][100], int n, int m) {
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

void printMatrix(int arr[100][100], int n, int m) {
    printf("Ma tran:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }
}
void printCorners(int arr[100][100], int n, int m) {
    printf("Cac phan tu o goc ma tran:\n");
    printf("%d %d\n", arr[0][0], arr[0][m - 1]);
    printf("%d %d\n", arr[n - 1][0], arr[n - 1][m - 1]);
}
void printBorders(int arr[100][100], int n, int m) {
    printf("Cac phan tu tren duong bien:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == m - 1){
                printf("%d", arr[i][j]);
                printf("\n");
        }
        
    }
}
}
void printDiago(int arr[100][100], int n, int m) {
    printf("Cac phan tu tren duong cheo chinh va phu:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == j || i + j == n - 1){
                printf("%d", arr[i][j]);
                printf("\n");
        
    }
}
}
}
int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}
void printPrimes(int arr[100][100], int n, int m) {
    printf("Cac phan tu la so nguyen to:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (isPrime(arr[i][j])){
                printf("%d", arr[i][j]);
                printf("\n");
        }
        
    }
    
}
}

int main() {
    int n, m;
    int arr[100][100];

    printf("Nhap so dong (n): ");
    scanf("%d", &n);
    printf("Nhap so cot (m): ");
    scanf("%d", &m);

    int choice;
    do {
        printf("\nMENU\n");
        printf("1. Nhap gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3. In ra cac phan tu o goc theo ma tran\n");
        printf("4. In ra cac phan tu nam tren duong bien theo ma tran\n");
        printf("5. In ra cac phan tu nam tren duong cheo chinh va cheo phu theo ma tran\n");
        printf("6. In ra cac phan tu la so nguyen to theo ma tran\n");
        printf("7. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                inputArray(arr, n, m);
                break;
            case 2:
                printMatrix(arr, n, m);
                break;
            case 3:
                printCorners(arr, n, m);
                break;
            case 4:
                printBorders(arr, n, m);
                break;
            case 5:
                printDiago(arr, n, m);
                break;
            case 6:
                printPrimes(arr, n, m);
                break;
            case 7:
                printf("Thoat.\n");
                break;
            default:
                printf("Lua chon khong hop le.\n");
        }
    } while (choice != 7);

    return 0;
}


#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// // 1. Chẵn lẽ
// void bai1(int a[], int n){
//     int chan=0,le=0;
//     for(int i=0;i<n;i++){
//         if(a[i]%2==0)++chan;
//         else ++le;
//     }
//     cout<<chan<<" "<<le;
// }


// // 2. Trung bình cộng nguyên tố
// bool nt(int n){
//     if(n<2) return false;
//     for(int i=2;i <= sqrt(n);i++){
//         if(n%i==0) return false;
//     }
//     return true;
// }
// void bai2(int a[], int n){
//     int dem = 0;
//     long long tong = 0;
//     for(int i=0;i<=sqrt(n);i++){
//         if(nt(a[i])){
//             ++dem;
//             tong += a[i];
//         }
//     }
//     // trường hợp mảng không có số nguyên tố
//     if (dem == 0) {
//         cout << "0\n";
//     } 
//     else {
//         cout << fixed << setprecision(3) << (double)tong / dem << "\n";
//     }
// }


// //3. Số nhỏ nhất và số lần xuất hiện
// void bai3(int a[],int n){
//     int min = 1e9, dem = 0;
//     for(int i=0;i<n;i++){
//         if(a[i]<=min){
//             min = a[i];
//             ++ dem;
//         } 
//     }
//     cout << min << " " << dem;
// }


// //4. Đếm xem bao nhiêu số nhỏ hơn và lớn hơn X
// void bai4(int a[], int n, int X){
//     int nho = 0, lon = 0;
//     for(int i=0;i<n;i++){
//         if(a[i]>X) ++lon;
//         if(a[i]<X) ++ nho;
//     }
//     cout << lon << " " << nho;
// }


// //5. In số chẵn ở chỉ số chẵn, không thỏa thì in None
// void bai5(int a[], int n){
//     for(int i=0;i<n;i++){
//         if(a[i]%2==0){
//             cout << i<< " "<< a[i]<<"\n";
//         }
//         else cout << "None"<< "\n";
//     }
// }


// // 6. Đếm số cặp a[i]+a[j] = K cho trước, i!=j
// void bai6(int a[], int n, int K){
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(a[i]+a[j]==K) cout <<i<<","<<j<<" "<<a[i]<<","<<a[j]<<endl;
//         }
//     }
// }


// // 7. Tìm độ chênh lệch nhỏ nhất giữa 2 phần tử
// void bai7(int a[],int n){
//     int min=1e9;
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(abs(a[i]-a[j])<min) min=abs(a[i]-a[j]);
//         }
//     }
//     cout<<min;
// }


// // 8. Liệt kê các giá trị khác nhau
// void bai8(int a[], int n){
//     for(int i=0;i<n;i++){
//         bool have=false;
//         for(int j=0;j<i;j++){
//             if(a[i]==a[j]){
//                 have=true;
//                 break;
//             } 
//         } 
//         if(have==false) cout<<a[i]<<" ";
//     }
// }


// // 9. Liệt kê kèm tần suất của các giá trị 
// void bai9(int a[],int n){
//     int b[1005] = {0};
//     for(int i=0;i<n;i++){
//         if(b[i]==0){
//             int dem = 0;
//             for(int j=0;j<n;j++){
//                 if(a[i]==a[j]){
//                     ++dem;
//                     b[j]=1;
//                 }
//             }
//             cout<<a[i]<< " "<<dem<<endl;
//         }       
//     }
// }
// // Cach 2
// void bai9(int a[],int n){
//     for(int i=0;i<n;i++){
//         bool have=false;
//         for(int j=0;j<i;j++){
//             if(a[i]==a[j]){
//                 have=true;
//                 break;
//             }
//         }
//         if(have==false){
//             int dem = 1;
//             for(int j=i+1;j<n;j++){
//                 if(a[i]==a[j]){
//                     ++dem;
//                 }
//             }
//             cout<<a[i]<<" "<<dem<<endl;
//         } 
//     }
// }


// // 10. tìm idx i sao cho tổng trái và tổng phải là primeNum
// bool nt(int n){
//     if(n<2) return false;
//     for(int i=2;i<=sqrt(n);i++){
//         if(n%i==0) return false;
//     }
//     return true;
// }
// void bai10(int a[], int n){
//     for(int i=0;i<n;i++){
//         int trai=0, phai=0;
//         for(int j=0;j<i;j++) trai+=a[j];
//         for(int j=i+1;j<n;j++) phai+=a[j];
//         if(nt(trai)&&nt(phai)){
//             cout<<i<<" ";
//         }
//     }   
// }


// // 11. Liệt kê các số fibonacci
// bool check(int n){
//     int F[100];
//     F[0]=0;
//     F[1]=1;
//     if(n==0||n==1) return true;
//     for(int i=2;i<=92;i++){
//         F[i]=F[i-1]+F[i-2];
//         if(F[i]==n) return true;
//     }
//     return false;
// }
// void bai11(int a[],int n){
//     bool have = false;
//     for(int i=0;i<n;i++){
//         if(check(a[i])) {
//             cout<< a[i]<<" ";
//             have =true;      
//         }
//     }
//     if(have==false) cout<<"None";
// }


// // 12. Vị trí số lớn nhất/nhỏ nhất
// void bai12(int a[], int n){
//     int max=a[0],min=a[0];
//     int idx1=0,idx2=0;
//     for(int i=0;i<n;i++){
//         if(a[i]>max){
//             max=a[i];
//             idx1=i;
//         }
//         if(a[i]<min){
//             min=a[i];
//             idx2=i;
//         }
//     }
//     cout<<idx1<<" "<<idx2;
// }

// // 13. Tổng và tích các phần tử và chia dư cho 1e9+7
// void bai13(int a[], int n) {
//     long long mod = 1e9 + 7;
//     long long tong = 0, tich = 1;   
//     for (int i = 0; i < n; i++) {
//         tong = (tong + a[i]) % mod;
//         tich = (tich * a[i]) % mod;
//     }    
//     cout << tong << "\n" << tich << "\n";
// }


// // 14.Ước chung lớn nhất của mảng
// // 1. Hàm tính UCLN của 2 số
// int gcd(int a, int b){
//     while(b!=0){
//         int r = a%b;
//         a=b;
//         b=r;
//     }
//     return a;
// }
// // 2. Hàm tính UCLN của cả mảng
// void bai14(int a[], int n) {
//     int kq = a[0];
//     for (int i = 1; i < n; i++) {
//         kq = gcd(kq, a[i]);
//     }
//     cout<<kq;
// }


// // 15. Số lớn nhất và số lớn thứ hai trong mảng
// void bai15(int a[], int n){
//     int max1=-1e9, max2=-1e9;    
//     for(int i=0;i<n;i++){
//         if(a[i]>max1){
//             max2=max1;
//             max1=a[i];
//         }
//         if(a[i]>max2 && a[i]!=max1) max2=a[i];
//     }
//     if(max2 == -1e9){
//         cout<< "Max 1: "<<max1<<", "<<"Không có max2";
//     }
//     else cout<<max1<<" "<<max2;
// }


int main(){
    int n; cin >> n;
    int a[n]; 
    for(int i=0; i<n; i++) cin >> a[i];
    
    // bai1(a,n);
    // bai2(a,n);
    // bai3(a,n);
    // bai4(a,n,4);
    // bai5(a,n);
    // bai6(a,n,3);
    // bai7(a,n);
    // bai8(a,n);
    // bai9(a,n);
    // bai10(a,n);
    // bai11(a,n);
    // bai12(a,n);
    // bai13(a,n);
    // bai14(a,n);
    // bai15(a,n);    
    
    return 0;    
}







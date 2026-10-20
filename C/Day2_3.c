// --- 20 Oct 2026 ---

# include <stdio.h>
# include <math.h>
#include <limits.h>

--- 1.Lineland ---
int min(int a, int b){
    return a<b ? a:b;
}

int max(int a, int b){
    return a>b ? a: b;
}

int main(){
    int n; scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
        if(i==0) printf("%d %d\n",a[1]-a[0],a[n-1]-a[0]);
        else if(i==n-1) printf("%d %d\n",a[n-1]-a[n-2],a[n-1]-a[0]);
        else printf("%d %d\n", min(a[i]-a[i-1],a[i+1]-a[i]), max(a[i]-a[0],a[n-1]-a[i]));
    }
}

--- 2. Die Hard film sticket---
int check(int a[], int n){
    int c25 = 0, c50 = 0;
    for(int i=0;i<n;i++){
        if(a[i]==25) ++c25;
        else if(a[i]==50){
            if(c25==0) return 0;
            --c25; 
            ++c50;
        }
        else {
            if(c25==0 || (c25*25+c50*50<75)) return 0;
            if(c50!=0){
                --c25;
                --c50;
            }
            else{
                c25-=3;
            }
        }
    }
    return 1;
}
int main(){
    int n; scanf("%d",&n);
    int a[n]; for(int i=0; i<n; i++) scanf("%d",&a[i]);

    if(check(a,n)) printf("YES"); else printf("NO");
}
    
3. Cặp số nguyên tố cùng nhau.
int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b,a%b);
}

int main(){
    int n; scanf("%d",&n);
    int a[n]; 
    for(int i=0; i<n;i++){ 
        scanf("%d",&a[i]);
    }
    
    long long cnt=0;
    for(int i=0; i<n;i++){
        for(int j=i+1;j<n;j++){
            if(gcd(a[i],a[j])==1) ++cnt;
        }
    }
    printf("%lld",cnt);
}

4. Tích 2 số lớn nhất trong mảng

1. Hàm max trả về số lớn hơn giữa 2 số long long
long long max_val(long long a, long long b) {
    return a > b ? a : b;
}

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n < 2) return 0; // Đảm bảo n >= 2

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Khởi tạo các giá trị cực trị an toàn bằng thư viện limits.h
    int max1 = INT_MIN, max2 = INT_MIN;
    int min1 = INT_MAX, min2 = INT_MAX;

    for (int i = 0; i < n; i++) {
        // Cập nhật 2 số lớn nhất
        if (a[i] > max1) {
            max2 = max1;
            max1 = a[i];
        } else if (a[i] >= max2) { // Dùng >= để xử lý mảng có phần tử trùng nhau
            max2 = a[i];
        }

        // Cập nhật 2 số nhỏ nhất
        if (a[i] < min1) {
            min2 = min1;
            min1 = a[i];
        } else if (a[i] <= min2) { // Dùng <= để xử lý mảng có phần tử trùng nhau
            min2 = a[i];
        }
    }

    // Tính tích 2 số lớn nhất và tích 2 số nhỏ nhất (ép kiểu 1LL để tránh tràn số)
    long long res = max_val(1LL * max1 * max2, 1LL * min1 * min2);

    printf("%lld", res);
    return 0;
}

// 1. Dãy con liên tiếp các phần tử kề nhau đều khác nhau.
// Cho một dãy số nguyên có n phần tử. Tìm dãy con liên tiếp có các phần tử 
// liền kề, khác nhau có độ dài lớn nhất.
long long max(long long a, long long b){
    return a<b? b:a;
}

int main(){
    int n; scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    
    int res = 0;
    int cnt = 1;
    for(int i =1;i<n;i++){
        if(a[i]!=a[i-1]) ++cnt;
        else{
            cnt = 1;
        }
        res = max(res,cnt);
    }   
    printf("%d",res);
}

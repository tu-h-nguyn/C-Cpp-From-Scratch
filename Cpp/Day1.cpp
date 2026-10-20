// --- 19 Oct 2026 ---
#include <iostream>
#include <string>

using namespace std;

// --- 1 ---
void display(){
    cout << "Xin chao 28tech \n";
    cout << "Ham void \n";
    cout << "28tech.com.vn";
}

int main(){
    display();
}

// --- 2 ---
using ll = long long;
// Đối số => tham số
void xinchao(int n, float b, char c){
    cout << n << " " << b << " " << c << endl;
}

int main(){
    xinchao(20, 2.5, '@');
}

// --- 3 ---
using ll = long long;
void displayNumber(ll a, ll b, ll c){
    cout << b << " " << a << " " << c << endl;
    cout << a+b+c << endl;
    cout << "KET THUC !" << endl;
}

int main(){
    displayNumber(100,200,300);
}

// --- 4 ---
using ll = long long;
int sum_digit(long long n){
    int tong = 0;
    while(n){
        tong += n%10;
        n/=10;
    }
    return tong;
}

int main(){
    int x; cin >> x;
    for(int i=1; i<=x;i++){
        ll n; cin >> n;
        cout << sum_digit(n) << " ";
    }
}

// --- 5 ---
bool check(long long n){
    int sum = 0;
    while(n){
        sum += n%10;
        n/=10;
        }
    return sum % 10 == 8;        
}

int main(){
    long long x;
    cin >> x;
    if(check(x) == true){
        cout << "28tech \n";
    }
    else{
        cout << "29tech \n";
    }
    return 0;
}

// --- 6 ---
long long giaiThua(int x){
    long long tich = 1;
    while(x > 0){
        tich *= x;
        x = x -1;
    }
    return tich;
}

int main(){
    int n;
    cout << " Nhap n: ";
    cin >> n;
    cout << giaiThua(n);
    return 0;
}
    
// --- 7 ---
void change(int n){
    n+=1000;
}
void change2(int &n){
    n+=1000;
}
int main(){
    int m = 20;
    change2(m);
    cout << m << endl;
}

// --- 8 ---
bool chua6(int n){
    while(n){
        if(n % 10 == 6){
            return true;
        }
        else{
            return false;
        }
    }
}

// --- 9 ---
bool tongchan(int n){
    int tong = 0;
    while(n){
        tong += n%10;
        n/=10;
    }
    return tong % 2 == 0;
}

// --- 10 ---
bool chanle(int n){
    int l = 0, c = 0;
    while(n){
        if(n%2==0)++c;
        else ++l;
        n/=10;
    }
    return l>c;
}
int main(){
    int a,b;
    cin >> a >> b;
    for(int i=a; i<=b; i++){
        if(chua6(i) && tongchan(i) && chanle(i)){
            cout << i << " ";
        }
    }
}

    
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        

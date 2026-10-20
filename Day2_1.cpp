// --- 20 Oct 2026 ---
// Array 1-d

# include <stdio.h>
# include <math.h>

// 1. Find min-max values
int main(){   
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n;i++){
        scanf("%d",&a[i]);
    }
    int min = a[0], max = a[0];
    for(int i=1;i<n;i++){
        if(a[i]< min){
            min = a[i];
        }
        if(a[i]>max){
            max=a[i];
        }
    }
    printf("%d %d", max,min);
}

// 2. Count even & odd numbers
int main(){
    int n;
    int even = 0;
    int odd = 0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            even++;
        }else odd++;           
    }
    printf("%d %d", odd, even);
}

// 3. List the prime numbers in an array
int primeNumbers(int n){
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0) return 0;
        }
        return n>1;
    }

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(primeNumbers(a[i]))
            printf("%d ",a[i]);
    }
}

// 4. Find idx min/max value
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int res = 1e9+1, idx;
    for(int i=0;i<n;i++){
        if(a[i]<res){
            res = a[i];
            idx=i;
        }
    }
    printf("%d ",idx);
}

// 5. Find max/2-max 
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int max1 = -1e9+1, max2 = -1e9+1;
    for(int i=0; i<n; i++){
        if(a[i]>max1){
            max1=a[i];
            max2=max1;
        }
        else if(a[i]>max2){
            max2=a[i]
        }
    }
    printf("%d %d",max1, max2);
}

// 6.
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int max1 = -1e9-1, max2 = -1e9-1;
    for(int i=0; i<n; i++){
        if(a[i]>max1){
            max2= max1;
            max1=a[i];
        }
        else if(a[i]>max2 && a[i]!=max1){
            max2=a[i];
        }
    }
    if(max2==-1e9-1) printf("%d %d",max1, -1);
    else 
        printf("%d %d",max1, max2);
}

// 7.
int checkEven(int n){
    while(n){
        int res = n%10;
        if(res%2==0) return 0;
        n/=10;
    }
    return 1;
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int count = 0;
    for(int i=0; i<n;i++){
        if(checkEven(a[i])) ++count;
    }
    printf("%d \n", count);
    for(int i=0;i<n;i++){
        if(checkEven(a[i])) printf("%d ", a[i]);
    }
}

// 8.
int check(int n){
    int c1 =0;
    int c9 =0;
    while(n){
        int r = n%10;
        if(r==1) ++c1;
        if(r==9) ++c9;
        n/=10;
    }
    return c1&&c9;
}

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }   
    int ok=0;
    for(int i=0;i<n;i++){
        if(check(a[i])){
            printf("%d",a[i]);
            ++ok;
        }
    }
    if(ok==0) printf("%d",-1);
}

// 9. 
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(i==0 && a[0]*a[1]<0) printf("%d ",a[0]);
        else if(i==n-1 && a[n-1]*a[n-2]<0) printf("%d ",a[n-1]);
        else if(a[i]*a[i-1] <0 || a[i]*a[i+1]<0){
            printf("%d ",a[i]);
        }
    }
}

// 10.
int dx(int a[], int n){
    int l = 0, r = n-1;
    while(l<r){
        if(a[l]!=a[r]) 
            return 0;
        ++l; --r;
    }
    return 1;
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    if(dx(a,n))
        printf("YES");
    else printf("NO");
}

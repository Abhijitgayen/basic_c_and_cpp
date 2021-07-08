  #include<bits/stdc++.h>
using namespace std;
int isprime(int n){
    if(n<2) return 0;
    int p = (n>10) ? (n/2) : n;
    for(int i=2;i<p;i++){
        if(n%i==0) return 0;
    }
    return 1;
}
vector<int> sumprime(int n){
    vector<int> v;
    
    if(n>=2 && n%2==0){
        for(int i=n-1;i>=2;i--){
            if(isprime(i) && isprime(n-i)){
                v.push_back(i);
                v.push_back(n-i);
    return v;
            }
        }
    }
    else{
        cout<<" this number is not even or not greater than 2";
    }
    return v;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    arr=sumprime(n);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
/*with out vector if you use this in the c programming */
/* #include<bits/stdc++.h>
using namespace std;
int isprime(int n){
    if(n<2)return 0;
    int p=(n>10) ? n/2 : n;
    for(int i=2;i<p;i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int * sumprime(int n ,int *list){
    int *arr=new int(2);
    *list=2;
    if(n>=2 && n%2==0){
        for(int i=n;i>=0;i--){
            if(isprime(i) && isprime(n-i)){
                arr[0]=i;
                arr[1]=(n-i);
    return arr;
            }
        }
    }
    return arr;
}

int main(){
    int n;
    cin>>n;
    int li;
    int * arr ;
    arr=sumprime(n,&li);
    for(int i=0;i<li;i++){
        cout<<arr[i]<<" ";
    }
}*/
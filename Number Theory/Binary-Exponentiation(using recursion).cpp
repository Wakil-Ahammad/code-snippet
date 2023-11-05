
const int M = 1e9+7;
int BinExp(int a,int b){
    if(b==0)return 1;
    long long r = BinExp(a,b/2);
    if(b%2)return (a*((r*r)%M))%M;
    else return (r*r)%M;
    return r;
}

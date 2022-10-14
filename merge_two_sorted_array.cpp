void Solution::merge(vector<int> &A, vector<int> &B) {
    int a=0,b=0;
    int k=0;
    int m=A.size(), n=B.size();
    int ans[n+m];
    while(a<m && b<n){
        if (A[a]<=B[b]){
            ans[k]=A[a];
            a++;
            k++;
        }
        else{
            ans[k]=B[b];
            b++;
            k++;
        }
    }
    while (a<m){
        ans[k]=A[a];
        a++;
        k++;
    }
    while (b<n){
        ans[k]=B[b];
        b++;
        k++;
    }
    A.clear();
    for (int i=0;i<n+m;i++){
        A.push_back(ans[i]);
    }
}

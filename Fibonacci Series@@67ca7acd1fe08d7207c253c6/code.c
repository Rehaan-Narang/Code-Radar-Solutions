void fibonacciSeries(int n){
    int a,b,c;
    a=0;
    b=1;
    for(int i=0;i<n;i++){
    c=a+b;
    a=b;
    b=c;
    printf("%d", c);
    }

}
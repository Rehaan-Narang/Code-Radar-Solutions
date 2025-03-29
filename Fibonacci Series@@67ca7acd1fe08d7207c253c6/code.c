int fibonacciSeries(int n){
    int a,b,c;
    a=0;
    b=1;
    for(int i=1;i<=n;i+2){
    c=a+b;
    a=b;
    b=c;
    printf("%d",c);
    }

}
    printf("%d",c);
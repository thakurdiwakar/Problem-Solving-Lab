a=int(input("Enter a: "));
b=int(input("Enter b: "));
c=int(input("Enter c: "));

if (a>=b)and(a>=c):
    print(a ,"is greatest")
elif(b>=c)and(b>=a):
    print(b ,"is greatest")

else:
    print(c ,"is greatest")
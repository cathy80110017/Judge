while True:
    try:i=input()
    except:break
    num1, a, num2 = i.split()
    num1=int(num1)
    num2=int(num2)
    if a=='+':
        ans = num1+num2
    elif a=='-':
        ans = num1-num2
    elif a=='*':
        ans = num1*num2
    else:
        ans = num1//num2
    print(int(ans))
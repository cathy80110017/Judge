r  = float(input())
time = int(input())
c  = int(input())
num = 0
for i in range(time) :
    num = c + num
    num = num*(1 + r)
print(int(num))
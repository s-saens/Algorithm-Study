import time

N = int(input())
start = time.time()
cnt = 0
for i in range(1,N+1) :
    k = str(i)
    cnt += k.count('3') + k.count('6') + k.count('9')

print(cnt)

print("time :", time.time() - start)

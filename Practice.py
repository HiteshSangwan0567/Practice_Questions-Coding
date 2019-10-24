N = int(input())
A = list(map(int, input().split()))

#print(A)

A_init,A_last,A_complete = [],[],[]
y = 0

for i in range(0,len(A)//2):
  if(A[i]//10>0):
    for _ in range(len(str(A[i]))-1):
      A[i]//=10
      A_init.append(A[i])
  else:
      A_init.append(A[i])

for i in range(len(A)//2,len(A)):
      A_last.append((A[i])%10)

#print(A_init,A_last)

      A_complete = A_init + A_last

for x in A_complete:
      y = y*10 + x

print("OUI" if y%11==0 else "NON")

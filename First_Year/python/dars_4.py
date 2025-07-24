"""a = input("parolni kiriting >>> ")
v =0
d = 0
c = 0
for i in range(len(a)):
    b = ord(a[i])
    if 48<=b<=57:
        v+=1
    elif 65<=b<=90 or 97<=b<=122:
        d+=1
    else:
        c+=1
if v>0 and d>0 and c>0:
    print("kuchli parol")
elif (v>0 and c>0) or (d>0 and c>0) or (d>0 and v>0):
    print("ortacha parol")
else:
    print("kuchsiz parol")
"""
"""a = int(input("sonni kiriting >>> "))
v=0
c = bool()
if a%100>a//10%10 and a%10>a//10%10:
    c= True
else:
    c = False
while a!=0:
    v += a%10
    a = a//10
if v%2==0:
    print("yrgindisi juft " ,end=" ")
else:
    print("yegindisi toq ",end=" ")
if c:
    print("tartiblangan")
else:
    print("tartiblanmagan")
"""
"""a = str(input("1 >>>> "))
b = str(input("2 >>>> "))
print(len(a)+len(b))
"""
"""a = int(input("raqamni kiriting>>> "))
print(float(a))
print(str(a))
print(a)
print(bool(a))
"""
"""a = int(input("son kiriting>>> "))
if 80<=a<=100:
    print("bohoyingiz alo!")
elif 60<=a<80:
    print("bohoyingiz yaxshi")
elif 40<=a<=60:
    print("bahoyingiz qoniqarli")
elif 0<=a<40:
    print('baxoyingiz qoniqarsiz')
else:
    print("bunday baxo yoq")"""
"""a = str(input("matn kiriting>>> "))
if len(a)==4:
    print("dang")
else:
    print("shoot")
"""
"""a = int(input("ikki xonali son kiriting>> "))
a = a%10*10+a//10
print(a)"""
"""a = int(input("yoshingizni kiriting>> "))
b = str(input("ismingiz >>>> "))
print(f"mening ismim {b} , yoshim {a} da")
"""
"""a = int(input("sekundlarni kiriting >>> "))
a1 = a//3600
b = a%3600
a2 = b//60
a3 = b%60
print(f"{a1} soat {a2} minut {a3} sekund")"""
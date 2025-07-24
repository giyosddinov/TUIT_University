"""def hisolba(arr):
    for i in range(len(arr)):
        c=0
        print("raqamlar ",end="")
        while arr[i]!=0:
            c+=arr[i]%10
            print(f"{arr[i]%10}",end="+")
            arr[i]=arr[i]//10
        print(f" = {c}\nraqamlar_soni = {len(str(arr[i]))}",end="->")
        print(f"{c}%{len(str(arr[i]))} == ",end="")
        if c%len(str(arr[i]))==0:
            print("0 , tog'ri")
        else:
            print("1 , notog'ri")
arr = [132,222,1234,111,567,753]
hisolba(arr)
"""

a = int(input("Masukkan Bilangan ="))
if a ==0:
    print("Nol")
elif a == 10 or a>= 20 and a <= 99:
    print("puluhan")
elif a>=11 and a<=19:
    print("Belasan")
elif a >= 1 and a <=9:
    print("Satuan")
else :
    print("Anda menginput melebihi limit bilangan")
nilai = int (input("Masukkan Nilai: "))

if nilai >= 80:
    Huruf = 'A'
elif nilai >= 70:
    Huruf = 'B'
elif nilai >= 60:
    Huruf = 'C'
elif nilai >= 50:
    Huruf = 'D'
else:
    Huruf = 'E'
print(f"{nilai} : {Huruf}")
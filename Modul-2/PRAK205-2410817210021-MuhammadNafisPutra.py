import math
#case ke 1
A, B = map(float, input("A dan B :\n").split())

tinggi = A
sisi_miring = B
alas = math.sqrt(B**2 - A**2)
keliling = alas + tinggi + sisi_miring
luas = 0.5 * alas * tinggi

print(f"Alas = {alas:.0f} cm")
print(f"Tinggi = {tinggi:.0f} cm")
print(f"Keliling = {keliling:.0f} cm")
print(f"Luas = {luas:.0f} cm^2 \n")

#case ke 2
A = float(input("A dan B : \n"))
B = float(input(""))

tinggi = A
sisi_miring = B
alas = math.sqrt(B**2 - A**2)
keliling = alas + tinggi + sisi_miring
luas = 0.5 * alas * tinggi

print(f"Alas = {alas:.0f} cm")
print(f"Tinggi = {tinggi:.0f} cm")
print(f"Keliling = {keliling:.0f} cm")
print(f"Luas = {luas:.0f} cm^2")

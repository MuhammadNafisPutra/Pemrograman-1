#test case ke 1
jari_jari1 = float(input("Masukkan jari-jari dan tinggi: \n"))
tinggi1 = float(input(""))

luas1 = 2 * 22.0/7.0 * jari_jari1 * (jari_jari1 + tinggi1)
volume1 = 22.0/7.0 * (jari_jari1 ** 2) * tinggi1
keliling1 = 2 * 22.0/7.0 * jari_jari1

print(f"Volume = {volume1:.2f}")
print(f"Luas permukaan  = {luas1:.2f}")
print(f"Keliling = {keliling1:.2f}\n")

#test case ke 2
jari_jari2, tinggi2 = map(float, input("Jari-jari dan tinggi:\n").split())

luas2 = 2 * 22.0/7.0 * jari_jari2 * (jari_jari2 + tinggi2)
volume2 = 22.0/7.0 * (jari_jari2 ** 2) * tinggi2
keliling2 = 2 * 22.0/7.0 * jari_jari2

print(f"Volume = {volume2:.2f}")
print(f"Luas permukaan = {luas2:.2f}")
print(f"Keliling = {keliling2:.2f}")

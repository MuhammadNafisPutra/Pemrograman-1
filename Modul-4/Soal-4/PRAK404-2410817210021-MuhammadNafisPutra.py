while (True) :
     print ("1. penjumlahan")
     print("2. Pengurangan")
     print("3. Perkalian")
     print("4. Pembagian")
     print("5. Exit")
     pilihan = int(input("Masukkan Pilihan :"))

     if (pilihan == 5):
        print("Terimakasih, telah menggunakan kalkulator Muhammad Nafis Putra")
        break
     if (pilihan > 5 or pilihan < 1):
        print("Input anda salah, silahkan coba lagi")
        continue

     a = float (input("Masukkan Nilai Pertama :"))
     b = float (input("Masukkan Nilai Kedua :"))

     if pilihan == 1 :
        print(f"Hasil Penjumlahan antara {a : .2f} dengan {b : .2f} adalah {a + b : .2f}")
     if pilihan == 2:
        print(f"Hasil Pengurangan antara {a : .2f} dengan {b : .2f} adalah {a - b : .2f}")
     if pilihan == 3:
        print(f"Hasil Perkalian antara {a : .2f} dengan {b : .2f} adalah {a * b : .2f}")
     if pilihan == 4:
        print(f"Hasil Pembagian antara {a : .2f} dengan {b : .2f} adalah {a / b : .2f}")


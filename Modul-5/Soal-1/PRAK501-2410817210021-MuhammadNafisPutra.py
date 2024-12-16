def maxbilangan (a, b, c, d):
    max = a 
    if b > max: max = b
    if c > max: max = c
    if d > max: max = d
    return max
def main():
    a, b, c, d = map(int, input("").split())
    hasil = maxbilangan(a, b, c, d)
    print(hasil)
main()
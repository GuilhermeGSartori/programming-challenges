risada = input()
vogais = ""
for letter in risada:
    if letter == 'a' or letter == 'e' or letter == 'i' or letter == 'o' or letter == 'u':
        vogais += letter
        vogal = True

if vogais == vogais[::-1] and vogal == True:
    print("S")
else:
    print("N")

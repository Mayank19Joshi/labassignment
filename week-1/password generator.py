import random

lower = "abcdefghijklmnopqrstuvwxyz"
upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
digits = "0123456789"
symbols = "#{}[]()*-,;:?/"
total = lower + upper + digits + symbols
length = 12
password = "".join(random.sample(total, length))
print(password)

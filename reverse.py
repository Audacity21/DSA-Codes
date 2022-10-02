string = "geeks quiz practice code"
s = string.split()[::-1]
l = []
for i in s:
    # apending reversed words to l
    l.append(i)
print(" ".join(l))

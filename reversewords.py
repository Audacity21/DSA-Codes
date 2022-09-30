n=input("Enter a String:")

def reversewords(n):
    print(" ".join(n.split()[::-1]))

reversewords(n) #to print the words in reverse order
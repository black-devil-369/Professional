class Pattern:
    def pattern():
        a = int(input("Enter your number please for pattern printing"))
        for i in range(1,a):
            for j in range(1,i):
                print(" * ",end="")
            print(" ")
a = Pattern()
a.pattern
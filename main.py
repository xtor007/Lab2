list =input('enter coordinates').split()
x, y = [int(i) for i in list]
if y>=0:
    if x>=0:
        Res=1
    else:
        Res=2
elif x>=0:
    Res=4
else:
    Res=3
print ("The point lies in", Res, "quadrant")
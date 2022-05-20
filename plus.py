l = [i for i in range(100)]

def remove(l,n):
    for i in range(0,len(l),n):
        l.remove(l[i])
    return l

print(remove(l,2))



# PS - Project > DSA > CP 
# SS - DSA > Project > CP
# AR - CP > DSA > Project
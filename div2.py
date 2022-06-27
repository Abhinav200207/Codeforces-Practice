# Python3 program to find difference
# of two large numbers.

# Returns true if str1 is smaller than
# str2, else false.
def isSmaller(str1, str2):

    # Calculate lengths of both string
    n1 = len(str1)
    n2 = len(str2)

    if (n1 < n2):
        return True
    if (n2 < n1):
        return False

    for i in range(n1):
        if (str1[i] < str2[i]):
            return True
        elif (str1[i] > str2[i]):
            return False

    return False

def findDiff(str1, str2):
    Str = ""

    # Calculate lengths of both string
    n1 = len(str1)
    n2 = len(str2)
    diff = n1 - n2

    # Initially take carry zero
    carry = 0

    # Traverse from end of both strings
    for i in range(n2 - 1, -1, -1):

        # Do school mathematics, compute
        # difference of current digits
        # and carry
        sub = ((ord(str1[i + diff]) - ord('0')) -
               (ord(str2[i]) - ord('0')) - carry)

        if (sub < 0):
            sub += 10
            carry = 1
        else:
            carry = 0

        Str += chr(sub + ord('0'))

    # Subtract remaining digits of str1[]
    for i in range(n1 - n2 - 1, -1, -1):
        if (str1[i] == '0' and carry):
            Str += '9'
            continue

        sub = (ord(str1[i]) - ord('0')) - carry

        # Remove preceding 0's
        if (i > 0 or sub > 0):
            Str += chr(sub + ord('0'))

        carry = 0

    # Reverse resultant string
    Str = Str[::-1]

    return Str


for _ in range(int(input())):
    n = int(input())
    s = input()
    ov = []
    for i in range(1,10):
        x = ""
        for j in n:
            
    ov = ["1"*(n), "1"*(n+1), "2"*(n), "2"*(n+1), "3"*(n), "3"*(n+1), "4"*(n), "4"*(n+1), "5"*(n),
          "5"*(n+1), "6"*(n), "6"*(n+1), "7"*(n), "7"*(n+1), "8"*(n), "8"*(n+1), "9"*(n), "9"*(n+1)]
    # 20 * n
    ans = ""
    for j in ov:
            if isSmaller(s, j):
                x = findDiff(j, s)
                if len(x) == len(s):
                    ans = x
    print(ans)

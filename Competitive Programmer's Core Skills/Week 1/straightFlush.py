# python3
def checkSuit(entry):
    suit = None
    for i in range(len(entry)):
        if suit is None:
            suit = entry[i][1]
            continue
        if entry[i][1] != suit:
            return False
    return True


def convertChar(char):
    convs = {"T": 10, "J": 11, "Q": 12, "K": 13, "A": 14}
    if char in convs.keys():
        return convs[char]
    return (ord(char) - 48)


def makeList(entry, marker):
    for i in range(len(entry)):
        char = entry[i][0]
        marker.append(convertChar(char))


def solve():
    entry = input().split()
    marker = list()

    ans = True
    if checkSuit(entry) == False:
        ans = False

    if ans is False:
        print("NO")
        return

    makeList(entry, marker)
    marker = sorted(marker)
    # print(marker)

    # check if it contains ACE
    contains = False
    for i in range(len(marker)):
        if marker[i] == 14:
            contains = True
            break

    if contains is False:
        for i in range(len(marker) - 1):
            if (marker[i+1] - marker[i]) != 1:
                ans = False
    else:
        secondary_ans = True
        for i in range(len(marker) - 1):
            if (marker[i+1] - marker[i]) != 1:
                secondary_ans = False
        for i in range(len(marker)):
            if marker[i] == 14:
                marker[i] = 1
        # print(marker)
        marker = sorted(marker)
        # print(marker)
        tertiary_ans = True
        for i in range(len(marker) - 1):
            if (marker[i+1] - marker[i]) != 1:
                tertiary_ans = False

        ans = secondary_ans or tertiary_ans

    if ans:
        print("YES")
    else:
        print("NO")


solve()

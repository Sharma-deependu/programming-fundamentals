# right angle triangle
n = 5  # Number of rows

for i in range(1, n + 1):
    print('*' * i)
# using while
n = 5  # Number of rows
i = 1

while i <= n:
    print('*' * i)
    i += 1
    

# reverse
n = 5  # Number of rows

for i in range(n, 0, -1):
    print('*' * i)

# using while
n = 5  # Number of rows
i = n

while i >= 1:
    print('*' * i)
    i -= 1



# pyramid
n = 5  # Number of rows

for i in range(1, n + 1):
    spaces = ' ' * (n - i)
    stars = '*' * (2 * i - 1)
    print(spaces + stars)

# using while
n = 5  # Number of rows
i = 1

while i <= n:
    spaces = ' ' * (n - i)
    stars = '*' * (2 * i - 1)
    print(spaces + stars)
    i += 1

# reverse
n = 5  # Number of rows

for i in range(n, 0, -1):
    spaces = ' ' * (n - i)
    stars = '*' * (2 * i - 1)
    print(spaces + stars)

# using while
n = 5  # Number of rows
i = n

while i >= 1:
    spaces = ' ' * (n - i)
    stars = '*' * (2 * i - 1)
    print(spaces + stars)
    i -= 1

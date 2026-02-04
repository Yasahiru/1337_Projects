def ft_count_harvest_iterative():
    days = int(input("Days until harvest: "))
    i = 1
    while (days > 0):
        print(f"Day {i}")
        i += 1
        days -= 1
    print("Harvest time!")

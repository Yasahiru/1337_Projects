def days_untill_harvest(days: int, past: int):
    print(f"Day {past}")
    if (past < days):
        past += 1
        days_untill_harvest(days, past)


def ft_count_harvest_recursive():
    days = int(input("Days until harvest: "))
    past = 1
    days_untill_harvest(days, past)
    print("Harvest time!")

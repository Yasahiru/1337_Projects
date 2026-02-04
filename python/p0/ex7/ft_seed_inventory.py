def ft_seed_inventory(plant: str, quantity: int, unity: str):
    if (unity == "packets"):
        print(f"{plant.capitalize()} seeds: {quantity} {unity} available")
    elif (unity == "grams"):
        print(f"{plant.capitalize()} seeds: {quantity} {unity} total")
    elif (unity == "area"):
        print(f"{plant.capitalize()} seeds: covers {quantity} square meters")
    else:
        print("Unknown unit type")

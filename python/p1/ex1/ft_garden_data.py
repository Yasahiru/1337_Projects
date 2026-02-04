class Plant:
    def __init__(self, name, height, age):
        self.name = name
        self.height = height
        self.age = age


def main():
    p1 = Plant("Rose", 25, 30)
    p2 = Plant("Sunflower", 80, 45)
    p3 = Plant("Cactus", 15, 120)
    plants = [p1, p2, p3]
    for i in range(3):
        plant = plants[i]
        print(f"{plant.name}: {plant.height}, {plant.age} days old")


if __name__ == "__main__":
    main()

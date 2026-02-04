class Plant:
    def __init__(self, name, height, age):
        self.name = name
        self.height = height
        self.age = age

    def grow(self, cm):
        self.height += cm

    def agee(self, days):
        self.age += days

    def get_info(self):
        print(f"{self.name}: {self.height}, {self.age} days old")


def ft_plant_growth():
    p1 = Plant("Rose", 25, 30)
    p2 = Plant("Oak", 200, 365)
    p3 = Plant("Sunflower", 80, 45)

    plants = [p1, p2, p3]
    for i in range(3):
        plant = plants[i]
        old_height = plant.height
        print("=== Day 1 ===")
        plant.get_info()
        plant.grow(7)
        plant.agee(7)
        print("=== Day 7 ===")
        plant.get_info()
        print(f"Growth this week: +{plant.height - old_height}cm\n")


if __name__ == "__main__":
    ft_plant_growth()

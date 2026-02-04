class Plant:
    number = 0

    def __init__(self, name, height, age):
        self.name = name
        self.height = height
        self.age = age
        Plant.number += 1

    def get_info(self):
        print(f"Created: {self.name} ({self.height}cm, {self.age} days)")


def ft_plant_growth():
    p1 = Plant("Rose", 25, 30)
    p2 = Plant("Oak", 200, 365)
    p3 = Plant("Cactus", 5, 90)
    p4 = Plant("Sunflower", 80, 45)
    p5 = Plant("Fern", 15, 120)

    plants = [p1, p2, p3, p4, p5]
    print("=== Plant Factory Output ===")
    for i in range(5):
        plant = plants[i]
        plant.get_info()
    print(f"\nTotal plants created: {p5.number}")


if __name__ == "__main__":
    ft_plant_growth()

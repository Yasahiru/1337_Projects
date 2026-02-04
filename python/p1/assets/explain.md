# 🌱 CodeCultivation — Object-Oriented Garden Systems  
## Full Subject Explanation (No Code)

This document explains **every exercise** in the subject by clarifying:
- What the exercise is about  
- What is really being tested  
- How things work *under the hood*  

All **theory concepts are isolated at the end** for focused revision.

---

## 🌱 Exercise 0 — Planting Your First Seed

### What this exercise is about
This exercise introduces how a **Python program starts and executes**.  
You create a simple script that stores plant information in variables and displays it, but most importantly, it only runs when executed directly.

### What they really want to test
- Understanding Python execution flow  
- Knowing the role of `__name__`  
- Distinguishing between running a script and importing a module  

This is the foundation for all future exercises.

### Under the hood
When Python runs a file, it executes code from top to bottom and assigns a value to the special variable `__name__`.

- If the file is executed directly → `__name__ == "__main__"`  
- If the file is imported → `__name__ == "filename"`  

This mechanism allows developers to control when certain code runs.

---

## 🌿 Exercise 1 — Garden Data Organizer

### What this exercise is about
Managing data for multiple plants efficiently using a **Plant class** instead of handling each plant individually.

Each plant has:
- A name  
- A height  
- An age  

### What they really want to test
- Understanding Object-Oriented Programming  
- Using classes as blueprints  
- Creating multiple objects from a single class  
- Avoiding duplicated logic  

### Under the hood
A class defines **structure**, while objects store **actual data**.  
Each object has its own memory but follows the same structure defined by the class.

This allows scalable and organized data management.

---

## 🌱 Exercise 2 — Plant Growth Simulator

### What this exercise is about
Plants are no longer static. They can:
- Grow  
- Age  
- Change state over time  

Each plant must manage its own behavior.

### What they really want to test
- Understanding that behavior belongs to objects  
- Combining data and logic  
- Reducing external control and repetition  

### Under the hood
Objects modify their own internal state using methods.  
This encapsulation improves maintainability and mirrors real-world modeling.

---

## 🌳 Exercise 3 — Plant Factory

### What this exercise is about
Efficiently creating many plants with different starting values and ensuring they are usable immediately.

### What they really want to test
- Object initialization  
- Understanding constructors  
- Ensuring valid object states  

### Under the hood
When an object is created:
1. Memory is allocated  
2. Attributes are initialized  
3. The object becomes ready to use  

Proper initialization prevents invalid or incomplete objects.

---

## 🔐 Exercise 4 — Garden Security System

### What this exercise is about
Protecting plant data from invalid values such as negative height or age.

### What they really want to test
- Encapsulation  
- Data validation  
- Controlled access to internal state  

### Under the hood
Instead of allowing free modification of attributes:
- Data changes are validated  
- Invalid operations are rejected  
- Objects maintain consistent and valid state  

This ensures data integrity and robustness.

---

## 🌺 Exercise 5 — Specialized Plant Types

### What this exercise is about
Handling different plant types:
- Flowers  
- Trees  
- Vegetables  

All share common features but have unique characteristics.

### What they really want to test
- Inheritance  
- Code reuse  
- Avoiding duplication  

### Under the hood
Inheritance creates a hierarchy where:
- A parent class contains shared behavior  
- Child classes extend or specialize it  

Using `super()` ensures proper initialization across the hierarchy.

---

## 🌐 Exercise 6 — Garden Analytics Platform

### What this exercise is about
Building a complete system with:
- Managers  
- Helpers  
- Inheritance chains  
- Analytics  
- Multiple method types  

### What they really want to test
- Architectural thinking  
- Logical organization of systems  
- Understanding method scope  

### Under the hood
This exercise combines:
- Composition (objects containing other objects)  
- Inheritance  
- Instance methods  
- Class methods  
- Static methods  

Choosing the correct method type leads to clean, scalable architecture.

---

# 📚 THEORY SECTION — FINAL REVISION CHECKLIST

## Core Python
- Program execution flow  
- `__name__ == "__main__"`  
- Script vs module behavior  
- Variables and memory  

## Object-Oriented Programming
- Class vs Object  
- Attributes vs Methods  
- Object lifecycle  
- Encapsulation  
- Data validation  
- Data integrity  

## Design Principles
- Reusability  
- Single responsibility  
- Avoiding duplication  
- Clean initialization  
- Controlled access  

## Inheritance
- Parent / Child relationships  
- `super()`  
- Specialization  
- Code reuse  

## Advanced OOP
- Instance methods  
- Class methods  
- Static methods  
- Composition vs inheritance  
- System architecture  

---

🌱 This file explains the **entire subject conceptually**.  
Understanding these ideas is the real goal of the project.

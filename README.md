# "The Catch Up" Using Cpp/Blueprints
__
## About game
### The Catch Up is a third-person game, where the red ball is controlled by the user and yellow and green are controllored by AI. The user must paint all the balls in the color of his character(in red).
### Game have 2 levels (main menu and main level).

## Characters
### Base Sphere(red ball):
![image](https://github.com/RomanChmykh/TheCatchUp--UE5-Cpp/assets/127239018/703d37fd-8959-42b5-8fa3-025a63089c73)
### Victim Sphere(yellow ball):
![image](https://github.com/RomanChmykh/TheCatchUp--UE5-Cpp/assets/127239018/f06755ad-65cf-44c3-a8c0-05d11fad0325)
### Cleaner Sphere(green ball):
![image](https://github.com/RomanChmykh/TheCatchUp--UE5-Cpp/assets/127239018/f156d7b7-1f3b-4d2b-8ac5-dc4ee8de9b98)

## Rules
### Main rules:
#### - base sphere can paint all spheres in red
#### - if victim sphere is colored red, it can back to yellow after collision with cleaner sphere
#### - when cleaner sphere collision all red balls(except base sphere) it returns them to native color
#### - as all balls on the map are red, the user has won

## User interface
### Main menu 
#### Main menu is widget in a separate level. The game starts from this level 
![image](https://github.com/RomanChmykh/TheCatchUp--UE5-Cpp/assets/127239018/14b9146b-c62f-4c9b-a466-a5c90905eb65)
### Menu pause 
![image](https://github.com/RomanChmykh/TheCatchUp--UE5-Cpp/assets/127239018/082b4201-ce0f-4e42-a89f-a822fe08ed7e)
### A counter to show the number of red balls in a level
![image](https://github.com/RomanChmykh/TheCatchUp--UE5-Cpp/assets/127239018/1d051bd9-057d-4b3f-89fd-9255de2d13f6)

## Gameplay

https://github.com/RomanChmykh/TheCatchUp--UE5-Cpp/assets/127239018/062d0367-060e-4185-ba38-ba7d82f3cee7

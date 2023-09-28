# The Catch Up Using Cpp/Blueprints
__
## About game
### The Catch Up is a third-person game, where the red ball is controlled by the user and yellow and green are controllored by AI. The user must paint all the balls in the color of his character(in red).
### Game have 2 levels (main menu and main level).

## Characters
### Base Sphere(red ball):
![image](https://github.com/RomanChmykh/TheCatchUp--Only-UE5-Cpp/assets/127239018/2a44a7a7-edf0-4f2b-adb8-f5f10d161d35)
### Victim Sphere(yellow ball):
![image](https://github.com/RomanChmykh/TheCatchUp--Only-UE5-Cpp/assets/127239018/51e7a48b-4aed-40c3-a080-4a2a1b6977c7)
### Cleaner Sphere(green ball):
![image](https://github.com/RomanChmykh/TheCatchUp--Only-UE5-Cpp/assets/127239018/ae54a79b-c0bd-4ccb-8d1a-4b31eaaeeaa5)

## Rules
### Main rules:
#### - base sphere can paint all spheres in red
#### - if victim sphere is colored red, it can back to yellow after collision with cleaner sphere
#### - when cleaner sphere collision all red balls(except base sphere) it returns them to native color
#### - as all balls on the map are red, the user has won

## User interface
### Main menu 
#### Main menu is widget in a separate level. The game starts from this level 
![image](https://github.com/RomanChmykh/TheCatchUp--Only-UE5-Cpp/assets/127239018/ce2f4298-eba1-4f87-b25f-ffb964b9c392)
### Menu pause 
![image](https://github.com/RomanChmykh/TheCatchUp--Only-UE5-Cpp/assets/127239018/14f9c678-e7ab-47e7-af2e-0063c9371c1e)
### A counter to show the number of red balls in a level
![image](https://github.com/RomanChmykh/TheCatchUp--Only-UE5-Cpp/assets/127239018/d11629f6-14ec-4192-b657-19fc4c34c162)






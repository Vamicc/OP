print("Enter the x coordinate: ")
x = int(input())
print("Enter the y coordinate: ")
y = int(input()) # просимо ввести координати точки

if x > 0 and y > 0:
   result = "The point belongs to the first quadrant."
elif x > 0 and y < 0:
   result = "The point belongs to the forth quadrant."
elif x < 0 and y > 0:
   result = "The point belongs to the second quadrant."
elif x < 0 and y < 0:
   result = "The point belongs to the third quadrant." # перевірка до якого з квадрантів належить точка
else:
   result = "The point is either at the origin or on one of the axes.)" # інакше точка лежить на початку координат або на одній з її осей.

print(result)

food=["pizza","hamburger","hotdog","spaghetti"]
#food[0]="sushi"
#print(food[0])

food.append("ice cream")
food.remove("spaghetti")
food.pop()
food.insert(0,"cake")
food.sort()
food.clear()


for x in food:
    print(x)
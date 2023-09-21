'''
Distributes food cost between n people according to who ordered what

'''

class Order:
    def __init__(self, name, order, discounted_order):
        self.name = name
        self.order = order
        self.discounted_order = discounted_order

num_people = int(input("How many people ordered food?\n"))
original_total = float(input("Original order total? (SUBTOTAL, the total without tax)\n"))
discounted_total = float(input("How much was the discounted total? (TOTAL payment)\n"))
tax = float(input("Tax?\n"))

order_list = []

for person in range(num_people):
    newOrder = Order('', 0, 0)
    newOrder.name = input("What is person " +  str(person + 1) + "'s name?\n")
    newOrder.order = float(input("How much was " + newOrder.name + "'s order?\n"))
    newOrder.discounted_order = (newOrder.order / original_total * discounted_total) + (tax / num_people)
    order_list.append(newOrder)

print("|_____________________________|\n")
print("|___________RECIEPT___________|\n")
print("|_____________________________|\n")
for order in order_list:
    print(order.name + ":", order.discounted_order)
    print("|-----------------------------|\n")
print("|__________END_RECIEPT________|\n")
print("|_____________________________|\n")

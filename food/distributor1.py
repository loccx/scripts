'''
Each person pays 110% of their discounted order; each 10% someone pays is chunked out of my order total. My order is not displayed in the receipt (it will be suspiciously low)
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

subsidy = 0
for order in order_list:
    if order.name != 'key':
        subsidy += (0.1 * order.discounted_order)
        order.discounted_order *= 1.1


for order in order_list:
    if order.name == 'key':
        order.discounted_order -= subsidy

print("|_____________________________|\n")
print("|___________RECEIPT___________|\n")
print("|_____________________________|\n")
for order in order_list:
    if order.name != 'key':
        print(order.name + ":", order.discounted_order)
        print("|-----------------------------|\n")
print("|__________END_RECEIPT________|\n")
print("|_____________________________|\n")
print("Venmo: locc_xu")

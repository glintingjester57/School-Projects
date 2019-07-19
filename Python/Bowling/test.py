data_list = [200, 300, 100]
new_list = []

while data_list:
    minimum = data_list[0]  # arbitrary number in list
    print(minimum)
    for x in data_list:
        if x > minimum:
            minimum = x
    new_list.append(minimum)
    data_list.remove(minimum)
    print(data_list)

print (new_list)
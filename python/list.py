#!/usr/bin/python

shop_list=['macbook pro', 'car', 'baby gear', 'apartment', 'knowledge']

size = len(shop_list)
print 'Here`s my shop list (', size,')'

index = 1
for item in shop_list:
    print '%d. itea' % index
    index = index + 1

new_item = 'free'
print '\nI alos want to get:', new_item

shop_list.append(new_item)
print 'Here`s my new list:', shop_list
#index = 1
#for item in shop_list:
#    print index, item
#    index = index + 1

old_item = shop_list[0]
print '\nI don`t need this:', old_item

del shop_list[0]

print 'Now, my list is:', shop_list
#index = 1
#for item in shop_list:
#    print index, item
#    index = index + 1


shop_list.sort()
print '\nSorted as:', shop_list
#index = 1
#for item in shop_list:
#    print index, item
#    index = index + 1


x = 1
y = 2
int_list = [x,y]
print 'int_list:', int_list
x = 3
y = 4
print 'int_list:', int_list

# slice
print shop_list[0:]
print 'last item is', shop_list[-1]
print shop_list[1:-1]
print shop_list[:-1]
print shop_list[-2:-1]

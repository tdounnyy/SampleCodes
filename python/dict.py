#!/usr/bin/python
# learn how to use Python dict

vcard = {   'halaop'    :   1327,
            'mama'      :   23425,
            'papa'      :   2342,
            'me'        :   24256677}

print 'Home contacts:', vcard

print 'in more readable way...'

for name, mobile in vcard.items():
    print '%s`s mobile phone is %d' %(name, mobile)

print '\n'
person = 'papa'
print 'Mobile phone of', person, 'is', vcard[person]

#!/usr/bin/python
print 'hello python'
print ''
print '#\/*\'?:"'  # fuck the golden lian
print "what do you mean?"
print '''hey, son. what`s your name?
do \
    i\ 
    know # Hail the winterfell
    you?
    '''

i = 5
print i
print i+1
i=i+1
print i

string= '''Which family do you serve?
Long live the king!'''
print string


if True :    print 'hello'

complain = False;
#complain = True;

while complain :
    answer = raw_input('say you love me\n')
    if 'i love you' == answer:
        complain = False;
        print 'i know'
else :
    print 'cross my heart'

def functiona():
    print 'i`m functiona'

functiona()

def autoCounter(msg = '123', times = 1):
    print msg * times

autoCounter()
autoCounter('hallo')
autoCounter('hello',4)

def assignParam(x):
    '''This is ___doc___ fo assignParam.

    Which is a Python way to self-explain'''
    x = 5
    print x
    return x

y = 6
print y
y = assignParam(y)
print y
print assignParam.__doc__

#!/usr/bin/python
import sys, urllib, time
#url='http://www.baidu.com'
url='http://www.androidpolice.com'
wp=urllib.urlopen(url)
content=wp.read()
print content

timestamp=time.strftime('%Y-%m-%d-%H-%M-%S')    
fp=open('web_'+timestamp+'.html','w+')
fp.write(content)
fp.close()

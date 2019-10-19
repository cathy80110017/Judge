# -*- coding: utf-8 -*

import requests
from bs4 import BeautifulSoup

url = "https://forum.gamer.com.tw/B.php?bsn=60076"
r = requests.get(url)

# print(r)

# print(r.text)


my_html = BeautifulSoup(r.text, "html.parser")
'''
print(my_html.prettify())
'''

info = my_html.find("div", class_ = "蘿莉").text

'''
info = my_html.find("td", class_="name").text
'''

print(info)
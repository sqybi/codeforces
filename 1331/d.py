# import requests

# s = input()

# r = str(requests.get('http://oeis.org/{}'.format(s)).content)
# pos = r.find('<tt>') + 4
# r = r[pos:]
# pos = r.find(',')
# r = r[:pos]
# print(r)

s = input()[1:]

print(int(s) % 2)

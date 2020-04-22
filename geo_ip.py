import socket
import pygeoip
myGeoIP = pygeoip.GeoIP('GeoLite2-City-Blocks-IPv4.csv')

addr = socket.gethostbyname("www.google.com")

print("IP Address is: ", addr)

print(myGeoIP.country_name_by_addr(addr))

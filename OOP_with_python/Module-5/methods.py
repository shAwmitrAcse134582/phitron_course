class phone:
    name='Smart phone'
    brand='xiomi'
    price=23500
    color='blue'
    features=['camera','speaker','display']

    def call(self):
        print('calling someone!')

    def send_sms(self,nmbr,msg):
        text=f'sending sms to: {nmbr} and wish him: {msg}'
        return text

my_phone=phone()
# print(my_phone.features)
my_phone.call()
msg=my_phone.send_sms(93249374,'Good Morning')
print(msg)

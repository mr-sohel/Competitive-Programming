n = int(input())

if(n >= -128 and n <= 127):
       print("byte\n")
elif(n >= -32768 and n <= 32767):
        print("short\n")
elif(n >= -2147483648 and n <= 2147483647):
        print("int\n")
elif(n >= -9223372036854775808 and n <= 9223372036854775807):
        print("long\n")
else:
	print("BigInteger\n")

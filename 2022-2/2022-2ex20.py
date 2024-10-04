str1 = "REMEMBER NOVEMBER"
str2 = str1[:3] + str1[12:16] # REMEMBE
# str1[:3]-> 0번부터 2번까지 가지고 와라 REM 
# str1[12:16]-> 12번부터 시작해서 16빼고, 15까지 가져와라 EMBE
str3 = "R AND %s" % "STR" # R AND STR
print(str2 + str3) # REMEMBER AND STR
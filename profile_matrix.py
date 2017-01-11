######################
# 
# Author :Shamim Ehsan
#
######################
from csv import reader
import numpy as np
text_file = open("Output.txt", "w")

for it in range (2):
	with open(str(it) +'.csv', 'r') as f:
		data = list(reader(f))
	one , two , xxx = [[],[],[]]
	noun  = []
	pronoun  = []
	adjective  = []
	verb  = []
	prep = []
	for i in range(30):
		noun.append(0)
		pronoun.append(0)
		verb.append(0)
		prep.append(0)
		adjective.append(0)
		
	length = 0;
	for i in data[1::]:
		length = len(i);
		for j in range(3):
			if i[j]== 'N':
				noun[j]+=1
			if i[j]== 'PN':
				pronoun[j]+=1
			if i[j]== 'V':
				verb[j]+=1
			if i[j]== 'P':
				prep[j]+=1
			if i[j]== 'AD':
				adjective[j]+=1
	val=0;
	tag = ""
	sentance  = ""
	taggers = ""
	for i in data[0:1:]:
		for j in range (len(i)):
			sentance  += (i[j] + " ")
			if(noun[j]>val):
				val = noun[j];
				tag =  "N"
			if(pronoun[j]>val):
				val = pronoun[j];
				tag =  "PRO"
			if(adjective[j]>val):
				val = adjective[j];
				tag =  "AD"
			if(verb[j]>val):
				val = verb[j];
				tag =  "V"
			if(prep[j]>val):
				val = prep[j];
				tag =  "P"
			taggers += (tag +" ")
			val = 0
			tag = ""
		

	text_file.write("%s\n" % sentance)
	text_file.write("%s\n" % taggers)
	
			

text_file.close()

		
		
#print one

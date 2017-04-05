# -*- coding: utf-8 -*-
with open("data.txt", "r") as f:
	dataset = f.readlines()
my_set = {'|'}
text_file = open("dataout.txt", "w")	
for i in range(len(dataset)):
	temp = dataset[i].split()
	my_set.add(temp[0])
	
text_file.write("%s\n" % my_set)
	
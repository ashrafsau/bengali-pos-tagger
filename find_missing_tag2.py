# -*- coding: utf-8 -*-
######################
# 
# Author :Shamim Ehsan
#
######################
mat = [[0 for x in range(10)] for y in range(10)]
def check(str,str2):
	arr = str.split(" ")
	arr2 = str2.split(" ")
	#print arr
	#print arr2
	mx=0;
	for i in range(len(arr)):
		for j in range(len(arr2)):
			if(arr[i]==arr2[j]):
				mat[i+1][j+1]= mat[i][j]+1
			else:
				mat[i+1][j+1]= max(mat[i][j+1],mat[i+1][j])
			mx= max(mx,mat[i+1][j+1])
	return max(len(arr),len(arr2)) - mx 
with open("Output.txt", "r") as f:
	dataset = f.readlines()
	sentence = raw_input('Enter your sentance: ')
	sentence +=" \n"
	tag = raw_input('Enter word by word tag: ')
	tag+=" \n"
	for i in range(len(dataset)):
		if(i%2==0 and check(dataset[i] , sentence)==1 and check(dataset[i+1] , tag)==1 ):
			print dataset[i] + dataset[i+1]
			break;
		if(i==len(dataset)-1):
			print "not found";



		
	

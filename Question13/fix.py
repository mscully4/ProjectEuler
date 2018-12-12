with open('Output.txt', 'r') as fh:
	file = fh.readlines()

with open('Question13.cpp', 'w') as fh:
	for line in file:
		fh.write('\t"{}",\n'.format(line.strip()))

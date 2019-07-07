def capitalize_string(s):
	for w in s.split():
		s=s.replace(w,w.capitalize())

	print(s)

def main():
	print("Enter any string")
	s=input()
	capitalize_string(s)

if __name__ == '__main__':
	main()
import datetime

firstName = "";
lastName = "";
country = "";
escritorioWidth = "0";
escritorioHeight = "0";
escritorioArea = 0;

def myFunction1():
	print("calimore loves\
		abelha maia");
	return;

def myFunction2():
	firstName = input("first name, please");	
	lastName = input("last name, please");
	lastName = lastName.upper();
	country = input("what's the country you actually live in?");
	country = country.upper();
	return;

def myFunction3():	
	for i in range(0, 10):
		print("\n hello " + firstName + " " + lastName);
		print("\n are you in " + country + " ?");
		return;

def myFunction4():
	message = "we all love butterflies";
	print(message.find('we'));
	print(message.count('love'));
	print(message.upper());
	print(message.replace('butterflies', 'monkeys'));
	return;

def myFunction5():
	age = input("how old are you? ");
	print("I am " + age + " " + " years old");
	return;

def myFunction6():
	escritorioWidth = input("qual é a largura do teu escritorio? ");
	escritorioHeight = input("qual é a altura do teu escrito? ");
	escritorioArea = int(escritorioWidth) * int(escritorioHeight);
	return;

def myFunction7():
	print("a área do teu escritorio é %d " % escritorioArea);
	print("my favourite number is %d !" % 555);
	return;

def myFunction8():
	currentDate = datetime.date.today();
	print(currentDate);
	print(currentDate.month);
	print(currentDate.day);
	print(currentDate.year);
	print(currentDate.strftime('%Y, %d - %d - %d %B ... %B ... %B ... wekeweke, %Y'));
	return;

def myFunctionMain():
	myFunction1();
	myFunction2();
	myFunction3();
	myFunction4();
	myFunction5();
	myFunction6();
	myFunction7();
	myFunction8();
	return;

myFunctionMain();
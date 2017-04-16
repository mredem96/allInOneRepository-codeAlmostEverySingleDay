var peopleFactory = function(name, age, state) {
	var temp = {};
	temp.age = age; temp.name = name; temp.state = state;
	temp.printPerson = function() {console.log(this.name + " " + this.age + " " + this.state)};
	return temp;
}

var person1 = peopleFactory("tiago", "28", "PT")
var person2 = peopleFactory("albinovello", "34-38?", "IT")
var person3 = peopleFactory("greg", "50-60+?", "US")
var person4 = peopleFactory("tammen", "50-60+?", "US/DE")
var person5 = peopleFactory("dikeman", "30-40?", "US/NL")
var person6 = peopleFactory("essl", "50-60+?", "AUS")

person1.printPerson();
person2.printPerson();
person3.printPerson();
person4.printPerson();
person5.printPerson();
person6.printPerson();
var peopleConst = function(name, age, state) {
	this.name = name; this.age = age; this.state = state;
	this.printPerson = function() {console.log(this.name + ", " + this.age + ", " + this.state);};
};

var person1 = new peopleConst("tiago", "28", "PT"); person1.printPerson();
var person2 = new peopleConst("john", "30-40", "US/NL"); person2.printPerson();
function mathFormula1(var size, var a, var pi) {
  var result = a; var divisor1 = pi; var divisor2 = pi/2;  var divisorM = 0;
  var divisorDec = 0.9; var divisorInc=0.1;
    console.log("result = " + result)
      for(var i = 0; i < size; i++) {
    divisorDec -= 0.1; divisorInc += 0.322;
    divisor1 *= divisorDec; divisor2 *= divisorInc;
    divisorM = (divisor1 + divisor2) * 0.5;
    result *= (result/divisorM);
    console.log("result = " + result);
  }
  console.log("result = " + result)
  return result;
}

function mathFormula2(var size, var a) {
  var result = a; var divisor = 3; var divisorDec = 0.9;
  console.log("result = " + result);

  for(var i = 0; i < size; i++) {
    divisorDec-=0.1; divisor *= divisorDec; result *= (a/divisor);
    console.log("result = " + result);

  }
  console.log("result = " + result);
 return result;
}

function mathFormula3(var a, var pi, var size) {
  var result = a;
  for(var i = 0; i < size; i++){result *= pi; console.log("result = " + result);
}
  console.log("result = " + result);

  return result;
}

function mathFormula4(var a, var b, var c, var pi) {
	var result;
	result = b;
	console.log("result = " + result);

	console.log("result = " + result);

	for(var i = 0; i < c; i++) {result*=b; console.log("result = " + result);
}
	result*=pi;
	console.log("result = " + result);

	result /= (pi*0.5);
	console.log("result = " + result);

	result*=result;
	console.log("result = " + result);

	result-=a;
	console.log("result = " + result);

	return result;
}

function mathFormula5(var c, var a, var b, var pi) {
	var result = c*(a+b);
	console.log("result = " + result);

	result *= result;
	console.log("result = " + result);

	result /= pi;
	console.log("result = " + result);

	return result;
}

function mathFormula6(var x, var a, var b) {
	var resultA = x; var resultB = 3; var resultF = 0;
	for(var i = 0; i<a; i++) {
		for(var i2 = 0; i2 < b; i2++) {resultA *= x; console.log("resultA = " + resultA);}
	}

	for(var it2=0; it2<(a*b); it2++) {
		resultB *= x; console.log("resultB = " + resultB);
	}

	if(resultA==resultB) {resultF = resultA; cout << endl << "A==B";}
	else{resultF=resultA; cout << endl << "A!=B";}

	return resultF;
}

function mathFormula7(var x, var a, var b) {
	var resultA = x; var resultB = 3; var resultF = 0;
	for(var i = 0; i<a; i++) {
		for(var i2 = 0; i2 < b; i2++) {resultA *= x; console.log("resultA = " + resultA);}
	}

	for(var it2=0; it2<(a*b); it2++) {
		resultB *= x; console.log("resultB = " + resultB);
	}

	if(resultA==resultB) {resultF = resultA; console.log("A==B");}
	else{resultF=resultA; console.log("A!=B");}

	return resultF;
}

function mathFormula8(var size, var a, var b, var pi, var c) {
  var result = a+b;
  console.log("result = " + result);

  for(var i = 0; i < (size - 1); i++) {
    result += (a+b) * (pi * 1/c);
    console.log("result = " + result);

  }
  return result;
}

mathFormula1(10, -1, 3.14);
mathFormula2(3, 4);
mathFormula3(3, 3.14, 6);
mathFormula4(3, 4, 2, 3.14);
mathFormula5(3, 4, 2, 3.14);
mathFormula6(3, 4, 6);
mathFormula7(3, 4, 6);
mathFormula8(6, 2, 3, 3.14, 4);

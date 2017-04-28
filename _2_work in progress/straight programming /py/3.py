import re

aminhastring = 'ola a todos bem vindos ao meu canal'
omeuarraydenumeros = [1, 2, 3, 4]

familia = [
		['1', 'olha a vaca ah ima gossto em vela'],
		['2', 'tiago, leva a roupa a lavandaria'],
		['3', 'estas sempre a implicar comigo'],
		['4', 'silencio sepulcral seguido de um lindo gesto -> .|.']
	]

familiav2 = {
	'1': {
		'statement 1': 'olha a vaca',
		'statement 2': 'a ima gossto em vela',
		'statement 3': 'ah tiago essess sitioss que tu fequentass tem muito mau asspecto'
	},
	'2': {
		'statement1': 'tiago leva a roupa a lavandaria',
		'statement2': 'tiago levanta a toua louca',
		'statement3': 'tiago filho tanto sacrificio e investimento em ti para tu agora estares desempregado'
	},
	'3': {
		'statement1': 'estas sempre a implicar comigo por tudo e por nada'
	},
	'4': {
		'statement1': 'silencio sepulcrarl',
		'statement2': '.|.'
	}
}

print aminhastring
print omeuarraydenumeros

for row in familia:
	for el in row:
		print el,
	print

for id in familiav2.keys():
	print id
	for key in familiav2[id].keys():
		print " " + key + " " + familiav2[id][key]
	print

from string import Template

class Familia:

	def __init__(self, name, skill, yrb):
		self.name = name
		self.skill = skill
		self.yrb = yrb

tone = Familia('tone', 'eu sou o tone da maguia do guibeigo', 1960)
elisa = Familia('elisa', 'tiago dinheiro investido no curso para agora estares desempregado nao queres fazer complemento de formacao tens e de ser tu a pagar', 1961)
tiago = Familia('tiago', 'nao mae, tenho a universidade da iternet', 1988)
z = Familia('z', 'silencio sepulcral seguido de um lindo gesto -> .|.', 1992)

print(tone.name)
print(tone.skill)
print(tone.yrb)

print(elisa.name)
print(elisa.skill)
print(elisa.yrb)

print(tiago.name)
print(tiago.skill)
print(tiago.yrb)

print(z.name)
print(z.skill)
print(z.yrb)



def Main():
		cart = []
		cart.append(dict(item="coke", price=8, qty=2))
		cart.append(dict(item="cake", price=12, qty=1))
		cart.append(dict(item="fish", price=32, qty=4))

		t=Template("$qty x $item = $price")
		total = 0
		print("cart:")
		for data in cart:
				print(t.substitute(data))
				total += data["price"]
		print("Total: "+str(total))

		line = "cagliostro its my cagliostro"
		matchResult = re.match('cagliostro', line, re.M|re.I)

		if matchResult:
			print("temos " + matchResult.group())
		else:
			print("nao temos cagliostro")

		searchResult = re.search ('cagliostro', line, re.M|re.I)
		if searchResult:
			print("temos " + searchResult.group())
		else:
			print("nao temos cagliostro")

if __name__ == '__main__':
	Main()

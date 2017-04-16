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
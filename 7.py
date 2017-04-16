import re

def Main():
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

if __name__ == "__main__":
	Main()
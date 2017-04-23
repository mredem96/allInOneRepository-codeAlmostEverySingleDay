ASS : TiagoMaster {}

TMMASS1 : ASS {
 	*ar { |in|
		var out = in;
		out=Mix.new([TMMVSP2.ar(Mix.new([SinOsc.ar([30,30.1], mul:3), SinOsc.ar([30,30.1], mul:0.05), SinOsc.ar([62, 66], mul:0.1), SinOsc.ar([96, 99], mul:0.05), SinOsc.ar(666, mul: 0.00666),SinOsc.ar([322,333], mul: 0.000666)]))*6, Mix.new([SinOsc.ar([30,30.1], mul:3)*Blip.kr(SinOsc.ar(0.01, mul:3)), SinOsc.ar([30,30.1], mul:0.05), SinOsc.ar([62, 66], mul:0.1), SinOsc.ar([96, 99], mul:0.05), SinOsc.ar(666, mul: 0.00666),SinOsc.ar([322,333], mul: 0.000666)]), SinOsc.ar(6666, mul:0.03),SinOsc.ar([3333], mul:0.03), SinOsc.ar(9999, mul: 0.03)])*0.03;
		^out
 	}
 }

TMMASS2 : TMMMusic {
 	*ar { |in|
		var out = in, sample, whitenoise, sinehigh, sinelow, buffermusic1;
whitenoise = TMMVSP2.ar(in:WhiteNoise.ar)!2*0.03;
sinehigh = SinOsc.ar([6666,7777])*0.01;
sinelow = SinOsc.ar([30,31])*0.1;
		out=Mix.new([whitenoise,sinehigh,sinelow]);
		^out
 	}
 }

TMMASS3 : TMMMusic {
 	*ar { |in|
		var out = in;
		out=Mix.new([SinOsc.ar([30, 31]+SinOsc.ar(0.3, mul: 0.5), phase: SinOsc.ar(1), mul: SinOsc.ar(0.2, mul: 3)), SinOsc.ar(35, 43)])*0.1;
		^out
 	}
 }

TMMASS4 : TMMMusic {
 	*ar { |in|
		var out = in;
		out=Mix.new([TMMASS1.ar*10, TMMASS2.ar*3, TMMASS3.ar*1]);
		^out
 	}
 }


TMMASS5 : TMMMusic {
 	*ar { |in|
		var out = in;
		out=SinOsc.ar(12000)*Blip.kr(10)!2;
		^out
 	}
 }

TMMASS6 : TMMMusic {
 	*ar { |in|
		var out = in;
		out=Mix.new([TMMASS4.ar, TMMASS5.ar*3]);
		^out
 	}
 }

TMMASS7 : TMMMusic {
 	*ar { |in|
		var out = in;
		out=Mix.new([TMMASS6.ar, SinOsc.ar(0.3)**TMMASS6.ar*0.1]);
		^out
 	}
 }

TMMASS8 : TMMMusic {
 	*ar { |in|
		var out = in;
		out={Mix.new([TMMASS7.ar, CombN.ar(TMMASS7.ar),CombN.ar(TMMASS7.ar, 2, 2, 0), CombN.ar(TMMASS7.ar, 7, 7, 0)])*0.6};
		^out
 	}
 }


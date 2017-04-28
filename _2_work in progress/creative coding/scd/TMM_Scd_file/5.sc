/*Tiago Morais Morgado - Granular Synths Class*/

TiagoMaster : UGen {}

TiagoGranular : TiagoMaster {}

TMM_TGGM : TiagoMaster{
 	*ar { |in, bufferm|
		var out = in;
		out=Mix.new(TMM_Gran.allSubclasses.choose.ar(buffer: bufferm)!10)*0.1;
		^out
 	}
 }

TMM_SinBankComb1 : TiagoMaster{
 	*ar { var out, in;
		/*need to add interaction parameters to the synth definition. I wound say that something very cheesy such as a combination of a slickly more complex filter with some form post processing effect followed by some form of distortion can work pretty well*/
		out = in;
		out=Pan2.ar(Mix.new([TMM_SinBank6.ar, TMM_Syn1.ar, TMM_SinBank4.ar, TMM_SinBank3.ar, TMM_SinBank2.ar, TMM_SinBank1.ar, TMM_Ambience4.ar, TMM_Ambience6.ar, TMM_rectBank.ar*6]))*0.033;
 		^out
 	}
 }

TMM_IDM : TiagoMaster {}

TMM_Ambient : TiagoMaster {}

TMM_ChaosGen : TiagoMaster {}

TMM_SinBank : TiagoMaster {}

TMM_KHz : TiagoMaster {}

TMMNBBS : TiagoMaster {}

TMM_Rec : TiagoMaster {}

TMM_Chaos : TiagoMaster {}

TMM_Gran : TiagoGranular {}

TMM_ChaosFib : TMM_Chaos {
	*ar	{ | in, buffer |
		var out = in;
		out =ChaosGen.allSubclasses.choose.ar( {Array.fib(6, 1, 1).choose}.value);
		^out;
	}
	}

TMM_Gran1 : TMM_Gran {
	*ar	{ | in, buffer |
		var out = in;
		out = {Mix.new(Array.fill(([1,2,4,8]).choose, {LeakDC.ar(Warp1.ar(buffer.numChannels, buffer.bufnum, rrand(0.0, 1.0) + TRand.kr(0,0.01,Impulse.kr(rrand(40,400))), 2 ** WhiteNoise.kr(2)+0.25, rrand(0.2,2.0), overlaps: [1,2,4,8].choose, interp:4,mul: 0.3))}))}
		^out;
	}
	}

TMM_Gran2 : TMM_Gran {
	*ar	{ | in, buffer |
		var out = in;
		out =  {Mix.new(Array.fill(rrand(1,4), LeakDC.ar(Warp1.ar(buffer.numChannels, buffer.bufnum, ChaosGen.allSubclasses.choose.ar([50, 0.5].choose).abs + TRand.kr(0, 0.01, Impulse.kr(40)), 1, 0.5, -1, 2, 0, 4, 1, 0))))};
		^out;
	}
	}

TMM_Gran3 : TMM_Gran {
	*ar	{ | in, buffer |
		var out = in;
		out =  {Mix.new(Array.fill(rrand(1,4), LeakDC.ar(Warp1.ar(buffer.numChannels, buffer.bufnum, ChaosGen.allSubclasses.choose.ar([50, 0.5].choose).abs + TRand.kr(0, 0.01, Impulse.kr(40)), 1, 5, -1, 2, 0, 4, 1, 0))))};
		^out;
	}
	}

TMM_Gran4 : TMM_Gran {
	*ar	{ | in, buffer |
		var out = in;
		out =  {Mix.new(Array.fill(rrand(1,4), LeakDC.ar(Warp1.ar(buffer.numChannels, buffer.bufnum, ChaosGen.allSubclasses.choose.ar([50, 0.5].choose).abs + TRand.kr(0, 0.01, Impulse.kr(40)), 1, 0.05, -1, 2, 0, 4, 1, 0))))};
		^out;
	}
	}

TMM_Gran5 : TMM_Gran {
	*ar	{ | in, buffer |
		var out = in;
		out =  ({Mix.new(Array.fill(([1,2,3]).choose, {LeakDC.ar(Warp1.ar(buffer.numChannels, buffer.bufnum, rrand(0.0, 1.0) + TRand.kr(0,0.01,Impulse.kr(rrand(40,400))), [0.001, 2].wchoose([0.25, 0.75]), rrand(0.2,2.0), overlaps: [1,2,3].choose, interp:4,mul: 0.3))}))});
		^out;
	}
	}

TMM_Gran6 : TMM_Gran {
	*ar	{ | in, buffer |
		var out = in;
		out =  ({Mix.new(Array.fill([1,2,3].choose, {LeakDC.ar(Warp1.ar(buffer.numChannels, buffer.bufnum, rrand(0.0, 1.0) + TRand.kr(0,0.01,Impulse.kr(rrand(40,400))), [0.001, 2].wchoose([0.25, 0.75]), rrand(0.2,2.0)*0.1, overlaps: [1,2,3].choose, interp:4,mul:0.3))}))});
		^out;
	}
	}

TMM_Gran7 : TMM_Gran {
	*ar	{ | in, buffer |
		var out = in;
		out =  {Mix.new(Array.fill(rrand(1,20),LeakDC.ar(Warp1.ar(buffer.numChannels, buffer.bufnum, rrand(0, 1) + TRand.kr(0,0.005, Impulse.kr(40)),rrand(0.5,2),0.05,overlaps:2, windowRandRatio:1, interp:4, mul:rrand(0.01,0.1)))))};
		^out;
	}
	}

TMM_Gran8 : TMM_Gran {
	*ar	{ | in, buffer |
		var out = in;
		out = {Mix.new(Array.fill(4,
	{Warp1.ar(
		buffer.numChannels, buffer.bufnum,
		ChaosGen.allSubclasses.choose.ar(
			EnvGen.kr(Env(Array.rand(5, 0.1, 50), Array.fill(5, 10)), doneAction:2)) *
		(EnvGen.kr(Env(Array.rand(5, 0.1, 50), Array.fill(5, 10)), doneAction:2) / 50.0),
		rrand(0.5,2.0),
		LFDNoise0.kr.abs*((EnvGen.kr(Env(Array.rand(5, 0.1, 50), Array.fill(5, 10)), doneAction:2)	/ 50.0).abs +
			(EnvGen.kr(Env(Array.rand(5, 0.1, 50), Array.fill(5, 10)), doneAction:2).abs / 50.0) * 2.0) * 1.25,
		overlaps: 1,
		windowRandRatio: LFDNoise0.kr.abs*((
			EnvGen.kr(Env(Array.rand(5, 0.1, 50), Array.fill(5, 10)), doneAction:2).abs / 50.0) +
			(EnvGen.kr(Env(Array.rand(5, 0.1, 50), Array.fill(5, 10)), doneAction:2) / 50.0).abs / 2.0),
		interp: 4,
		mul: rrand(0.01,0.6)
)}))};
		^out;
	}
	}

TMM_Gran9 : TMM_Gran {
	*ar	{ | in, buffer |
		var out = in;
		out = {
	Mix.new(
		Array.fill(rrand(1,4),
			{Warp1.ar(buffer.numChannels, buffer.bufnum,
				TMM_ChaosFib.ar
					* EnvGen.kr(Env(Array.rand(5, 0.1, 1), Array.fill(5, 10)), doneAction:2)
				+ (TRand.kr(0, {
					Array.fib(12, 1, 1).choose}.value * 0.01, Impulse.kr({Array.fib(12, 1, 1).choose}.value*10))
					* EnvGen.kr(Env(Array.rand(5, 0.1, 50), Array.fill(5, 10)), doneAction:2)),
						TMM_ChaosFib.ar*(EnvGen.kr(Env(Array.rand(5, 0.5, 2), Array.fill(5, 10)), doneAction:2))
				* {Array.fib(12, 1, 1).choose}.value*0.1+0.5,
				TMM_ChaosFib.ar*(EnvGen.kr(Env(Array.rand(5, 0.1, 1), Array.fill(5, 10)), doneAction:2))
				* (EnvGen.kr(Env(Array.rand(5, 0.1, 1), Array.fill(5, 10)), doneAction:2)
					* {Array.fib(12, 1, 1).choose}.value)*1, -1,
				TMM_ChaosFib.ar*(EnvGen.kr(Env(Array.rand(5, 0.1, 1), Array.fill(5, 10)), doneAction:2)
					* {Array.fib(12, 1, 1).choose}.value)*0.1+1, 1,4,
				(EnvGen.kr(Env(Array.rand(5, 0.1, 1), Array.fill(5, 10)), doneAction:2)
							* {Array.fib(12, 1, 1).choose}.value)*0.008,0)}))};
		^out;
	}
	}


TMM_Syn1 : TMMNBBS {
	*ar	{|in|
		var out = in;
		out =  { Pan2.ar(Formlet.ar(Impulse.ar([[2.0,3.15, 6.6]*[MouseX.kr(0.1, 2), MouseY.kr(0.1, 2)]] * (LFDNoise0.kr.abs*2), 0.5), [60,60,1, 1200], 0.01, 0.1,0.3) )};
		^out;
	}
}

TMM_RecordIn1 : TMM_Rec {
	*ar	{ | in, buffer1, buffer2, buffer3, buffer4 |
		var rec1, rec2, rec3, rec4, play1, play2, play3, mix;
		var out = in;
		rec1 =  RecordBuf.ar(SoundIn.ar([0,0],0.1,0), buffer1.bufnum, loop: 1);
		rec2 =    RecordBuf.ar(SoundIn.ar([0,0],0.1,0), buffer2.bufnum, loop: 1);
		rec3 =    RecordBuf.ar(SoundIn.ar([0,0],0.1,0), buffer3.bufnum, loop: 1);
		play1 = PlayBuf.ar(buffer1.numChannels, buffer1.bufnum, 1, 1, 0, 1);
		play2 = PlayBuf.ar(buffer2.numChannels, buffer2.bufnum, 1, 1, 0, 1);
		play3 = PlayBuf.ar(buffer3.numChannels, buffer3.bufnum, 1, 1, 0, 1);
		mix = Mix.new([play1, play2, play3]);
		rec4 =   RecordBuf.ar(mix, buffer4.bufnum, loop: 1);
		out =  PlayBuf.ar(buffer4.numChannels, buffer4, 1, 1, 0, 1);
		^out;
	}
	}


TMM_SndPl : TMM_KHz {
	*ar	{ | in, buffer |
		var out = in;
		out = {PlayBuf.ar(buffer.numChannels, buffer.bufnum, 1, 1, 0, 1)};
		^out;
	}
	}

TMM_SndPl2 : TMM_KHz {
	*ar	{ | in, buffer |
		var out = in;
		out = {PlayBuf.ar(buffer.numChannels, buffer.bufnum, 1, LFDNoise0.kr(rrand(0.1,2)), 0, 1)};
		^out;
	}
	}

TMM_SinBank1 : TMM_SinBank {
		*ar	{
		var in;
		var out = in;
		out = {Pan2.ar(Mix.new(SinOsc.ar([60, 60.123, 30.321, 30])* 0.1))};
		^out;

}
}

TMM_SinBank2 : TMM_SinBank {
		*ar	{
		var in, cont1, cont2, cont3, oo1, oo2, oo3, oo4, outcoisa, lowf;
		var out = in;
		lowf = rrand(30, 90);
		cont1 = SinOsc.kr(rrand(0.001,0.1));
		cont2 = SinOsc.kr(rrand(0.001,0.1));
		cont3 = SinOsc.kr(rrand(0.001,0.1));
		oo1 = SinOsc.ar(lowf,mul:[cont1, cont2, cont3].choose*0.03);
		oo2 = SinOsc.ar(lowf+(lowf*0.01*rrand(0.5,2)),mul:[cont1, cont2, cont3].choose*0.03);
		oo3 = SinOsc.ar(rrand(200, 800),mul:[cont1, cont2, cont3].choose*0.03);
		oo4 = SinOsc.ar(rrand(200, 800)*10,mul:[cont1, cont2, cont3].choose*0.03);
		out = [Mix.new([oo1, oo3]), Mix.new([oo2, oo4])];
		^out;
}
}

TMM_Chaos1 : TMM_ChaosGen {
		*ar	{
			var cont1, cont2, cont3, oo1, oo2, in, out;
						out = in;
	cont1 = [LFDNoise0, LFDNoise1, LFDNoise3].choose.kr;
	cont2 = [LFDNoise0, LFDNoise1, LFDNoise3].choose.kr;
	cont3 = [LFDNoise0, LFDNoise1, LFDNoise3].choose.kr;
	oo1 = ChaosGen.allSubclasses.choose.ar([cont1, cont2, cont3].choose * 100, [cont1, cont2, cont3].choose * 2, [cont1, cont2, cont3].choose * 0.5, [cont1, cont2, cont3].choose * 0.01, [cont1, cont2, cont3].choose * 0.01, 0.3);
	oo2 = ChaosGen.allSubclasses.choose.ar([cont1, cont2, cont3].choose * 100, [cont1, cont2, cont3].choose * 2, [cont1, cont2, cont3].choose * 0.5, [cont1, cont2, cont3].choose * 0.01, [cont1, cont2, cont3].choose * 0.01, 0.3);
	out = Mix.new([oo1, oo2]);
	^out;
}
}

TMM_Ambience1 : TMM_Ambient {
		*ar	{
			var out, in, cena, a;
		out = in;
		cena = {a=HPF.ar(ar(PinkNoise,5e-3),10)*Line.kr(0,1,9);ar(GVerb,({|i|ar(Ringz,a*LFNoise1.kr(0.05+0.1.rand),55*i+60,0.2)}!99).sum,70,99).tanh};
		out = cena;
	^out;
}
}


TMM_Ambience3 : TMM_Ambient {
*ar	{
		var out, in, a, b, c, cont1, cont2, cont3, oo1, oo2, oo3, oo4, outcoisa, lowf;

		out = in;

		a = {Pan2.ar(Mix.new(SinOsc.ar([60, 60.123, 30.321, 30])* 0.1))};

		lowf = rrand(30, 90);
		cont1 = SinOsc.kr(rrand(0.001,0.1));
		cont2 = SinOsc.kr(rrand(0.001,0.1));
		cont3 = SinOsc.kr(rrand(0.001,0.1));
		oo1 = SinOsc.ar(lowf,mul:[cont1, cont2, cont3].choose*0.03);
		oo2 = SinOsc.ar(lowf+(lowf*0.01*rrand(0.5,2)),mul:[cont1, cont2, cont3].choose*0.03);
		oo3 = SinOsc.ar(rrand(200, 800),mul:[cont1, cont2, cont3].choose*0.03);
		oo4 = SinOsc.ar(rrand(200, 800)*10,mul:[cont1, cont2, cont3].choose*0.03);
		b = [Mix.new([oo1, oo3]), Mix.new([oo2, oo4])];


		c = { Pan2.ar(Formlet.ar(Impulse.ar([[2.0,3.15, 6.6]*[MouseX.kr(0.1, 2), MouseY.kr(0.1, 2)]] * (LFDNoise0.kr.abs*2), 0.5), [60,60,1, 1200], 0.01, 0.1,0.3) )};

		out = Mix.new(Mix.new(Pan2.ar(Mix.new([a,b,c]))));
		^out;
}
}

TMM_Ambience4 : TMM_Ambient {
*ar	{
		var out, in;

		out = in;

		out = [TMM_Ambience3.ar, TMM_Ambience3.ar]*0.03;
		^out;
}
}

TMM_Ambience5 : TMM_Ambient {
*ar	{
		var out, in, a, b, c, d;

		out = in;
a={[[FSinOsc, /*SinOscFB,*/ /*SinOsc*/].choose.ar(330) * Env.perc(0.01,0.2).ar(0, TDuty.ar(Dseq([1/4],inf))), [FSinOsc, SinOscFB, SinOsc].choose.ar(440) * Env.perc(0.01,0.2).ar(0, TDuty.ar(Dseq([1/3.99],inf)))]*0.3}.scope;

b={[[FSinOsc, /*SinOscFB,*/ /*SinOsc*/].choose.ar(220) * Env.perc(0.01,0.2).ar(0, TDuty.ar(Dseq([1/1.117],inf))), [FSinOsc, SinOscFB, SinOsc].choose.ar(440) * Env.perc(0.01,0.2).ar(0, TDuty.ar(Dseq([1/2.88],inf)))] *0.3}.scope;

c={SinOsc.ar([60,61])*0.001}.scope;
d={Mix.new(TMM_Ambience4.ar*0.1!10)*0.6}.scope;

		out = Mix.new(Mix.new(Pan2.ar(Mix.new([a,b,c, d]))));
		^out;
}
}

TMM_Ambience6 : TMM_Ambient {
*ar	{
var a, b, c, in, out;
		out = in;
a = ({Mix.new(Array.fill(rrand(20,200),SinOsc.ar([[LFDNoise0,LFClipNoise, LFDClipNoise, LFDNoise1, LFDNoise3, LFNoise0, LFNoise1, LFNoise2].choose.kr(rrand(6,12), mul: rrand(60,600), add: rrand(500,2000)), [LFClipNoise, LFDClipNoise, LFDNoise1, LFDNoise3, LFNoise0, LFNoise1, LFNoise2].choose.kr(rrand(6,12), mul: rrand(60,1200), add: rrand(100,200))], 0.3)))*0.0015});
b = ({Mix.new(Array.fill(rrand(2,200),{[RLPF, Formlet,Resonz,Ringz].choose.ar([Dust,Dust2, Blip].choose.ar([12, 15]), [LFClipNoise, LFDClipNoise, LFDNoise0, LFDNoise1, LFDNoise3, LFNoise0, LFNoise2].choose.ar(1/[3, 4], 1500, 1600), 0.02)})) * 0.03});
c = ({Mix.new(Array.fill(200,[CombN, CombC, CombL].choose.ar([SinOsc,FSinOsc, SinOscFB].choose.ar(midicps([LFNoise1,LFClipNoise, LFDClipNoise, LFDNoise0, LFDNoise1, LFDNoise3, LFNoise0, LFNoise2].choose.ar((rrand(1,3)), (rrand(12,48)),[LFSaw,LFCub, LFPar, LFPulse, LFTri, Saw
].choose.ar([(rrand(2.5,10)), (rrand(2.5,5.123*2))], 0, (rrand(1.5,6)), rrand(40,160)))),0, rrand(0.2,0.8)),rrand(0.5,2), (rrand(0.5,0.6)), (rrand(1,4))))) * 0.0004});
out = LeakDC.ar(Mix.new([a+b+c])) * 0.3;
	^out;
}
}

TMM_SinBank3 : TMM_SinBank {

*ar	{
			var out, in, cena;
		out = in;
		cena = {Pan2.ar(Mix.new(Mix.new([SinOsc.ar([30,31,32,33,34,35,36]*rrand(1,2)),SinOsc.ar([30,31,32,33,34,35,36]*rrand(1,2)),SinOsc.ar([30,31,32,33,34,35,36]*rrand(1,2)),SinOsc.ar([30,31,32,33,34,35,36]*rrand(1,2)),SinOsc.ar([30,31,32,33,34,35,36]*rrand(1,2)),SinOsc.ar([30,31,32,33,34,35,36]*rrand(1,2))])))*0.01};
		out = cena;
	^out;
}
}

TMM_SinBank4 : TMM_Ambient {

*ar	{
			var out, in, cena;
		out = in;
		cena = 	{Pan2.ar(Mix.new(SinOsc.ar([1145.036, 31, 32, 33, 99, 66, 322, 333, 555, 666, 999, 5000, 1111, 3333, 4444], 0.322, mul: SinOsc.ar([1145.036, 31, 32, 33, 99, 66, 322, 333, 555, 666, 999, 5000, 1111, 3333, 4444]/1600)*0.2)))};
		out = cena;
		^out;
}
}

TMM_SinBank5 : TMM_Ambient {

*ar	{
		var out, in, cena, a, b, c1, c2, c3, cf, d1, d2, d3, df;
		out = in;
		a = {Pan2.ar(Mix.new(SinOsc.ar([1145.036, 31, 32, 33, 99, 66, 322, 333, 555, 666, 999, 5000, 1111, 3333, 4444], 0.322, mul: SinOsc.ar([1145.036, 31, 32, 33, 99, 66, 322, 333, 555, 666, 999, 5000, 1111, 3333, 4444]/1600)*0.2)))};
		b = {Pan2.ar(Mix.new(Mix.new([SinOsc.ar([30,31,32,33,34,35,36]*rrand(1,2)),SinOsc.ar([30,31,32,33,34,35,36]*rrand(1,2)),SinOsc.ar([30,31,32,33,34,35,36]*rrand(1,2)),SinOsc.ar([30,31,32,33,34,35,36]*rrand(1,2)),SinOsc.ar([30,31,32,33,34,35,36]*rrand(1,2)),SinOsc.ar([30,31,32,33,34,35,36]*rrand(1,2))])))*0.01};

c1 = ({Mix.new(Array.fill(rrand(20,200),SinOsc.ar([[LFDNoise0,LFClipNoise, LFDClipNoise, LFDNoise1, LFDNoise3, LFNoise0, LFNoise1, LFNoise2].choose.kr(rrand(6,12), mul: rrand(60,600), add: rrand(500,2000)), [LFClipNoise, LFDClipNoise, LFDNoise1, LFDNoise3, LFNoise0, LFNoise1, LFNoise2].choose.kr(rrand(6,12), mul: rrand(60,1200), add: rrand(100,200))], 0.3)))*0.0015});
c2 = ({Mix.new(Array.fill(rrand(2,200),{[RLPF, Formlet,Resonz,Ringz].choose.ar([Dust,Dust2, Blip].choose.ar([12, 15]), [LFClipNoise, LFDClipNoise, LFDNoise0, LFDNoise1, LFDNoise3, LFNoise0, LFNoise2].choose.ar(1/[3, 4], 1500, 1600), 0.02)})) * 0.03});
c3 = ({Mix.new(Array.fill(200,[CombN, CombC, CombL].choose.ar([SinOsc,FSinOsc, SinOscFB].choose.ar(midicps([LFNoise1,LFClipNoise, LFDClipNoise, LFDNoise0, LFDNoise1, LFDNoise3, LFNoise0, LFNoise2].choose.ar((rrand(1,3)), (rrand(12,48)),[LFSaw,LFCub, LFPar, LFPulse, LFTri, Saw
].choose.ar([(rrand(2.5,10)), (rrand(2.5,5.123*2))], 0, (rrand(1.5,6)), rrand(40,160)))),0, rrand(0.2,0.8)),rrand(0.5,2), (rrand(0.5,0.6)), (rrand(1,4))))) * 0.0004});
cf =LeakDC.ar(Mix.new([c1+c2+c3])) * 0.3;

d1 ={[[FSinOsc, /*SinOscFB,*/ /*SinOsc*/].choose.ar(330) * Env.perc(0.01,0.2).ar(0, TDuty.ar(Dseq([1/4],inf))), [FSinOsc, SinOscFB, SinOsc].choose.ar(440) * Env.perc(0.01,0.2).ar(0, TDuty.ar(Dseq([1/3.99],inf)))]*0.3};
d2 ={[[FSinOsc, /*SinOscFB,*/ /*SinOsc*/].choose.ar(220) * Env.perc(0.01,0.2).ar(0, TDuty.ar(Dseq([1/1.117],inf))), [FSinOsc, SinOscFB, SinOsc].choose.ar(440) * Env.perc(0.01,0.2).ar(0, TDuty.ar(Dseq([1/2.88],inf)))] *0.3};
d3 ={SinOsc.ar([60,61])*0.001};
df ={Mix.new(d1,d2,d3)*0.6};

		cena = {Pan2.ar(Mix.new([a, b, cf, df]))};
		out = cena;
		^out;
}
}

TMM_WEKE_WEKE : TMM_Gran {
*ar	{|buffer|
			var out, in, cena, b, s;
		out = in;
cena = {PlayBuf.ar(buffer.numChannels, buffer.bufnum, HenonC.ar(0.25*(rrand(2,20))) * 2 +0.5, HenonC.ar(0.25*(rrand(2,20)))*2, HenonC.ar(0.25*(rrand(2,20))) * 1, 1) ! 2};
		out = cena;
	^out;
}
}

TMM_IDM1 : TMM_IDM {

*ar	{
var a, b, c, d, n, e, f,  out;

	a = [Blip, Impulse].choose.ar(rrand(1,80))*1.5;

	b = [BrownNoise, GrayNoise, ClipNoise, PinkNoise].choose.ar * Env([1.0,1.0,0.0],[0.01,0.01],\step).ar(0, Impulse.ar(rrand(1,16))) ;
	b = FreeVerb.ar(b, 0.5, 0.4)*(rrand(0.666,6.666));

	c = [FSinOsc, SinOscFB].choose.ar(rrand(20,80)) * Env.perc(0.01,0.2).ar(0, TDuty.ar(Dseq([1/[1,2,4,8,6,16].choose,1/[1,2,4,8,6,16].choose,1/[1,2,4,8,6,16].choose,1/[1,2,4,8,6,16].choose],inf)));
	5.do{ c = (c.distort + c)*0.75};
	c = c * 1.5;

	d = LPF.ar([Saw, SyncSaw, VarSaw, LFSaw].choose.ar([rrand(10,80),rrand(20,80)]).sum , XLine.ar(rrand(1000,8000),200,0.5)) * Env.perc.ar(0, Impulse.ar(1/16)) * 0.5;
	d = (GVerb.ar( d , roomsize:rrand(1,100), revtime:rrand(0.6,60)) * rrand(20,400)).clip(-1.0,1.0) * 0.3;

	n = rrand(3,32);
	e = ( [Saw,SyncSaw, VarSaw, LFSaw].choose.ar( (rrand(20,80))*(1..n) * ({ [LFClipNoise, LFDClipNoise, LFDNoise0, LFDNoise1, LFDNoise3, LFNoise0, LFNoise2].choose.ar(0.1).range(1,1.01) } ! n) ) *
		({ [LFClipNoise, LFDClipNoise, LFDNoise0, LFDNoise1, LFDNoise3, LFNoise0, LFNoise2].choose.ar(0.1).range(0.0,rrand(0.1,2)) }!n)).sum * 10;
	e = [CombL, CombN, BufCombC].choose.ar(e, 0.1, 0.1, 4) + e;
	e = e.tanh * 0.3 * [SinOsc, FSinOsc, SinOscFB].choose.ar(0.05).range(0.5,1.0);
	e = e.dup;
	e = e * [SinOsc, FSinOsc, SinOscFB].choose.ar(0.03).range(0.2,1.0) * 0.5;

	f = [Blip, Impulse].choose.ar(100) * [Blip, Impulse].choose.ar(100) * Env([0.0,0.0,1.0],[8,8],[\step,\linear,\step]).ar(0, [Blip, Impulse].choose.ar(1/16)) * 2 ;

	out = ((a + b + c + f) ! 2) + d + e;
	out = out * 0.2
	^out;
}

}


TMM_SinBank6 : TMM_SinBank {
*ar	{
	var a, b, c, d, ampmod, in, out;
		out=in;
	ampmod = SinOsc.kr(0.01)*0.1;
a = SinOsc.ar(48.midicps, mul: ampmod);
b = SinOsc.ar(36.midicps, mul: ampmod);
c = SinOsc.ar(64.midicps, mul: ampmod);
d = SinOsc.ar(71.midicps, mul: ampmod);

		out = (a+b+c+d)!2;
	^out;
}
}

TMM_rectBank : TMM_SinBank {

*ar	{
	var in, out;
		out=in;
		out = Mix.new(Pulse.ar([60,61,30,31, 6000], SinOsc.ar(rrand(0.01, 0.1))!2 * 0.5, 0.3));
	^out;
}
}


TMM_SinPulse :TMM_SinBank {
*ar	{
	var in, out;
		out=in;
		out = {SinOsc.ar(1940, 0)*EnvGen.kr(Env([0, 1, 0], [0.005, 0.1, 0.004]), 1, doneAction: 2)};
	^out;
}
}

TMM_WhiteNoisePulse :TMM_SinBank {
*ar	{
	var in, out;
		out=in;
		out = {WhiteNoise.ar*EnvGen.kr(Env([0, 1, 0], [0.01, 1, 0.08]), 1, doneAction: 2)};
	^out;
}
}

TMM_Syn2 :TMM_SinBank {
*ar	{
	var in, out;
		out=in;
		out = {Mix.new(LeakDC.ar(LFPulse.ar([30,60, 61], 0, HenonC.ar(1), 1)))};
	^out;
}
}





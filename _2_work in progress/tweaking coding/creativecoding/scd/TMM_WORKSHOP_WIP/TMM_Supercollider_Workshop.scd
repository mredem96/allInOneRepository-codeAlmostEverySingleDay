////////////////////////////////////////////////////
////////////////////////////////////////////////////
Array.fib(rrand(1, 200), [1, 5, 8, 13].choose, [1, 5, 8, 13].choose) // press shift-return to evaluate
{Mix.new(SinOsc.ar(Array.fib(rrand(1, 200), [1, 5, 8, 13].choose, [1, 5, 8, 13].choose)+30))*0.003!2}.scope
////////////////////////////////////////////////////
////////////////////////////////////////////////////
Server.internal.boot.makeWindow; // internal server boot
Server.local.boot.makeWindow; //local server boot
////////////////////////////////////////////////////
////////////////////////////////////////////////////
{Mix.new(SinOsc.ar(Array.fib(rrand(1, 200), [1, 5].choose, [1, 5].choose)+30))*0.003!2}.scope
////////////////////////////////////////////////////
////////////////////////////////////////////////////
({[Pulse.ar(ChaosGen.allSubclasses.choose.ar(60) * rrand(30, 900) + 30, ChaosGen.allSubclasses.choose.ar, 0.3, 0), Pulse.ar(ChaosGen.allSubclasses.choose.ar(60) * rrand(30, 900) + 30, ChaosGen.allSubclasses.choose.ar, 0.3, 0)]*0.003}.play;) // non-linear PWM chaotic signal
////////////////////////////////////////////////////
////////////////////////////////////////////////////
({[[Pulse.ar(ChaosGen.allSubclasses.choose.ar * rrand(30, 900) + 30, ChaosGen.allSubclasses.choose.ar, 0.3, 0), Pulse.ar(ChaosGen.allSubclasses.choose.ar * rrand(30, 900) + 30, ChaosGen.allSubclasses.choose.ar, 0.3, 0)],
GVerb.ar(Pulse.ar(ChaosGen.allSubclasses.choose.ar * rrand(30, 900) + 30, ChaosGen.allSubclasses.choose.ar, 0.3, 0))] * 0.001}.scope;) // variation
////////////////////////////////////////////////////
////////////////////////////////////////////////////
rand(Array.fib(20, 1, 1)) // fibonacci sequence array
thisThread.randSeed = 666; {rand(Array.fib(20, 1, 1))} ! 10;
round(rand(Array.fib(20, 1, 1))*0.1, 0.01)
sort([thisThread.randSeed = 666; round(rand(Array.fib(20, 1, 1))*0.1, 0.01) ! 10]);
////////////////////////////////////////////////////
////////////////////////////////////////////////////
(
~thing={
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
	Pan2.ar((oo1+oo2+oo3+oo4)*0.01!2, pos:SinOsc.kr(rrand(0.001, 0.3)));
})
////////////////////////////////////////////////////
////////////////////////////////////////////////////
{Mix.new(Array.fill(40, ~thing))}.scope
////////////////////////////////////////////////////
////////////////////////////////////////////////////
{Mix.new(SinOsc.ar(Array.fib(20, 1, 1)+60))*0.0001!2}.scope;
////////////////////////////////////////////////////
////////////////////////////////////////////////////
sort([thisThread.randSeed = 666; round(rand(Array.fib(20, 1, 1))*0.1, 0.01) ! 10]).asString.speak;
~cena=[LFClipNoise, LFDClipNoise, LFDNoise0, LFDNoise1, LFDNoise3, LFNoise1, LFNoise2];
~cena1f={[~cena.choose.ar, ~cena.choose.kr(10)]};
~cena2={[ChaosGen.allSubclasses.choose.ar(10), ChaosGen.allSubclasses.choose.ar(10)]}
{Blip.ar(~cena1f*120, ~cena2*120, 0.01)}.play // single channel
{PMOsc.ar(~cena1f*60+60, ~cena2*60+60, 7, mul: 0.006)}.play // pretty boring, like an FM radio
{SinOsc.ar(~cena1f*60+60, mul:~cena2*0.01)}.scope
////////////////////////////////////////////////////
////////////////////////////////////////////////////

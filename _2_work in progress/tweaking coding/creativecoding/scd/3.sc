
VSP : TiagoMaster {}

TMMVSPALPHA : VSP {
 	*ar { |in|
		var out = in;
		out=[TMMVSP9,TMMVSP11, TMMVSP15, TMMVSP18, TMMVSP19, TMMVSP20, TMMVSP21, TMMVSP22].choose.ar(in:in);
		^out
 	}
 }

TMMVSP1 : VSP {
 	*ar { |in|
		var out = in;
		out=LeakDC.ar(in* SinOsc.ar(SinOsc.ar(rrand(0.01,1))*rrand(0.06, 6.0)));
		^out
 	}
 }

TMMVSP2 : VSP {
 	*ar { |in|
		var out = in;
		out=LeakDC.ar(TMMVSP1.ar(TMMVSP1.ar(TMMVSP1.ar(TMMVSP1.ar(TMMVSP1.ar(in))))));
		^out
 	}
 }

TMMVSP3 : VSP {
 	*ar { |in|
		var out = in;
		out=LeakDC.ar(CombN.ar(Convolution.ar(TMMVSP2.ar(in), TMMVSP2.ar(WhiteNoise.ar)), (LFDNoise0.ar.abs(0.06)+0.2)*10, (LFDNoise0.ar.abs(0.06)+0.2)*10, 250));
		^out
 	}
 }

TMMVSP4 : VSP {
 	*ar { |in|
		var out = in;
		out=LeakDC.ar(CombN.ar(TMMVSP2.ar(in), SinOsc.kr(0.003)*10, SinOsc.kr(0.002)*10, LFDNoise0.kr(2)*60)+AllpassC.ar(CombN.ar(TMMVSP2.ar(in), SinOsc.kr(0.003)*10, SinOsc.kr(0.002)*10, LFDNoise0.kr(2)*60), 2, 2, 7)*3 + AllpassC.ar(CombN.ar(TMMVSP2.ar(in), SinOsc.kr(0.003)*10, SinOsc.kr(0.002)*10, LFDNoise0.kr(2)*60), 2, 2, 40));
		^out
 	}
 }

TMMVSP5 : VSP {
 	*ar { |in|
		var out = in;
		out=(in**LFDNoise0.kr(10))*(in**LFDNoise0.kr(10))*0.0001;
		^out
 	}
 }

TMMVSP6 : VSP {
 	*ar { |in|
		var out = in;
		out=GVerb.ar(LeakDC.ar(TMMVSP4.ar(TMMVSP3.ar(TMMVSP2.ar(in)))), 0.1, 30, 0.05, 0.0, 1.5, earlyreflevel: 70, taillevel: 50, maxroomsize: 300)*0.05;
		^out
 	}
 }

TMMVSP7 : VSP {
 	*ar { |in|
		var out = in;
		out=GVerb.ar(LeakDC.ar(Mix.new([Formlet.ar(in, [60, 60.1], 0.1, 0.5)!2, Formlet.ar(in, [6000, 6001], 0.1, 0.5)!2])), 0.1, 30, 0.05, 0.0, 1.5, earlyreflevel: 70, taillevel: 50, maxroomsize: 300)*0.05;
		^out
 	}
 }


TMMVSP8 : VSP {
 	*ar { |in|
		var out = in;
		out=GVerb.ar(LeakDC.ar(Mix.new([TMMVSP2.ar(in),TMMVSP3.ar(in),TMMVSP5.ar(in)])))*0.15;
		^out
 	}
 }

TMMVSP9 : VSP {
 	*ar { |in|
		var out = in;
		out=SinOsc.ar(3**(SinOsc.ar(0.01)**3+1))*TMMVSP2.ar(in*TMM_IDM1.ar)*10;
		^out
 	}
}

TMMVSP10 : VSP {
 	*ar { |in|
		var out = in;
		out=SinOsc.ar(3**(SinOsc.ar(0.01)**3+1))*TMMVSP2.ar(in*TMM_Ambience4.ar*TMM_IDM1.ar)*10;
		^out
 	}
}

TMMVSP11 : VSP {
 	*ar { |in|
		var out = in;
		out=GVerb.ar(CombC.ar(HenonC.ar(3**(SinOsc.ar(0.01)**3+1))*TMMVSP2.ar(in*TMM_Ambience4.ar*TMM_IDM1.ar)*10, 0.02, 0.02, 4));
		^out
 	}
}

TMMVSP12 : VSP {
 	*ar { |in|
		var out = in;
		out=GVerb.ar(HenonC.ar(3**(SinOsc.ar(0.01)**3+1))*TMMVSP2.ar(in*TMM_Ambience4.ar*TMM_IDM1.ar)*10);
		^out
 	}
}

TMMVSP13 : VSP {
 	*ar { |in|
		var out = in;
		out=(TMMVSP2.ar([TMM_Ambience1, TMM_Ambience3, TMM_Ambience4].choose.ar*TMM_IDM1.ar)*SinOsc.ar(SinOsc.ar(0.03)*12)*12)**in*0.01;
		^out
 	}
}

TMMVSP14 : VSP {
 	*ar { |in|
		var out = in;
		out=TMMVSP13.ar(TMMVSP13.ar(in))*3;
		^out
 	}
}

TMMVSP15 : VSP {
 	*ar { |in|
		var out = in;
		out=Mix.new([Convolution.ar(TMM_Ambience4.ar,FreeVerb2.ar(Convolution.ar(in,Convolution.ar(TMM_IDM1.ar, Convolution.ar(TMM_Ambience3.ar,in)*0.1*TMM_Ambience4.ar)*0.1)*0.1, TMM_IDM1.ar)*0.0001)]);
		^out
 	}
}

TMMVSP16 : VSP {
 	*ar { |in|
		var out = in;
		out=Mix.new([TMMVSP10.ar(in), TMMVSP9.ar(in)]);
		^out
 	}
}

TMMVSP17 : VSP {
 	*ar { |in|
		var out = in;
		    var inA, chainA, inB, chainB, chain;
    inA = in;
    inB = (WhiteNoise.ar);
    chainA = FFT(LocalBuf(64*[1, 4, 8, 16, 32, 64, 128, 256].choose), inA);
	    chainB = FFT(LocalBuf(64*[1, 4, 8, 16, 32, 64, 128, 256].choose), inB);
	    chain = PV_BinShift(chainA, LFDNoise0.kr * 128, LFDNoise0.kr * 128);
		out=CompanderD.ar(Limiter.ar(LeakDC.ar(Mix.new([GVerb.ar(3 * IFFT(chain).dup, 16, 1.24, 0.10, 0.95, 15, -3, -15, -17)*0.017, 3 * IFFT(chain).dup])), 1, 0.01));
		^out
 	}
}

TMMVSP18 : VSP {
 	*ar { |in|
		var out = in;
		out=Mix.new([TMMVSP17.ar(in:in),TMMVSP17.ar(in:in)]);
		^out
 	}
}

TMMVSP19 : VSP {
 	*ar { |in|
		var out = in;
		out=Mix.new([TMMVSP9.ar(in:in),TMMVSP15.ar(in:in)]);
		^out
 	}
}

TMMVSP20 : VSP {
 	*ar { |in|
		var out = in;
		out=(((SinOsc.ar(3)*TMMVSP2.ar(TMMVSP11.ar(in:in)))*6)*SinOsc.ar(3))*Mix.new([SinOsc.ar(6), SinOsc.ar(6000)]);
		^out
 	}
}


TMMVSP21 : VSP {
 	*ar { |in|
		var out = in;
		out=	Mix.new([CombC.ar(SinOsc.ar(400)*Blip.kr(Amplitude.kr(in:in))), GVerb.ar(CombC.ar(SinOsc.ar(400)*Blip.kr(Amplitude.kr(in:in*SinOsc.ar(0.01, mul: 10)))), 300, 1, 0.5, 0.5, 15, -5, -6, -20)*0.1, SinOsc.ar(60, 0, SinOsc.ar([2/1, 3/1]))])*0.06;
		^out
 	}
}

TMMVSP22 : VSP {
 	*ar { |in|
		var out = in;
		out=	[TMMVSP9, TMMVSP15, TMMVSP19].choose.ar(in:TMMVSP21.ar(in:in));
		^out
 	}
}


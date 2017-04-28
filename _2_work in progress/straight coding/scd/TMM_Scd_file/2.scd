(o=s.options; o.memSize; o.memSize = 2.pow(20););
s.reboot;
({var in, del1, del2, del3, del4, del5, del6, del7, del8; in={SoundIn.ar(0,1,0)!2}; del1={ CombN.ar(in, 8, 8, 0.1) }; del2={ CombN.ar(del1, 8, 8, 1) }; del3={ CombN.ar(del2, 8, 8, 1) }; del4={ CombN.ar(del3, 8, 8, 1) }; Out.ar(0, in+del1+del2+del3+del4);}.play;);
Server.local.makeWindow;

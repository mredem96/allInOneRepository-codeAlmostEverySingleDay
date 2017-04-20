# this script aims at downloading nachtstuck records discography in bandcamp
# the Scriot is meant to be used on mac; it requires brew and youtube-dl
# it can be modified to be used in linux and windows as well, once all the required tools are available on those plattforms
# i am not doing nothing illegal by giving you the tools to download this discography, once i am the curator of the label myself
# i intend everyone who is willing to do so, to download my entire discography

/usr/bin/ruby -e "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install)"

brew install youtube-dl
brew install ffmpeg

cd ~
mkdir "Nachtstuck Records Discography"

cd "Nachtstuck Records Discography"

mkdir "[NS-R 01] Martin Mallaun and Karlheinz Essl Ruderals"
cd "[NS-R 01] Martin Mallaun and Karlheinz Essl Ruderals"
youtube-dl https://nachtstuckrecords.bandcamp.com/album/ns-r-01-martin-mallaun-and-karlheinz-essl-ruderals-v-12

cd ..
mkdir "[NS​-​R 02] Holy Rollers - Confessions - Live at OT301"
cd "[NS​-​R 02] Holy Rollers - Confessions - Live at OT301"
youtube-dl https://nachtstuckrecords.bandcamp.com/album/ns-r-02-holy-rollers-confessions-live-at-ot301-v-12

cd ..
mkdir "[NS​-​R 03] Gregory Taylor - Silicon​-​Bronze (Pentimento) (v 1​.​2)"
cd "[NS​-​R 03] Gregory Taylor - Silicon​-​Bronze (Pentimento) (v 1​.​2)"
youtube-dl https://nachtstuckrecords.bandcamp.com/album/ns-r-03-gregory-taylor-silicon-bronze-pentimento-v-12

cd ..
mkdir "[NS​-​R 04] Colectivo Abaetetuba - HUECHELU (v 1​.​2)"
cd "[NS​-​R 04] Colectivo Abaetetuba - HUECHELU (v 1​.​2)"
youtube-dl https://nachtstuckrecords.bandcamp.com/album/ns-r-01-martin-mallaun-and-karlheinz-essl-ruderals-v-12


cd ..
mkdir "[NS​-​R 05] SANMI - CULT AGAIN"
cd "[NS​-​R 05] SANMI - CULT AGAIN"
youtube-dl https://nachtstuckrecords.bandcamp.com/album/ns-r-05-sanmi-cult-again

cd ..
mkdir "[NS​-​R 08] Tiago Morais Morgado - A Secret Withdrew From The Sky Laying In​-​Between That Portrait Of The Moon After A Formal Feeling Where Hope Is The Wing With Feather Blowing Life To Some"
cd "[NS​-​R 08] Tiago Morais Morgado - A Secret Withdrew From The Sky Laying In​-​Between That Portrait Of The Moon After A Formal Feeling Where Hope Is The Wing With Feather Blowing Life To Some"
youtube-dl https://nachtstuckrecords.bandcamp.com/album/ns-r-08-tiago-morais-morgado-a-secret-withdrew-from-the-sky-laying-in-between-that-portrait-of-the-moon-after-a-formal-feeling-where-hope-is-the-wing-with-feather-blowing-life-to-some

cd ..
mkdir "[NS​-​R 06] Wilbert de Joode and Gonçalo Almeida - Live at Atelier Tarwewijk (v 1​.​3)"
cd "[NS​-​R 06] Wilbert de Joode and Gonçalo Almeida - Live at Atelier Tarwewijk (v 1​.​3)"
youtube-dl https://nachtstuckrecords.bandcamp.com/album/ns-r-06-wilbert-de-joode-and-gon-alo-almeida-live-at-atelier-tarwewijk-v-13

cd ..
mkdir "[NS​-​R 07] VA - Nachtmuziek (V 1​.​3)"
cd "[NS​-​R 07] VA - Nachtmuziek (V 1​.​3)"
youtube-dl https://nachtstuckrecords.bandcamp.com/album/ns-r-07-va-nachtmuziek-v-13


cd ..
mkdir "[NS​-​R 09] - V​.​A. - Peixe Aviao - Remix EP"
cd "[NS​-​R 09] - V​.​A. - Peixe Aviao - Remix EP"
youtube-dl https://nachtstuckrecords.bandcamp.com/album/ns-r-09-v-a-peixe-aviao-remix-ep

cd ..
mkdir "[NSR​-​10] Emanuel Salvador - Selected Performances (Re​-​Mastered) - XS​-​Records re​-​edition"
cd "[NSR​-​10] Emanuel Salvador - Selected Performances (Re​-​Mastered) - XS​-​Records re​-​edition"
youtube-dl https://nachtstuckrecords.bandcamp.com/album/nsr-10-emanuel-salvador-selected-performances-re-mastered-xs-records-re-edition

cd ..
mkdir "[NS​-​R 11] Adamned​/​AGE - Photosphaere (XS Records PT Netlabel 2008 re​-​issue)"
cd "[NS​-​R 11] Adamned​/​AGE - Photosphaere (XS Records PT Netlabel 2008 re​-​issue)"
youtube-dl https://nachtstuckrecords.bandcamp.com/album/ns-r-11-adamned-age-photosphaere-xs-records-pt-netlabel-2008-re-issue

cd ..
mkdir "[NS​-​R 12] Mathew Ostrowski and Karlheinz Essl - Flechtwerk - XS Records Re​-​Issue"
cd "[NS​-​R 12] Mathew Ostrowski and Karlheinz Essl - Flechtwerk - XS Records Re​-​Issue"
youtube-dl https://nachtstuckrecords.bandcamp.com/album/ns-r-12-mathew-ostrowski-and-karlheinz-essl-flechtwerk-xs-records-re-issue

cd ..
mkdir "[NS​-​R 13] - TIAGO MORAIS MORGADO - SÓ EM CENÁRIOS REAIS, COM BALAS E PESSOAS DE CARNE E OSSO E SENTIMENTOS COMO OS DESTAS DESGRAÇADAS QUE MÃO CRIMINOSA ESQUARTEJA"
cd "[NS​-​R 13] - TIAGO MORAIS MORGADO - SÓ EM CENÁRIOS REAIS, COM BALAS E PESSOAS DE CARNE E OSSO E SENTIMENTOS COMO OS DESTAS DESGRAÇADAS QUE MÃO CRIMINOSA ESQUARTEJA"
youtube-dl https://nachtstuckrecords.bandcamp.com/album/ns-r-13-tiago-morais-morgado-s-em-cen-rios-reais-com-balas-e-pessoas-de-carne-e-osso-e-sentimentos-como-os-destas-desgra-adas-que-m-o-criminosa-esquarteja

cd ..
mkdir "[NS​-​R 14] - Agnes Heginger and Karlheinz Essl - Out of Blue (XS Records re​-​issue)"
cd "[NS​-​R 14] - Agnes Heginger and Karlheinz Essl - Out of Blue (XS Records re​-​issue)"
youtube-dl https://nachtstuckrecords.bandcamp.com/album/ns-r-14-agnes-heginger-and-karlheinz-essl-out-of-blue-xs-records-re-issue

cd ..
mkdir "[NS​-​R 15] Alexander Chernyshkov - SELECTED WORKS (v 1​.​2)"
cd "[NS​-​R 15] Alexander Chernyshkov - SELECTED WORKS (v 1​.​2)"
youtube-dl https://nachtstuckrecords.bandcamp.com/album/ns-r-15-alexander-chernyshkov-selected-works-v-12

cd ..
mkdir "[NS​-​R 16] Nachtstück Records - 2014​-​2016"
cd "[NS​-​R 16] Nachtstück Records - 2014​-​2016"
youtube-dl https://nachtstuckrecords.bandcamp.com/album/ns-r-16-nachtst-ck-records-2014-2016

cd ..
mkdir "[NS​-​R 17] Tiago Morais Morgado - Suspiro Meta​-​Quimérico do Sopro da Alma - EP"
cd "[NS​-​R 17] Tiago Morais Morgado - Suspiro Meta​-​Quimérico do Sopro da Alma - EP"
youtube-dl https://nachtstuckrecords.bandcamp.com/album/ns-r-17-tiago-morais-morgado-suspiro-meta-quim-rico-do-sopro-da-alma-ep

cd ..
mkdir "[NS​-​R 18] john dikeman, luis vicente, dirk serries, george hadow, martina verhoeven - live at zaal 100"
cd "[NS​-​R 18] john dikeman, luis vicente, dirk serries, george hadow, martina verhoeven - live at zaal 100"
youtube-dl https://nachtstuckrecords.bandcamp.com/album/ns-r-18-john-dikeman-luis-vicente-dirk-serries-george-hadow-martina-verhoeven-live-at-zaal-100

cd ..
mkdir "[NS​-​R 19] AlbertoNovello (AKA JesterN) - Modular Live Impro at Dobia 2015"
cd "[NS​-​R 19] AlbertoNovello (AKA JesterN) - Modular Live Impro at Dobia 2015"
youtube-dl https://nachtstuckrecords.bandcamp.com/album/ns-r-19-albertonovello-aka-jestern-modular-live-impro-at-dobia-2015

cd ..
mkdir "[NS​-​R 20] Hirt, Lytle, Tammen - Twelve Ways Of Saying Yes In 18th Century France"
cd "[NS​-​R 20] Hirt, Lytle, Tammen - Twelve Ways Of Saying Yes In 18th Century France"
youtube-dl https://nachtstuckrecords.bandcamp.com/album/ns-r-20-hirt-lytle-tammen-twelve-ways-of-saying-yes-in-18th-century-france


cd ..
mkdir "[NS​-​R 22] Gregory Taylor - Sidoardjo (A Map of the Lost City, Drawn From Memory)"
cd "[NS​-​R 22] Gregory Taylor - Sidoardjo (A Map of the Lost City, Drawn From Memory)"
youtube-dl https://nachtstuckrecords.bandcamp.com/album/ns-r-22-gregory-taylor-sidoardjo-a-map-of-the-lost-city-drawn-from-memory

cd ..
mkdir "[NS​-​R 23] Mizuchi Thundersticks - How on earth did it happen (​.​.​.​) + Paulo Alexandre Jorge Liberdade - Rework"
cd "[NS​-​R 23] Mizuchi Thundersticks - How on earth did it happen (​.​.​.​) + Paulo Alexandre Jorge Liberdade - Rework"
youtube-dl https://nachtstuckrecords.bandcamp.com/album/ns-r-23-mizuchi-thundersticks-how-on-earth-did-it-happen-paulo-alexandre-jorge-liberdade-rework

cd ..
mkdir "[NS​-​R 21] josé valente und tiago morais morgado - drei lieder zu verunsichern"
cd "[NS​-​R 21] josé valente und tiago morais morgado - drei lieder zu verunsichern"
youtube-dl https://nachtstuckrecords.bandcamp.com/album/ns-r-21-jos-valente-und-tiago-morais-morgado-drei-lieder-zu-verunsichern

cd ..
mkdir "[NS​-​R 26] Kristos Machievelli - Boredom and Rage (Single)"
cd "[NS​-​R 26] Kristos Machievelli - Boredom and Rage (Single)"
youtube-dl https://nachtstuckrecords.bandcamp.com/album/ns-r-26-kristos-machievelli-boredom-and-rage-single


cd ..
mkdir "[NS​-​R 25] Taller Ciclo Performs Stockhausen - Memories of Sirius - v 1​.​2"
cd "[NS​-​R 25] Taller Ciclo Performs Stockhausen - Memories of Sirius - v 1​.​2"
youtube-dl https://nachtstuckrecords.bandcamp.com/album/ns-r-25-taller-ciclo-performs-stockhausen-memories-of-sirius-v-12

cd ..
mkdir "[NS​-​R 24] Alchemic Harm - Alchemic Harm"
cd "[NS​-​R 24] Alchemic Harm - Alchemic Harm"
youtube-dl https://nachtstuckrecords.bandcamp.com/album/ns-r-24-alchemic-harm-alchemic-harm

cd ..
mkdir "[NS-R 27] D-A - Eice 24 EP"
cd "[NS-R 27] D-A - Eice 24 EP"
youtube-dl https://nachtstuckrecords.bandcamp.com/album/ns-r-27-d-a-eice-24-ep

cd ..
mkdir "[NS-R 26] José Manuel Berenguer - Trenes Alla Fuga (Single EP)"
cd "[NS-R 26] José Manuel Berenguer - Trenes Alla Fuga (Single EP)"
youtube-dl https://nachtstuckrecords.bandcamp.com/album/ns-r-28-jos-manuel-berenguer-trenes-alla-fuga-single-ep


cd ..
mkdir "[NS​-​R 29] FFE - Road tapes vol​.​1"
cd "[NS​-​R 29] FFE - Road tapes vol​.​1"
youtube-dl https://nachtstuckrecords.bandcamp.com/album/ns-r-29-ffe-road-tapes-vol-1

cd ..
mkdir "[NS​-​R 30] Mattheus Conda - Quartz"
cd "[NS​-​R 30] Mattheus Conda - Quartz"
youtube-dl https://nachtstuckrecords.bandcamp.com/album/ns-r-30-mattheus-conda-quartz

cd ..
mkdir "[NS​-​R 31] Tiago Morais Morgado - Foi Tudo Isto em Vão?"
cd "[NS​-​R 31] Tiago Morais Morgado - Foi Tudo Isto em Vão?"
youtube-dl https://nachtstuckrecords.bandcamp.com/album/ns-r-31-tiago-morais-morgado-foi-tudo-isto-em-v-o

cd ..
mkdir "[NS-R 32] Johnny Torpedo - Abaddon (EP)"
cd "[NS-R 32] Johnny Torpedo - Abaddon (EP)"
youtube-dl https://nachtstuckrecords.bandcamp.com/album/ns-r-32-johnny-torpedo-abaddon-ep


cd ..
mkdir "[NS​-​R 33] Emmanuel Volcano - Samstag"
cd "[NS​-​R 33] Emmanuel Volcano - Samstag"
youtube-dl https://nachtstuckrecords.bandcamp.com/album/ns-r-33-emmanuel-volcano-samstag

cd ..
mkdir "[NS​-​R 34] Jesus the Devil​-​Tween and the Virgin Mary Demoniac Confession - We Will Love You From The Paradise"
cd "[NS​-​R 34] Jesus the Devil​-​Tween and the Virgin Mary Demoniac Confession - We Will Love You From The Paradise"
youtube-dl https://nachtstuckrecords.bandcamp.com/album/ns-r-34-jesus-the-devil-tween-and-the-virgin-mary-demoniac-confession-we-will-love-you-from-the-paradise

cd ..
mkdir "[NS​-​R 35] Lucifer Rising - Lust in Babylon"
cd "[NS​-​R 35] Lucifer Rising - Lust in Babylon"
youtube-dl https://nachtstuckrecords.bandcamp.com/album/ns-r-35-lucifer-rising-lust-in-babylon

cd ..
mkdir "[NS​-​R 36] MARTINA VERHOEVEN & DIRK SERRIES - CITADELIC"
cd "[NS​-​R 36] MARTINA VERHOEVEN & DIRK SERRIES - CITADELIC"
youtube-dl https://nachtstuckrecords.bandcamp.com/album/ns-r-36-martina-verhoeven-dirk-serries-citadelic


cd ..
mkdir "[NS​-​R 37] Bulletproof Cupid - Everlasting Memory"
cd "[NS​-​R 37] Bulletproof Cupid - Everlasting Memory"
youtube-dl https://nachtstuckrecords.bandcamp.com/album/ns-r-37-bulletproof-cupid-everlasting-memory

cd ..
mkdir "[NS​-​R 38] John Dikeman, Eric Zinman, Onno Govaert - Live in Concert"
cd "[NS​-​R 38] John Dikeman, Eric Zinman, Onno Govaert - Live in Concert"
youtube-dl https://nachtstuckrecords.bandcamp.com/album/ns-r-38-john-dikeman-eric-zinman-onno-govaert-live-in-concert

cd ..
mkdir "[NS​-​R 39] Tiago Morais Morgado - Viola Solos (March 2017)"
cd "[NS​-​R 39] Tiago Morais Morgado - Viola Solos (March 2017)"
youtube-dl https://nachtstuckrecords.bandcamp.com/album/ns-r-39-tiago-morais-morgado-viola-solos-march-2017

cd ..
mkdir "[NS​-​R 40] Tiago Morais Morgado - No​-​Input Mixer Recordings March 2017"
cd "[NS​-​R 40] Tiago Morais Morgado - No​-​Input Mixer Recordings March 2017"
youtube-dl https://nachtstuckrecords.bandcamp.com/album/ns-r-40-tiago-morais-morgado-no-input-mixer-recordings-march-2017


cd ..
mkdir "[NS​-​R 41] Raoul van der Weide and Gonçalo Almeida - 8 Pictures"
cd "[NS​-​R 41] Raoul van der Weide and Gonçalo Almeida - 8 Pictures"
youtube-dl https://nachtstuckrecords.bandcamp.com/album/ns-r-41-raoul-van-der-weide-and-gon-alo-almeida-8-pictures

cd ..
mkdir "[NS​-​R 42] António Panda Gianfratti - Solo"
cd "[NS​-​R 42] António Panda Gianfratti - Solo"
youtube-dl https://nachtstuckrecords.bandcamp.com/album/ns-r-42-ant-nio-panda-gianfratti-solo
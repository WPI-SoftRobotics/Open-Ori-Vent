clear all
close all


time = 0.1:0.1:6.7;

NinjaPrinted = [0 2.6 4.8 7.2	8.6	10.2 11 11.2 11.2 11 11 10.8 10.4 10.2 9.8 9.2 8.6 8.2 7.8 7.4 7.2 6.8 6.4 6.2 5.6 5.2 5.2 5 4.4 4.2 4.2 4 3.8 3.2 3.2 3.2 3 3 2.8 2.6 2.6 2.2 2 2 2 2 1.8 1.4 1.2 1.2 1 1 1 1 1 1 1 1 1 0.8 0.8 0.6 0.6 0.4 0.2 0 0];
Ori_FibreGlast = [0	2.2	5.8	7	7.8	8	7.8	6.6	5.6	4.4	3.8	3.2	2.8	2.4	2	1.6	1.4	1.2	1	0.8	0.8	0.8	0.6	0.6	0.6	0.4	0.2	0.2	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0];
Ori_NitrleGlove = [0	2.4	5.4	6	3.4	1.4	0.4	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0];



figure
plot(time,NinjaPrinted,'k','LineWidth',2)
hold on
plot(time,Ori_FibreGlast,'g','LineWidth',2)
hold on 
plot(time, Ori_NitrleGlove,'b','LineWidth',2)
hold on 
xlabel('Time(s)')
ylabel('kPa')
legend('3D Printed Bellows (NinjaFlex)','Origami Bellows (Stretchlon200) ','Origami Bellows (Nitrle Latex)')




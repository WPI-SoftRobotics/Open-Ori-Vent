clear all
close all


% Origami bellows nitril 
ori_0 = [1.62 1.74 1.81 1.69 1.78 1.8 1.82 1.76 1.63 1.63]; %0
ori_2 = [1.67 1.69 1.82 1.71 1.58 1.67 1.63 1.71 1.82 1.65]; %2
ori_4 = [1.69 1.58 1.69 1.74 1.84 1.78 1.74 1.71 1.61 1.74 ]; %4
ori_6 = [1.69 1.74 1.67 1.80 1.74 1.61 1.76 1.56 1.63 1.61 ]; %6
ori_8 = [1.83 1.82 1.71 1.76 1.76 1.78 1.82 1.61 1.74 1.83 ]; %8
ori_10 = [1.58 1.76 1.74 1.58 1.65 1.69 1.67 1.76 1.61 1.71 ];%10
ori_12 = [ 1.65 1.71 1.69 1.82 1.58 1.69 1.69 1.67 1.58 1.67];%12
ori_14 = [1.71 1.82 1.67 1.74 1.76 1.78 1.78 1.74 1.54 1.74 ]; %14
ori_16 = [1.76 1.84 1.76 1.63 1.71 1.63 1.71 1.65 1.54 1.78  ];% 16
ori_18 = [1.76 1.54 1.63 1.89 1.82 1.65 1.78 1.78 1.76 1.63]; %18
ori_20 = [1.67 1.78 1.58 1.78 1.83 1.76 1.69 1.71 1.63 1.74 ];% 20
ori_22 = [1.58 1.58 1.8 1.63 1.61 1.67 1.67 1.69 1.71 1.71];%22
ori_24 = [1.78 1.61 1.76 1.67 1.69 1.76 1.63 1.69 1.74 1.74];%24




% origami bellows bagging film
ori_0_bag = [5.91 5.89 5.94 6.02 5.96 5.89 5.91 6.01 5.89 5.96];%0
ori_2_bag = [5.87 5.96 5.96 5.59 5.76 5.83 5.82 5.76 5.61 5.81];%2
ori_4_bag = [5.98 6 5.76 5.89 5.7 5.98 5.7 5.89 5.76 5.85]; %4
ori_6_bag = [5.87 6.02 6.04 5.78 6.02 5.85 6.06 5.91 5.59 5.87];%6
ori_8_bag = [5.98 5.83 5.83 5.89 5.78 5.81 6.04 5.61 5.91 5.63];%8
ori_10_bag = [5.7 5.76 5.61 5.44 5.68 5.74 5.65 5.76 5.68 5.74];%10
ori_12_bag = [5.6 5.43 5.33 5.26 5.39 5.26 5.13 5.33 5.1 5.16 ];%12
ori_14_bag = [5.31 5.05 5.16 5.09 5.31 4.96 5.13 5.31 5.16 5.33];%14
ori_16_bag = [5.39 5.24 5.26 5.05 5.18 5.09 5.07 5.29 5.11 5.22];%16
ori_18_bag = [5 5.26 4.94 5.09 5.07 5.05 5.26 5.05 5.26 5.24];%18
ori_20_bag = [5.24 5.34 5.18 5.39 5.09 5.24 5.39 5.29 5.37 5.05];%20
ori_22_bag = [5.03 5.24 5.37 5.29 5.39 5.18 5.37 5.33 5.34 5.22];%22
ori_24_bag = [5.18 5.31 5.16 5.22 5.03 5.2 5.24 5.26 5.03 5.24];%24



%3d printed
ori_0_print = [11.11 11.17 11.17 11.15 11.17 11.13 11.17 11.17 11.17 11.17 ];%0
ori_2_print = [11.17 11.17 11.15 11.17 11.16 11.17 11.15 11.16 11.17 11.17];%2
ori_4_print = [11.17 11.16 11.17 11.15 11.17 11.15 11.17 11.16 11.17 11.15];%4
ori_6_print = [11.15 11.17 11.15 11.15 11.15 11.17 11.17 11.15 11.17 11.15];%6
ori_8_print = [11.15 11.17 11.15 11.17 11.17 11.17 11.17 11.15 11.17 11.15];%8
ori_10_print = [11.15 11.17 11.15 11.15 11.15 11.15 11.15 11.15 11.15 11.15];%10
ori_12_print = [11.15 11.15 11.15 11.15 11.15 11.15 11.15 11.15 11.17 11.15];%12
ori_14_print = [11.13 11.13 11.11 11.13 11.13 11.13 11.13 11.11 11.13 11.13];%14
ori_16_print = [11.15 11.16 11.15 11.15 11.15 11.15 11.13 11.17 11.17 11.15];%16
ori_18_print = [11.15 11.13 11.15 11.13 11.15 11.17 11.15 11.17 11.13 11.15];%18
ori_20_print = [11.15 11.13 11.15 11.15 11.15 11.13 11.15 11.15 11.15 11.15];%20
ori_22_print = [11.17 11.15 11.17 11.13 11.15 11.17 11.15 11.15 11.15 11.13];%22
ori_24_print = [11.15 11.17 11.15 11.15 11.15 11.17 11.15 11.15 11.15 11.13];%24





% Average Origami Nitril
mean_nit = [mean2(ori_0); mean2(ori_2); mean2(ori_4); mean2(ori_6); mean2(ori_8); mean2(ori_10); mean2(ori_12); mean2(ori_14); mean2(ori_16); mean2(ori_18); mean2(ori_20); mean2(ori_22); mean2(ori_24)]';
ori_nitril = [ori_0; ori_2; ori_4; ori_6; ori_8; ori_10; ori_12; ori_14; ori_16; ori_18; ori_20; ori_22; ori_24];

% Average Origami bagging film
mean_bag = [mean2(ori_0_bag); mean2(ori_2_bag); mean2(ori_4_bag); mean2(ori_6_bag); mean2(ori_8_bag); mean2(ori_10_bag); mean2(ori_12_bag); mean2(ori_14_bag); mean2(ori_16_bag); mean2(ori_18_bag); mean2(ori_20_bag); mean2(ori_22_bag); mean2(ori_24_bag)]';
ori_bag = [ori_0_bag; ori_2_bag; ori_4_bag; ori_6_bag; ori_8_bag; ori_10_bag; ori_12_bag; ori_14_bag; ori_16_bag; ori_18_bag; ori_20_bag; ori_22_bag; ori_24_bag];

% Average 3D printed
mean_print = [mean2(ori_0_print); mean2(ori_2_print); mean2(ori_4_print); mean2(ori_6_print); mean2(ori_8_print); mean2(ori_10_print); mean2(ori_12_print); mean2(ori_14_print); mean2(ori_16_print); mean2(ori_18_print); mean2(ori_20_print); mean2(ori_22_print); mean2(ori_24_print)]';
ori_print = [ori_0_print; ori_2_print; ori_4_print; ori_6_print; ori_8_print; ori_10_print; ori_12_print; ori_14_print; ori_16_print; ori_18_print; ori_20_print; ori_22_print; ori_24_print];


% X axis  ----------  0 to 24 houts-------------------- 
g1 = repmat({'0'},10,1);
g2 = repmat({'2'},10,1);
g3 = repmat({'4'},10,1);
g4 = repmat({'6'},10,1);
g5 = repmat({'8'},10,1);
g6 = repmat({'10'},10,1);
g7 = repmat({'12'},10,1);
g8 = repmat({'14'},10,1);
g9 = repmat({'16'},10,1);
g10 = repmat({'18'},10,1);
g11 = repmat({'20'},10,1);
g12 = repmat({'22'},10,1);
g13 = repmat({'24'},10,1);

g = [g1; g2; g3; g4; g5; g6; g7; g8; g9; g10; g11; g12; g13];


h = 0:2:24;



%--------------Plot -----------------------------------------


plot(h,mean_print,'o-k','LineWidth',1.5);
hold on
plot(h,mean_bag,'o-g','LineWidth',1.5);
hold on 
plot(h,mean_nit,'o-b','LineWidth',1.5);
hold on 

yline(6,'--r',{'Desired Pressure Line'},'LineWidth',1);
yline(1.72,'--r',{'Desired Pressure Line'},'LineWidth',1);
yline(11.17,'--r',{'Desired Pressure Line'},'LineWidth',1);
xlabel('Time (hours)')
ylabel('Peak Pressure (kPa)')
legend('3D Printed Bellows (NinjaFlex)','Origami Bellows (Bagging Film) ','Origami Bellows (Nitrile Latex)','Desired Pressure Lines')
ylim([0 13]);


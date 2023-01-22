#include <iostream>

int main(){

     int choice;   
     int type;
          

 std::cout << "************************************************************************************************************\n";
 std::cout << "Please select whitch country you would like to see a list of equipment below .\n";
 std::cout << "************************************************************************************************************\n";
 std::cout << "Enter 1 for The United states of America , enter 2 for the empire of Germany, enter 3 for the soviet union. \n";
 std::cout << "************************************************************************************************************\n";     
 std::cin >> type ;

 if(type == 1){
                  
     std::cout << "************************************************************************************************************\n";
     std::cout << "Please enter a number below what type of equipment you would like to see .\n";
     std::cout << "************************************************************************************************************\n";
     std::cout << "Enter 1 for tanks, enter 2 for infantry weapons, enter 3 for aerial vehicles. \n";
     std::cout << "************************************************************************************************************\n";     
     std::cin >> choice ;
                            
           if(choice == 1){
            std::string ustanks[] = {"M4 Sherman", "T14 Heavy tank", "T30 heavy tank", "M3 stuart", "M3 lee", "M26 pershing", "Marmon-herrington CTLS", "M22 Locust", "M24 Chaffee", "Heavy Tank M6"};
            std::cout << "************************************************\n";
            std::cout << "10 United states tanks of world war 2\n";
            std::cout << "************************************************\n";
            std::cout << ustanks[0] << '\n';
            std::cout << ustanks[1] << '\n';
            std::cout << ustanks[2] << '\n';
            std::cout << ustanks[3] << '\n';
            std::cout << ustanks[4] << '\n';
            std::cout << ustanks[5] << '\n';
            std::cout << ustanks[6] << '\n';
            std::cout << ustanks[7] << '\n';
            std::cout << ustanks[8] << '\n';
            std::cout << ustanks[9] << '\n';

 }
                    else if( choice == 2){
            std::string usa[] = {"M1 Carbine", "M1 Garand", "M1a1 Thompson submachine gun", "M3A1 Grease gun", "Colt M1911", "Springfield", "Browning m1918 B.A.R", "M2 Flamethrower", "M2 mortar", "M9 Bazooka"};
            std::cout << "************************************************\n";
            std::cout << "10 United states infantry weapons of world war 2\n";
            std::cout << "************************************************\n";
            std::cout << usa[0] << '\n';
            std::cout << usa[1] << '\n';
            std::cout << usa[2] << '\n';
            std::cout << usa[3] << '\n';
            std::cout << usa[4] << '\n';
            std::cout << usa[5] << '\n';
            std::cout << usa[6] << '\n';
            std::cout << usa[7] << '\n';
            std::cout << usa[8] << '\n';
            std::cout << usa[9] << '\n';

 }
                    else if( choice == 3){
      std::string usplanes[] = {"Curtiss P-40 Warhawk", "Curtiss P-36 Hawk ", "Lockheed P-38 Lightning", "North American P-51 Mustang", "Vought F4U Corsair", "Grumman F6F Hellcat", "Northrop P-61 Black Widow", "Brewster F2A Buffalo", "Republic P-47 Thunderbolt", "Douglas BD Havoc"};
            std::cout << "**************************\n";
            std::cout << "10 Unite states airplanes of world war 2 2\n";
            std::cout << "**************************\n";
            std::cout << usplanes[0] << '\n';
            std::cout << usplanes[1] << '\n';
            std::cout << usplanes[2] << '\n';
            std::cout << usplanes[3] << '\n';
            std::cout << usplanes[4] << '\n';
            std::cout << usplanes[5] << '\n';
            std::cout << usplanes[6] << '\n';
            std::cout << usplanes[7] << '\n';
            std::cout << usplanes[8] << '\n';
            std::cout << usplanes[9] << '\n';

 }
                    else{
                    std::cout << "This is an incorrect selection , please try again.\n";
                          }
}
//germany
else if(type == 2){
      std::cout << "************************************************************************************************************\n";
     std::cout << "Please enter a number below what type of equipment you would like to see .\n";
     std::cout << "************************************************************************************************************\n";
     std::cout << "Enter 1 for tanks, enter 2 for infantry weapons, enter 3 for aerial vehicles. \n";
     std::cout << "************************************************************************************************************\n";     
     std::cin >> choice ;
                            
           if(choice == 1){
            std::string germtanks[] = {"Panzer I", "Panzer IV", "Tiger I", "Panzer III", "Panzer II", "Panther", "Maus", "Panzerkampfwagen E-100", "Tiger II"};
            std::cout << "************************************************\n";
            std::cout << "10 German tanks of world war 2\n";
            std::cout << "************************************************\n";
            std::cout << germtanks[0] << '\n';
            std::cout << germtanks[1] << '\n';
            std::cout << germtanks[2] << '\n';
            std::cout << germtanks[3] << '\n';
            std::cout << germtanks[4] << '\n';
            std::cout << germtanks[5] << '\n';
            std::cout << germtanks[6] << '\n';
            std::cout << germtanks[7] << '\n';
            std::cout << germtanks[8] << '\n';
            

 }
           else if( choice == 2){
            std::string germweapons[] = {"mp40 sub machinegun", "Stg-43/44 ", "c96 mauser pistol", "MG34 medium machine gun", "Mg42 general purpose machine gun", "Karabiner 98k", "Gewehr 43 rifle", "Flammenwerfer 41", "Gross Panzergranata 61", "Panzerschreck"};
            std::cout << "**************************\n";
            std::cout << "10 German  infantry weapons of world war 2\n";
            std::cout << "**************************\n";
            std::cout << germweapons[0] << '\n';
            std::cout << germweapons[1] << '\n';
            std::cout << germweapons[2] << '\n';
            std::cout << germweapons[3] << '\n';
            std::cout << germweapons[4] << '\n';
            std::cout << germweapons[5] << '\n';
            std::cout << germweapons[6] << '\n';
            std::cout << germweapons[7] << '\n';
            std::cout << germweapons[8] << '\n';
            std::cout << germweapons[9] << '\n';

 }
                    else if( choice == 3){
      std::string germplanes[] = {"Messerschmitt Bf 109", "Focke-Wulf Fw 190 ", "Dornier Do 17", "Messerschmitt Me 410", "Messerschmitt Bf 110", "Heinkel He 162", "Messerschmitt Me 262", "Messerschmitt Me 163", "Junkers Ju87", "Messerschmitt Me 163 Komet"};
            std::cout << "**************************\n";
            std::cout << "10 German airplanes of world war 2 2\n";
            std::cout << "**************************\n";
            std::cout << germplanes[0] << '\n';
            std::cout << germplanes[1] << '\n';
            std::cout << germplanes[2] << '\n';
            std::cout << germplanes[3] << '\n';
            std::cout << germplanes[4] << '\n';
            std::cout << germplanes[5] << '\n';
            std::cout << germplanes[6] << '\n';
            std::cout << germplanes[7] << '\n';
            std::cout << germplanes[8] << '\n';
            std::cout << germplanes[9] << '\n';

 }
                    else{
                    std::cout << "This is an incorrect selection , please try again.\n";
                          }
}

//soviet union
else if(type == 3){
     std::cout << "************************************************************************************************************\n";
     std::cout << "Please enter a number below what type of equipment you would like to see .\n";
     std::cout << "************************************************************************************************************\n";
     std::cout << "Enter 1 for tanks, enter 2 for infantry weapons, enter 3 for aerial vehicles. \n";
     std::cout << "************************************************************************************************************\n";     
     std::cin >> choice ;
                            
           if(choice == 1){
            std::string soviettanks[] = {"T-28", "T-34", "T-44", "KV-13", "KV-1", "KV-8", "SU-76", " A-43", "IS-1", "IS-3"};
            std::cout << "************************************************\n";
            std::cout << "10 soviet union tanks of world war 2\n";
            std::cout << "************************************************\n";
            std::cout << soviettanks[0] << '\n';
            std::cout << soviettanks[1] << '\n';
            std::cout << soviettanks[2] << '\n';
            std::cout << soviettanks[3] << '\n';
            std::cout << soviettanks[4] << '\n';
            std::cout << soviettanks[5] << '\n';
            std::cout << soviettanks[6] << '\n';
            std::cout << soviettanks[7] << '\n';
            std::cout << soviettanks[8] << '\n';
            std::cout << soviettanks[9] << '\n';

 }
                else if( choice == 2){
            std::string rusweapons[] = {"mosin nagant", "SVT-40 ", "Tokarev TT-33", "DP-27 light machinegun", "DS-39 medium machinegun", "Federov Avtomat", "PPSH-41", "ROKS-3 flamethrower", "RM-38 light mortar", "PTRS-41 anti-tank rifle"};
            std::cout << "**************************\n";
            std::cout << "10 soviet union infantry weapons of world war 2\n";
            std::cout << "**************************\n";
            std::cout << rusweapons[0] << '\n';
            std::cout << rusweapons[1] << '\n';
            std::cout << rusweapons[2] << '\n';
            std::cout << rusweapons[3] << '\n';
            std::cout << rusweapons[4] << '\n';
            std::cout << rusweapons[5] << '\n';
            std::cout << rusweapons[6] << '\n';
            std::cout << rusweapons[7] << '\n';
            std::cout << rusweapons[8] << '\n';
            std::cout << rusweapons[9] << '\n';

 }
                    else if( choice == 3){
      std::string usplanes[] = {"Bell P-39 Airacobra", "Lavochkin-Gorbunov-Gudkov LaGG-3 ", "Lavochkin La-7", "Petlyakov Pe-3", "Yakovlev Yak-1", "Curtiss P-40 Kittyhawk/Tomahawk", "Lavochkin La-9", "Mikoyan-Gurevich MiG-1", "Republic P-47 Thunderbolt", "Mikoyan-Gurevich MiG-3"};
            std::cout << "**************************\n";
            std::cout << "10 Unite states airplanes of world war 2 2\n";
            std::cout << "**************************\n";
            std::cout << usplanes[0] << '\n';
            std::cout << usplanes[1] << '\n';
            std::cout << usplanes[2] << '\n';
            std::cout << usplanes[3] << '\n';
            std::cout << usplanes[4] << '\n';
            std::cout << usplanes[5] << '\n';
            std::cout << usplanes[6] << '\n';
            std::cout << usplanes[7] << '\n';
            std::cout << usplanes[8] << '\n';
            std::cout << usplanes[9] << '\n';

 }
                    else{
                    std::cout << "This is an incorrect selection , please try again.\n";
                          }
}
    main();
}
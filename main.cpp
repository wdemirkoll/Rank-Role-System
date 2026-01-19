#include <iostream>
#include <string>

std::string Nickname; // Player's nickname
std::string MyRank;  // Player's current rank
std::string Rank[41]{  // Ranks
    "Iron",
    "Iron+",
    "Iron++",

    "Gold",
    "Gold+",
    "Gold++",

    "Platinum",
    "Platinum+",
    "Platinum++",

    "Diamond",
    "Diamond+",
    "Diamond++",

    "Master",
    "Master+",
    "Master++",

    "Grandmaster",
    "Grandmaster+",
    "Grandmaster++",

    "Champion",
    "Champion+",
    "Champion++",

    "Legend",
    "Legend+",
    "Legend++",

    "Mythic",
    "Mythic+",
    "Mythic++",

    "Immortal",
    "Immortal+",
    "Immortal++",

    "Eternal",
    "Eternal+",
    "Eternal++",

    "Divine",
    "Divine+",
    "Divine++",

    "Ultimate",
    "Ultimate+",
    "Ultimate++",

    "Godlike",
};

double XP = 0; // Player's XP
int Choose;   // Menu choice

void Rank_XP_Logic(){
    // Assign rank based on XP thresholds
    if (XP >= 40000) MyRank = Rank[40];
    else if (XP >= 39500) MyRank = Rank[39];
    else if (XP >= 39000) MyRank = Rank[38];
    else if (XP >= 38500) MyRank = Rank[37];
    else if (XP >= 38000) MyRank = Rank[36];
    else if (XP >= 37000) MyRank = Rank[35];
    else if (XP >= 36500) MyRank = Rank[34];
    else if (XP >= 36000) MyRank = Rank[33];
    else if (XP >= 35000) MyRank = Rank[32];
    else if (XP >= 34500) MyRank = Rank[31];
    else if (XP >= 33500) MyRank = Rank[30];
    else if (XP >= 33000) MyRank = Rank[29];
    else if (XP >= 32000) MyRank = Rank[28];
    else if (XP >= 31000) MyRank = Rank[27];
    else if (XP >= 30500) MyRank = Rank[26];
    else if (XP >= 29500) MyRank = Rank[25];
    else if (XP >= 29000) MyRank = Rank[24];
    else if (XP >= 28000) MyRank = Rank[23];
    else if (XP >= 26000) MyRank = Rank[22];
    else if (XP >= 25000) MyRank = Rank[21];
    else if (XP >= 24000) MyRank = Rank[20];
    else if (XP >= 23500) MyRank = Rank[19];
    else if (XP >= 22500) MyRank = Rank[18];
    else if (XP >= 21500) MyRank = Rank[17];
    else if (XP >= 20000) MyRank = Rank[16];
    else if (XP >= 19500) MyRank = Rank[15];
    else if (XP >= 18500) MyRank = Rank[14];
    else if (XP >= 18000) MyRank = Rank[13];
    else if (XP >= 17500) MyRank = Rank[12];
    else if (XP >= 17000) MyRank = Rank[11];
    else if (XP >= 16500) MyRank = Rank[10];
    else if (XP >= 15000) MyRank = Rank[9];
    else if (XP >= 14000) MyRank = Rank[8];
    else if (XP >= 12000) MyRank = Rank[7];
    else if (XP >= 10000) MyRank = Rank[6];
    else if (XP >= 7500) MyRank = Rank[5];
    else if (XP >= 5000) MyRank = Rank[4];
    else if (XP >= 4500) MyRank = Rank[3];
    else if (XP >= 2000) MyRank = Rank[2];
    else if (XP >= 500) MyRank = Rank[1];
    else MyRank = Rank[0];
}

void Statistic(){
    std::cout << "----------------" << std::endl;
    std::cout << "Nickname: " << Nickname << std::endl; // Display nickname
    std::cout << "Rank: " << MyRank << std::endl;      // Display rank
    std::cout << "Total XP: " << XP << std::endl;     // Display XP
    std::cout << "----------------" << std::endl;
    std::cout << "Enter 0 to exit" << std::endl;
    std::cout << "or enter 1 to gain XP:\n";
}

void NameEntry(){
    std::cout << "Welcome, enter your nickname: ";
    std::getline(std::cin, Nickname); // Get nickname
}

int main(){
    NameEntry();
    Rank_XP_Logic(); // Set initial rank

    while(true){
        Statistic();
        std::cin >> Choose;

        switch (Choose){
        case 0:
            return 0; // Exit

        case 1:
            XP += 250;         // Gain XP
            Rank_XP_Logic();  // Update rank after gaining XP
            break;

        default:
            std::cout << "Invalid selection, try again.\n"; // Handle invalid input
            break;
        }
    }
}

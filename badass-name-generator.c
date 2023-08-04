#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int main(){
	srand(time(NULL));

	printf(R"EOF(______             _                                                                                           _                
| ___ \           | |                                                                                         | |               
| |_/ /  __ _   __| |  __ _  ___  ___   _ __    __ _  _ __ ___    ___    __ _   ___  _ __    ___  _ __   __ _ | |_   ___   _ __ 
| ___ \ / _` | / _` | / _` |/ __|/ __| | '_ \  / _` || '_ ` _ \  / _ \  / _` | / _ \| '_ \  / _ \| '__| / _` || __| / _ \ | '__|
| |_/ /| (_| || (_| || (_| |\__ \\__ \ | | | || (_| || | | | | ||  __/ | (_| ||  __/| | | ||  __/| |   | (_| || |_ | (_) || |   
\____/  \__,_| \__,_| \__,_||___/|___/ |_| |_| \__,_||_| |_| |_| \___|  \__, | \___||_| |_| \___||_|    \__,_| \__| \___/ |_|   
                                                                         __/ |                                                  
                                                                        |___/                                                   
									)EOF");




	char forename[100][16] = {"evil", "dark","merciless",
        "diabolical", "wicked", "fierce", "deadly", "lethal", "dominant",
        "unstoppable", "undefeated", "destructive", "intense", "brutal",
        "relentless", "vile", "sinister", "cruel", "fiery", "infernal",
        "bloodthirsty", "dangerous", "violent", "grim", "child", "dark",
        "shadowy", "demonic", "chilling", "vengeful", "infamous", "heinous",
        "hateful", "cold-blooded", "treacherous", "villainous", "notorious",
        "cunning", "crafty", "ruthless", "formidable", "mercenary", "rugged",
        "belligerent", "rampant", "prowling", "wild", "malicious", "noxious",
        "rancid", "foul", "venomous", "noxious", "aggressive", "fearsome",
        "scheming", "murderous", "baleful", "audacious", "furious",
        "hellish", "carnage", "wreaking", "executioner", "tormentor",
        "annihilator", "onslaught", "cataclysm", "obliterator", "onslaught",
        "saboteur", "desperado", "exterminator", "maniac", "nemesis",
        "terror", "chaos", "abyss", "vengeance", "fury", "havoc", "wrath",
        "doom", "calamity", "plague", "carnage", "ravage", "apocalypse",
        "dread", "butcher", "predator" };
	char surname[108][16] = {"energy", "entropy", "predator","Doom", "Nightmare", "Slaughter", "Havoc", "Abyss", "Tyranny",
        "Torment", "Desolation", "Cataclysm", "Eclipse", "Annihilation",
        "Plague", "Inferno", "Chaos", "Malevolence", "Ruin", "Pandemonium",
        "Nemesis", "Carnage", "Oblivion", "Shadow", "Terror", "Vengeance",
        "Blasphemy", "Phantom", "Apocalypse", "Torture", "Curse", "Fury",
        "Venom", "Destruction", "Hellfire", "Bloodlust", "Sorcery",
        "Maleficence", "Eradication", "Misery", "Suffering", "Ruination",
        "Abomination", "Brutality", "Despair", "Hate", "Fate", "Extinction",
        "Wrath", "Dominion", "Calamity", "Agony", "Enigma", "Eternal",
        "Punishment", "Ravager", "Malice", "Malefactor", "Maelstrom",
        "Pariah", "Crisis", "Impending Doom", "Violence", "Tumult",
        "Perdition", "Blight", "Avalanche", "Hecate", "Verdict", "Reckoning",
        "Obelisk", "Heresy", "Coven", "Deception", "Defiance", "Eidolon",
        "Iconoclast", "Omega", "Lament", "Iconoclasm", "Omega",
        "Discord", "Acheron", "Peril", "Eon", "Iniquity", "Insanity",
        "Labyrinth", "Resurgence", "Stygian", "Purgatory", "Nether",
        "Tempest", "Sinister", "Grimoire", "Rapture", "Ominous", "Savage",
        "Impurity", "Sepulcher", "Cacophony", "Desolation", "Phantasm",
        "Ordeal", "Necropolis", "Extirpation", "Ruination", "Plunder" };
	int quantity;

	printf("\n\nWelcome to the \033[1;31mBadass Name Generator\033[0m.\n");
	printf("How many badass names do you want generated?");
	scanf("%d",&quantity);



	printf("\n Your badass names are:\n");

	for(int i = 0; i < quantity; i++){
		int forename_index = rand() % 100;
		int surname_index = rand() % 108;

		char full_name[32];

		strcpy(full_name, forename[forename_index]);
		strcat(full_name, " ");
		strcat(full_name, surname[surname_index]);

		printf("%s\n",full_name);

		
	}


					return 0;
}

/******************************************************************************
Nicole Vaughan
Homework 7
-- Final Game --
The Little Mermaid

*******************************************************************************/
#include <iostream>
#include <time.h>
using namespace std;
void IntroScreen(); //function prototypes
void WinningScreen();
void LosingScreen();

string CLS = "\033[2J\033[1;1H"; //clear screen
string Default = "\033[0m"; // default gray & reset background
string White = "\033[37;1m"; // bright white
string Red = "\033[31;1m";
string Pink = "\x1B[38;5;213m";
string Green = "\033[32;1m";
string SeaGreen = "\x1B[38;5;158m";
string Yellow = "\033[33;1m";
string Blue = "\x1B[38;5;117m";
string Cyan = "\033[36;1m";
string Purple = "\x1B[38;5;171m";
string Orange = "\x1B[38;5;208m";
string Coral = "\x1B[38;5;204m";

int main()
{
    srand(time(NULL));
    // Step 1 : intro screen function
    IntroScreen();
    // Step 2 : secret names to guess
    string Phrases[10] = {"prince eric","ariel", "sebastian", "flounder",
                          "scuttle", "ursula", "king triton", "max",
                          "melody", "morgana"};
    string SecretPhrase = Phrases[rand()%10];
    
    //Step 3: create Guess Phrase line
    string GuessPhrase = SecretPhrase;
    for (int i=0; i<GuessPhrase.size(); i++){
        if (GuessPhrase[i] != ' ')
            GuessPhrase[i] = '.';
    }
    
    //Step 4: declare variables
    int BadGuesses = 0;
    string LettersRemaining = "a b c d e f g h i j k l m n o p q r s t u v w x y z";
    string Letter;
    
    //Step 5: Game loop
    while (BadGuesses < 6 && GuessPhrase != SecretPhrase){
        cout << endl;
        system("clear");
        // Step 6: evolving ASCII art
        if (BadGuesses == 0){
            cout << Red << "                           ,-''`-.   \n";               
            cout << "                           /       `._       \n";           
            cout << "                     __,-'/       _.  `--.   \n";           
            cout << "                   ,'   ,'      ,'  ,--.  )   \n";          
            cout << "                 ,'   ,'       /  ,(  ,/)/    \n";          
            cout << "                /           ,',;-,-),;('\n";
            cout << "               /      __.-',--'  ,,"<< Default <<"|"<< Red << "/  `-.__\n";
            cout << "              /  ,      ),"<< Default <<"',;;  ("<< Blue <<"O"<< Default << ")("<< Red << "        `--.\n";
            cout << "    ,.----.__/_,'      //"<< Default <<" /"<< Blue <<"O"<< Default << ")\\  `.  \\"<< Red << "--'`-.     )\n";
            cout << "  ,' __         _,.-'  ,/"<< Default <<",-     c.' /"<< Red << "  `.  `  ,/   .-. \n";
            cout << " / ,'         ,'  _,-' ("<< Default <<",,-\\  -==*'/"<< Red << "     )   (      ) \\\n";
            cout << "','      ,  ,'  ,'     ,"<< Default <<"'--`\\-.___/ ."<< Red << "    ,   ( `-..-'   )\n";
            cout << "|      ,'   |          "<< Default <<"``'\\  \\ ,    `"<< Red << ".       `.      ,'\n";
            cout << "| /   /      \\        ,"<< Default <<"' \\ )- )      |"<< Red << "            --' )\n";
            cout << "||  | .      .      "<< Default <<"(   //  /       |"<< Red << "   ---._      ,'\n";
            cout << " `. '. `-.          "<< Default <<"|  //  |        |"<< Red << "   ,--' `-.-.'\n";
            cout << "   `--:._ `-.._     "<< Default <<"| //   |     Y  |"<< Red << " ,'\n";
            cout << "                `'-- "<< Default <<")'/    |   ,'  /"<< Red << "-'\n";
            cout << "                    "<< Default <<"/ /     | ,'   /\n";
            cout << "                   ( (      ,'    '\n";
            cout << "                   ` `.__ ,'      (\n";
            cout << "                    `.__," << SeaGreen << "\\      ,'\"\\\n";
            cout << "                       ,- \\ .  /\\  ,\\\n";
            cout << "                      '    \\  /  )/  `.\n";
            cout << "                      `.    )/  //     `.\n"<< Default;
    
        }
        if (BadGuesses == 1){
            system("clear");
            cout << Red << "                           ,-''`-.                       " << Purple << " ⣠⡄ \n"<< Red;              
            cout << "                           /       `._                  " << Purple << "⢠⣾⢿⠀\n"<< Red;      
            cout << "                     __,-'/       _.  `--.              " << Purple << "⢸⣿⢘⣦⡀\n"<< Red;         
            cout << "                   ,'   ,'      ,'  ,--.  )             " << Purple << " ⠘⢿⡜⢦⢛⣦⡀\n"<< Red;
            cout << "                 ,'   ,'       /  ,(  ,/)/               " << Purple << "  ⠈⣷⢸⣅⣓⣿⡀\n"<< Red;
            cout << "                /           ,',;-,-),;('\n";
            cout << "               /      __.-',--'  ,,"<< Default <<"|"<< Red << "/  `-.__\n";
            cout << "              /  ,      ),"<< Default <<"',;;  ("<< Blue <<"O"<< Default << ")("<< Red << "        `--.\n";
            cout << "    ,.----.__/_,'      //"<< Default <<" /"<< Blue <<"O"<< Default << ")\\  `.  \\"<< Red << "--'`-.     )\n";
            cout << "  ,' __         _,.-'  ,/"<< Default <<",-     c.' /"<< Red << "  `.  `  ,/   .-. \n";
            cout << " / ,'         ,'  _,-' ("<< Default <<",,-\\  -==*'/"<< Red << "     )   (      ) \\\n";
            cout << "','      ,  ,'  ,'     ,"<< Default <<"'--`\\-.___/ ."<< Red << "    ,   ( `-..-'   )\n";
            cout << "|      ,'   |          "<< Default <<"``'\\  \\ ,    `"<< Red << ".       `.      ,'\n";
            cout << "| /   /      \\        ,"<< Default <<"' \\ )- )      |"<< Red << "            --' )\n";
            cout << "||  | .      .      "<< Default <<"(   //  /       |"<< Red << "   ---._      ,'\n";
            cout << " `. '. `-.          "<< Default <<"|  //  |        |"<< Red << "   ,--' `-.-.'\n";
            cout << "   `--:._ `-.._     "<< Default <<"| //   |     Y  |"<< Red << " ,'\n";
            cout << "                `'-- "<< Default <<")'/    |   ,'  /"<< Red << "-'\n";
            cout << "                    "<< Default <<"/ /     | ,'   /\n";
            cout << "                   ( (      ,'    '\n";
            cout << "                   ` `.__ ,'      (\n";
            cout << "                    `.__," << SeaGreen << "\\      ,'\"\\\n";
            cout << "                       ,- \\ .  /\\  ,\\\n";
            cout << "                      '    \\  /  )/  `.\n";
            cout << "                      `.    )/  //     `.\n"<< Default;
            cout << endl;
            cout << Blue << "Is that Ursula?" << Default << endl;
        }
        if (BadGuesses == 2){
            system("clear");
            cout << Red << "                           ,-''`-.                 " << Purple << " ⣠⡄ \n"<< Red;              
            cout << "                           /       `._            " << Purple << "⢠⣾⢿⠀\n"<< Red;      
            cout << "                     __,-'/       _.  `--.        " << Purple << "⢸⣿⢘⣦⡀\n"<< Red;         
            cout << "                   ,'   ,'      ,'  ,--.  )      " << Purple << " ⠘⢿⡜⢦⢛⣦⡀\n"<< Red;
            cout << "                 ,'   ,'       /  ,(  ,/)/        " << Purple << "  ⠈⣷⢸⣅⣓⣿⡀\n"<< Red;
            cout << "                /           ,',;-,-),;('\n";
            cout << "               /      __.-',--'  ,,"<< Default <<"|"<< Red << "/  `-.__\n";
            cout << "              /  ,      ),"<< Default <<"',;;  ("<< Blue <<"O"<< Default << ")("<< Red << "        `--.\n";
            cout << "    ,.----.__/_,'      //"<< Default <<" /"<< Blue <<"O"<< Default << ")\\  `.  \\"<< Red << "--'`-.     )\n";
            cout << "  ,' __         _,.-'  ,/"<< Default <<",-     c.' /"<< Red << "  `.  `  ,/   .-. \n";
            cout << " / ,'         ,'  _,-' ("<< Default <<",,-\\    O  /"<< Red << "     )   (      ) \\\n";
            cout << "','      ,  ,'  ,'     ,"<< Default <<"'--`\\-.___/ ."<< Red << "    ,   ( `-..-'   )\n";
            cout << "|      ,'   |          "<< Default <<"``'\\  \\ ,    `"<< Red << ".       `.      ,'\n";
            cout << "| /   /      \\        ,"<< Default <<"' \\ )- )      |"<< Red << "            --' )\n";
            cout << "||  | .      .      "<< Default <<"(   //  /       |"<< Red << "   ---._      ,'\n";
            cout << " `. '. `-.          "<< Default <<"|  //  |        |"<< Red << "   ,--' `-.-.'\n";
            cout << "   `--:._ `-.._     "<< Default <<"| //   |     Y  |"<< Red << " ,'\n";
            cout << "                `'-- "<< Default <<")'/    |   ,'  /"<< Red << "-'\n";
            cout << "                    "<< Default <<"/ /     | ,'   /\n";
            cout << "                   ( (      ,'    '\n";
            cout << "                   ` `.__ ,'      (\n";
            cout << "                    `.__," << SeaGreen << "\\      ,'\"\\\n";
            cout << "                       ,- \\ .  /\\  ,\\\n";
            cout << "                      '    \\  /  )/  `.\n";
            cout << "                      `.    )/  //     `.\n"<< Default;
            cout << endl;
            cout << Orange << "It IS Ursula! Quick! She's coming!" << Default << endl;
        }
        if (BadGuesses == 3){
            system("clear");
            cout << Red << "                           ,-''`-.             " << Purple << " ⣠⡄ \n"<< Red;              
            cout << "                           /       `._       " << Purple << "⢠⣾⢿⠀\n"<< Red;      
            cout << "                     __,-'/       _.  `--.   " << Purple << "⢸⣿⢘⣦⡀\n"<< Red;         
            cout << "                   ,'   ,'      ,'  ,--.  )  " << Purple << " ⠘⢿⡜⢦⢛⣦⡀\n"<< Red;
            cout << "                 ,'   ,'       /  ,(  ,/)/    " << Purple << "  ⠈⣷⢸⣅⣓⣿⡀\n"<< Red;
            cout << "                /           ,',;-,-),;('\n";
            cout << "               /      __.-',--'  ,,"<< Default <<"|"<< Red << "/  `-.__\n";
            cout << "              /  ,      ),"<< Default <<"',;;  ("<< Blue <<"O"<< Default << ")("<< Red << "        `--.\n";
            cout << "    ,.----.__/_,'      //"<< Default <<" /"<< Blue <<"O"<< Default << ")\\  `.  \\"<< Red << "--'`-.     )\n";
            cout << "  ,' __         _,.-'  ,/"<< Default <<",-     c.' /"<< Red << "  `.  `  ,/   .-. \n";
            cout << " / ,'         ,'  _,-' ("<< Default <<",,-\\    O  /"<< Red << "     )   (      ) \\\n";
            cout << "','      ,  ,'  ,'     ,"<< Default <<"'--`\\-.___/ ."<< Red << "    ,   ( `-..-'   )\n";
            cout << "|      ,'   |          "<< Default <<"``'\\  \\ ,    `"<< Red << ".       `.      ,'\n";
            cout << "| /   /      \\        ,"<< Default <<"' \\ )- )      |"<< Red << "            --' )\n";
            cout << "||  | .      .      "<< Default <<"(   //  /       |"<< Red << "   ---._      ,'\n";
            cout << " `. '. `-.          "<< Default <<"|  //  |        |"<< Red << "   ,--' `-.-.'\n";
            cout << "   `--:._ `-.._     "<< Default <<"| //   |     Y  |"<< Red << " ,'\n";
            cout << "                `'-- "<< Default <<")'/    |   ,'  /"<< Red << "-'\n";
            cout << "                    "<< Default <<"/ /     | ,'   /\n";
            cout << "                   ( (      ,'    '\n";
            cout << "                   ` `.__ ,'      (\n";
            cout << "                    `.__," << SeaGreen << "\\      ,'\"\\\n";
            cout << "                       ,- \\ .  /\\  ,\\\n";
            cout << "                      '    \\  /  )/  `.\n";
            cout << "                      `.    )/  //     `.\n"<< Default;
            cout << endl;
            cout << Red << "Run Ariel! Swim away!" << Default << endl;
        }
        if (BadGuesses == 4){
            system("clear");
            cout << Red << "                           ,-''`-.             " << Purple << " ⣠⡄ \n"<< Red;              
            cout << "                           /       `._       " << Purple << "⢠⣾⢿⠀\n"<< Red;      
            cout << "                     __,-'/       _.  `--.   " << Purple << "⢸⣿⢘⣦⡀\n"<< Red;         
            cout << "                   ,'   ,'      ,'  ,--.  )  " << Purple << " ⠘⢿⡜⢦⢛⣦⡀\n"<< Red;
            cout << "                 ,'   ,'       /  ,(  ,/)/    " << Purple << "  ⠈⣷⢸⣅⣓⣿⡀\n"<< Red;
            cout << "                /           ,',;-,-),;('\n";
            cout << "               /      __.-',--'  ,,"<< Default <<"|"<< Red << "/  `-.__\n";
            cout << "              /  ,      ),"<< Default <<"',;;  ("<< Blue <<"O"<< Default << ")("<< Red << "        `--.\n";
            cout << "    ,.----.__/_,'      //"<< Default <<" /"<< Blue <<"O"<< Default << ")\\  `.  \\"<< Red << "--'`-.     )\n";
            cout << "  ,' __         _,.-'  ,/"<< Default <<",-     c.' /"<< Red << "  `.  `  ,/   .-. \n";
            cout << " / ,'         ,'  _,-' ("<< Default <<",,-\\    O  /"<< Red << "     )   (      ) \\\n";
            cout << "','      ,  ,'  ,'     ,"<< Default <<"'--`\\-.___/ ."<< Red << "    ,   ( `-..-'   )\n";
            cout << "|      ,'   |          "<< Default <<"``'\\  \\ ,    `"<< Red << ".       `.      ,'\n";
            cout << "| /   /      \\        ,"<< Default <<"' \\ )- )      |"<< Red << "            --' )\n";
            cout << "||  | .      .      "<< Default <<"(   //  /       |"<< Red << "   ---._      ,'\n";
            cout << " `. '. `-.          "<< Default <<"|  //  |        |"<< Red << "   ,--' `-.-.'\n";
            cout << "   `--:._ `-.._     "<< Default <<"| //   |     Y  |"<< Red << " ,'\n";
            cout << "                `'-- "<< Default <<")'/    |   ,'  /"<< Red << "-'\n";
            cout << "                    "<< Default <<"/ /     | ,'   /\n";
            cout << "                   ( (      ,'    '\n";
            cout << "                   ` `.__ ,'      (\n";
            cout << "                    `.__," << SeaGreen << "\\      ,'\"\\\n";
            cout << "                       ,- \\ .  /\\  ,\\\n";
            cout << "                      '    \\  /  )/  `.\n";
            cout << "                      `.    )/  //     `.\n"<< Default;
            cout << endl;
            cout << Red << "Ursula's power is growing! Stop her!" << Default << endl;
        }
        if (BadGuesses == 5){
            system("clear");
            cout << Red << "                           ,-''`-.             " << Purple << " ⣠⡄ \n"<< Red;              
            cout << "                           /       `._       " << Purple << "⢠⣾⢿⠀\n"<< Red;      
            cout << "                     __,-'/       _.  `--.   " << Purple << "⢸⣿⢘⣦⡀\n"<< Red;         
            cout << "                   ,'   ,'      ,'  ,--.  )  " << Purple << " ⠘⢿⡜⢦⢛⣦⡀\n"<< Red;
            cout << "                 ,'   ,'       /  ,(  ,/)/    " << Purple << "  ⠈⣷⢸⣅⣓⣿⡀\n"<< Red;
            cout << "                /           ,',;-,-),;('    " << Purple << "    ⣴⣾⣿⣿⣿⣿⠿ \n"<< Red;
            cout << "               /      __.-',--'  ,,"<< Default <<"|"<< Red << "/  `-.__ " << Purple << "   ⣿⣿⣿⠿⠿\n"<< Red;
            cout << "              /  ,      ),"<< Default <<"',;;  ("<< Blue <<"O"<< Default << ")("<< Red << "        `--.\n";
            cout << "    ,.----.__/_,'      //"<< Default <<" /"<< Blue <<"O"<< Default << ")\\  `.  \\"<< Red << "--'`-.     )\n";
            cout << "  ,' __         _,.-'  ,/"<< Default <<",-     c.' /"<< Red << "  `.  `  ,/   .-. \n";
            cout << " / ,'         ,'  _,-' ("<< Default <<",,-\\    O  /"<< Red << "     )   (      ) \\\n";
            cout << "','      ,  ,'  ,'     ,"<< Default <<"'--`\\-.___/ ."<< Red << "    ,   ( `-..-'   )\n";
            cout << "|      ,'   |          "<< Default <<"``'\\  \\ ,    `"<< Red << ".       `.      ,'\n";
            cout << "| /   /      \\        ,"<< Default <<"' \\ )- )      |"<< Red << "            --' )\n";
            cout << "||  | .      .      "<< Default <<"(   //  /       |"<< Red << "   ---._      ,'\n";
            cout << " `. '. `-.          "<< Default <<"|  //  |        |"<< Red << "   ,--' `-.-.'\n";
            cout << "   `--:._ `-.._     "<< Default <<"| //   |     Y  |"<< Red << " ,'\n";
            cout << "                `'-- "<< Default <<")'/    |   ,'  /"<< Red << "-'\n";
            cout << "                    "<< Default <<"/ /     | ,'   /\n";
            cout << "                   ( (      ,'    '\n";
            cout << "                   ` `.__ ,'      (\n";
            cout << "                    `.__," << SeaGreen << "\\      ,'\"\\\n";
            cout << "                       ,- \\ .  /\\  ,\\\n";
            cout << "                      '    \\  /  )/  `.\n";
            cout << "                      `.    )/  //     `.\n"<< Default;
            cout << endl;
            cout << Red << "She's going to sink the ship! Brace yourselves!" << Default << endl;  
        }
        // Step 7: Letters Guessed and Bad Guesses (HP) Display
        cout << Red << "HP: " << 60 - BadGuesses*10 << Default << endl;
        cout << "Letters Guessed: " << LettersRemaining << endl;
        // Step 8: GuessPhrase
        cout << Yellow << "Guess a Little Mermaid Character to stop Ursula! " << Default << GuessPhrase << endl;
        // Step 9: Ask user to enter letter
        cout << "Enter a letter: ";
        cin >> Letter;
        int Found = LettersRemaining.find(Letter, 0); 
        if (Found != -1)
            LettersRemaining.replace (Found, 1, " ");
        // Step 10: see if Letter is in SecretPhrase and replace in GuessPhrase.
        Found = SecretPhrase.find(Letter,0);
            if (Found == -1) // not found
                BadGuesses++;
            else
                while (Found < SecretPhrase.size()){
                    GuessPhrase.replace(Found,1,Letter);
                    Found = SecretPhrase.find(Letter, Found + 1);
                }
    }
    system("clear");
    //End Game Loop
    // Send to winning and losing screen:
    if (GuessPhrase == SecretPhrase){
        system("clear");
        WinningScreen();
    }
    else if (GuessPhrase != SecretPhrase){
        system("clear");
        LosingScreen();
    }
    return 0;
}
// Winng, Losing, and Entry screen ASCII Art
void IntroScreen(){
    cout << endl;
    cout << Yellow << "                   _____ __   _ _____    __  __ _________ _   _____\n";
    cout << "                  \"\"$\"\" \"$   $' $\"\"'    $'  `$ \"\"$\"\"\"$\"\" $   `$\"\"'\n";
    cout << "                    $    $\"\"\"$  $\"\"'    $    $   $   $   $   -$\"\"'\n";
    cout << Blue << "=uuu         ,uu= " << Yellow << "  $    $   $  $   ,   $    $   $   $   $    $\n";
    cout << Blue << " $$$h       ,$$$  " << Yellow << " `\"   `\"   \"' \"\"\"\"    \"\"\"\" \"  `\"  `\"  `\"\"\"  '\"\"\"\n";
    cout << Blue << " $$$$h      JF$$   ?$F\"\"\"?L $$\"\"\"?$c  $$L      d$F    dh    `$$'  $$\"\"\"?hc,\n";
    cout << " $$`$$,    J$'$$   <$>      $$    `$h $?$L    dF$>   JF$h    $$   $$     `$h\n";
    cout << " $$ ?$$   ,$' $$  =4$F\"===' $$    z$' $>?$,  dF<$>  jF `$h   $$   $$      `$ \n";
    cout << " $$  ?$h  $'  $$   <$>      $$-=4F\"   $> $$ dF <$> j$ooo9$h  $$   $$      ,$\n";
    cout << " $$   $$hdF   $$   <$>      $$   \"$c  $> `$$F  <$>jP     `$h $$   $$      dF\n";
    cout << " $$   `$$$'   $$   <$>    , $$    `$h.$>  `$   <$h$'      `$L$$   $$   ,c$F\n";
    cout << " $$    ?$'    $$, `\"\"\"\"\"'`\"\"'     ?$C\"      `\"\"\"\"       \"\"\"\"\"\"\"'\"\"\"\"\"'\n";
    cout << "\"\"\"\"    \"    \"\"\"\"                    \"$c\n";
    cout << "                                       \"=o,\n";
    cout << Default << endl;
    string text = "Press Enter to Begin!";
    
    int console_width = 80;
    int text_length = text.length();
    int padding = (console_width - text_length) / 2;

    cout << Pink << string(padding, ' ') << text << Default << endl;
    cin.ignore();
}

void WinningScreen(){
    cout << Blue << "   ____     __      ,-----.       ___    _          .--.      .--.     ,-----.     ,---.   .--.  .---.  \n";
    cout << "   \\   \\   /  /   .'  " << Coral << ".-," << Blue << "  '.   .'   |  | |         |  |" << Pink << "_" << Blue << "     |  |   .'  " << Coral << ".-," << Blue << "  '.   |    \\  |  |  \\   /  \n";
    cout << "    \\  _. /  '   / " << Coral << ",-.|  \\ _" << Blue << " \\  |   .'  | |         | " << Pink << "_( )_" << Blue << "   |  |  / " << Coral << ",-.|  \\ _" << Blue << " \\  |  ,  \\ |  |  |   |  \n";
    cout << "     " << Pink << "_( )_"<< Blue << " .'   ;  " << Coral << "\\  '_ /  |" << Blue << " : .'  '" << Yellow << "_" << Blue << "  | |         |" << Pink << "(_ o _)" << Blue << "  |  | ;  " << Coral << "\\  '_ /  |" << Blue << " : |  |\\" << Yellow << "_" << Blue << " \\|  |   \\ /   \n";
    cout << " ___" << Pink << "(_ o _)"<< Blue << "'    |  " << Coral << "_`,/ \\ _/" << Blue << "  | '   " << Yellow << "( \\.-." << Blue << "|         | " << Pink << "(_,_)" << Blue << " \\ |  | |  " << Coral << "_`,/ \\ _/" << Blue << "  | |  " << Yellow << "_( )_" << Blue << "\\  |    v    \n";
    cout << "|   |" << Pink << "(_,_)"<< Blue << "'     : " << Coral << "(  '\\_/ \\" << Blue << "   ; ' " << Yellow << "(`. _` /" << Blue << "|         |  |/    \\|  | : " << Coral << "(  '\\_/ \\" << Blue << "   ; | " << Yellow << "(_ o _)" << Blue << "  |   _ _   \n";
    cout << "|   `-'  /       \\ " << Coral << "`\"/  \\  )" << Blue << " /  | " << Yellow << "(_ (_) _)" << Blue << "         |  '  /\\  `  |  \\ " << Coral << "`\"/  \\  )" << Blue << " /  |  " << Yellow << "(_,_)" << Blue << "\"  |  (_I_)  \n";
    cout << " \\      /         '. " << Coral << "\\_/``\"" << Blue << ".\"'   \\ " << Yellow << "/  . \\" << Blue << " /         |    /  \\    |   '. " << Coral << "\\_/`\"" << Blue << ".\"'   |  |    |  |  (_I_) \n";
    cout << "  `-..-'            '-----'       `" << Yellow << "`-'`-'" << Blue << "'          `---'    `---`     '-----'     '--'    '--'  (_I_)  \n";
    cout << " \t        \\\\\""<<Yellow<<"._     _,\n";
    cout << "\t        / _  "<< Blue << "|||"<<Yellow<<";._/ )\n";
    cout << "\t      _/"<< Default << "@ @  "<< Blue << "///"<<Yellow<<"  | (\n";
    cout << "\t     ( (`__,     ,`\\|\n";\
    cout << "\t      '.\\_/ "<< Blue << "|\\"<<Yellow<<"_.\n";
    cout << "\t        `\"\"``\n";
    string text = "Let's Play Again!";
    
    int console_width = 100;
    int text_length = text.length();
    int padding = (console_width - text_length) / 2;

    cout << Coral << string(padding, ' ') << text << Default << endl;
    cin.ignore();
}

void LosingScreen(){
    cout << Purple <<" .-. .-.,---.    .---. .-. .-.,-.      .--.      .-.  .-.,-..-. .-.   .---. .-.  \n";
    cout << " | | | || .-.\\  ( .-._)| | | || |     / /\\ \\     | |/\\| ||(||  \\| |  ( .-._)|  ) \n";
    cout << " | | | || `-'/ (_) \\   | | | || |    / /__\\ \\    | /  \\ |(_)|   | | (_) \\   | /  \n";
    cout << " | | | ||   (  _  \\ \\  | | | || |    |  __  |    |  /\\  || || |\\  | _  \\ \\  |/   \n";
    cout << " | `-')|| |\\ \\ (`-'  ) | `-')|| `--. | |  |)|    |(/  \\ || || | | |)(`-'  ) (    \n";
    cout << " `---(_)|_| \\)\\ `----' `---(_)|( __.'|_|  (_)    (_)   \\|`-'/(  (_) `----' (_)   \n";
    cout << "            (__)              (_)                          (__)               \n"<< Yellow;
    cout << endl;
    string text = "Better Luck Next Time!";
    
    int console_width = 80;
    int text_length = text.length();
    int padding = (console_width - text_length) / 2;

    cout << Coral << string(padding, ' ') << text << Default << endl;
    cin.ignore();
}
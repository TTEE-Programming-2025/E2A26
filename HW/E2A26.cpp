#include <stdio.h>
#include <stdlib.h>
#include <conio.h>  

void generatemultiplicationtable(int size);

int main(){
    int password = 2025;  
	int userpassword ; 
    int input;             
    int attempt = 0;  
    int max_attempt = 3; 
    int n;

    puts("=====================================================");
    puts("########::'#######:::::'###:::::'#######:::'#######::");
    puts("########::'#######:::::'###:::::'#######:::'#######::");
    puts("##.....::'##.... ##:::'## ##:::'##.... ##:'##.... ##:");
    puts("##.....::'##.... ##:::'## ##:::'##.... ##:'##.... ##:");
    puts("##:::::::..::::: ##::'##:. ##::..::::: ##: ##::::..::");
    puts("##:::::::..::::: ##::'##:. ##::..::::: ##: ##::::..::");
    puts("######::::'#######::'##:::. ##::'#######:: ########::");
    puts("######::::'#######::'##:::. ##::'#######:: ########::");
    puts("##...::::'##:::::::: #########:'##:::::::: ##.... ##:");
    puts("##...::::'##:::::::: #########:'##:::::::: ##.... ##:");
    puts("##::::::: ##:::::::: ##.... ##: ##:::::::: ##:::: ##:");
    puts("##::::::: ##:::::::: ##.... ##: ##:::::::: ##:::: ##:");
    puts("########: #########: ##:::: ##: #########:. #######::");
    puts("########: #########: ##:::: ##: #########:. #######::");
    puts("........::.........::..:::::..::.........:::.......::");
    puts("=====================================================");
    puts("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%");
    puts("**++++**************++*****++++++++=====--::::::::::::::::::::::-::::::::----======-------===================");
    puts("+++++++++++++*****+++++++++++++++++==----::.                   .         ..:::--:::::::-------------:::------");
    puts("+++++++++++++*****++++++++++++++++++==-::...                                .::::::::::-------------:::------");
    puts("++++++++++++++***++++++++++++++++++=:.                .            .          .::::::::-----=---:::::-------=");
    puts("++++++++++++++++++++++++++++++++=:.          ....                               .::::::---------:::::-----===");
    puts("*++++++++++++++++++++++++++++++:.          ..:.                                    ...::--:::::::::----====++");
    puts("**+++++++++++++++++++++++++++=:          ..:.                     .                    ..:::::::::-----===+++");
    puts("*****++++++++++++****++++=-:.           .::.                                   .....::.....::-::::----===+++*");
    puts("**++**+++==+++++*****++-...           .::.         .                              ...::::------::-----==+++**");
    puts("*+++++++==++*******+=--=-.           ..:.           .     .    .                      ..:--=----:-----==++***");
    puts("+++==++++++*******++++=:... ...      .:.          .       .                              .::-:-:::---==++****");
    puts("=====++++***********+-.-=:.-:.       ..          ..       :                                 .::::::--=++*****");
    puts("---=+**************+:=+=:=-..:.  .  ..          .. .   .  ..     .     .           ..::::::.. .::::--=+******");
    puts("---=+*************+=**+-+::=-.  .   .          ...        .:  .         .         ......:---::..::--=++******");
    puts("--=+**************+***=+-=+=.  .   .         . . ..        :. .   .     .           .:::..:::::::--=++*******");
    puts("==++**++++***********++=++=:  .              .:   . .   .  :: ::   .   ...           .:::::::::::--=++*******");
    puts("++**+++===+++++++*****++==:       .      .  ...  .. .   .  :-.:-:  .. . .              ..::::::::--=+++******");
	puts("***++++==+++====+++***++=-..            .   .:.. .. .   .. :-:.--. .: . .           ....  ..::::--====++*****");
    puts("***++++++++++=====+++++=-..                ..:...:... . .. :--..--. ::. ..       ...  .:::...:::---===++*****");
    puts("********+++========----:.:..    ... .  .  ..-.:.:-.:. : .:..:-:::==..-:...       .::::..::::::::----==++*****");
    puts("*******++===----==-:::::::.   .:-.        .-::::-=.=. : .-...---====:--...   .     .::::.::::::-----==++*****");
    puts("+***++======-::::--::::::.   .---: .  .  .----:-==:=: -.::...----=-==--:     .      .::::.:::::------==+++***");
    puts("++++==--=-==-:::::::::::.. .:-==-..  . .:-====-=---=- -.::..:.-=-:=====:    ..:  ..   .::::::::-------=======");
    puts("=++==---=----::::::::::....---==-..  ..-===-::---==--.--::..::-:-=---:::    ..-.: :::. .:::::::::::::--------");
    puts("=====------:::::::::::..::-::===-.. .--===. :-::-.==:.:-.:.....-=:--:::.    ..-:-..:--: ::::::::::::::::-----");
    puts("-=====-----::::::::::.::::::-===:.  .--.:-. -.:.. .-...........-..: ....  ..-:=--:..::::.::::::::::::::::::::");
    puts(":--======--::::::::::::::::---==:.  ::....:::-::-::.............:.::.:-: ..:-====-..:::::::::::::::::::::::::");
    puts(":::-====--:::::::::::::::::---==-. .=:.................................. ..-=+-==-..:::::::::::::::::---:::::");
    puts(":::-====----:::::::::::::::-:-==-...:-.................-..................:==--===::::::::::::::::::------:::");
    puts("-==++++=----:::::::::::::::-:-==::.-==:...............::................:.-=:--===:::::::::::::::::----==--::");
    puts("+******++=-::::::::::::::::-:--=:=:-++-...............::...............:-:-::-=-----::::::::::::::----=====-:");
    puts("####**+++++-:::::::::::::::::-:---:=**+:..............:-:.-:..........:---:.-:===---::::::::--------======--:");
    puts("####**+=-=+=::::::::::::::::-::---==***=:...............:.............::::..--+++:--:::::::-------========-::");
	puts("####***+====-:::::::::::::::::::-:++***+-..................................:-=++==--:::::::--=============-::");
    puts("#######****+-::::::::::::::::::::-:=****=:.................................-:-=-=---::::::--==============--:");
    puts("###########*=:::::::::::::::::::::-:=++*+-:.............:::...............:+-:-=---:::::::--===============--");
    puts("###########*+-::::::::::::::::::::--=+-+*+-:.........:-----::.............=====----:::-----=================-");
	puts("##########*=-==-----::::::::::::::--::=**+:::....::::::----:-::...::--==+**+++++===========================-");
    puts("##########**=--====--::::::::::::::::::=***=:::......:-=====--=+*##%%%%%%%%%%%%%%%%###***+===================");
    puts("########***+-::::::::::::::::::::::::::-*#**+:::.....:=*#%%%%%%%%%%####%%%%%##%%%%%%%%**+====================");
    puts("#####***++==-::::::::::::::::::::::::::-**##*+-::-=+*%%%@@@@%%#######**########%@%####**=====================");
    puts("####*+==-:::::::::::::::::::::::::::::::+*######%%%%@@@@@@@@@%%**+----=*%%%%%%@@@@%##***=====================");
    puts("###**+--:::::::::::::::-===============-*#%%@@@@@@@@@@@@@@@@%*==::--=*%@@@@@@@@@@@@@%#*+=====================");
    puts("====---:::::::::::::::::+****###########%%%%%%%%%%%%%%%@@@@%+::::-*%@@@@@@@@@@@@@@@@%+===--==================");
    puts(":::::::::::::::::::::::::+*#####%%%%%%%@@@@@@@@@@@@@@%%%%%#+:...:=#%@@@%%%@@@@@@@@@%====-------==============");
    puts(":::::::::::::::::::::::::-#######%%%@@@@@@@@@@@@@@@@@@@%%%=:...:=#%%%#*++=+#%@@@@@%+========---==============");
    puts(":::::::::::::::::::::::::=##########%%%@@@@@@@@@@@@@@@@%#-....:=#%*+-:--:::-=*#%%%#+=========================");
    puts(":::::::::::::::::::::::::=#%%%%%%%%%%%%%%%%@@@@@@@@@@@#=:....:-=-:.......:::::-+######*++====================");
    puts(":::::::::::::::::::::::::+%@@@@@@@@@@%%%%%%%%%@@@@@@%:....:::........:-=-----:::*%%%%####****===============");
    puts("::::::::::::::::::::::::::#@@@@@@@@@@@@@@@@@@@@%%%%%#-..:::......:.........:....-+%@@@@@@@%#*================");
    puts("::::::::::::::::::::::::::+%@@@@@@@@@@@@@@@@@@@@@@@%+..::-..............:-=+=::::::#@@@@@%#*=================");
    puts("::::::::::::::::::::::::::=%@@@%%@@@@@@@@@@@@@@@@@@*...-::..:..:......-++*#%#*=-::=#@@@@@#*==================");
    puts("::::::::::::::::::::::::-*%@@@@@%%%%%%@@@@@@@@@@@@%-..:::..::.-:.......:-=+**##*++*#@@@@%#===================");
    puts(":::::::::::::::-----+#**%@@@@@@@@@@@@@@@@@@@%%%###-..:...::.-:..::........:::::-*#*#@@@%#*===================");
    puts(":::::::::::::-------*###%@@@@@@@%%%@@@@@@@@@@@@@%+.........:...::.:-:...:::--=+***##%@%#*+*==================");
    puts("-------::::::---=+**###%%%@@@@@@@%%%%%%%%%%%%%%%%:............::.:-:..::=##%%%#****##@%%####=================");
    puts("*******++++****####%###%@@@@@@@@@@@@@%%%%%%%####+............::.::..:::=#@@@@@@%#***%@%%%####================");
    puts("###############%##%%%##%@@@@@@@@@@@@@@@@@@@%%%#*:..........::...:..:-=#%@@@@@@@%#**#@@@%%#####*++============");
    puts("#######%%%%%@@@@@%%#%%%@@@@@@@@@@@@@@@@@@@@@@@%=...........:......::+#@@@@@@@@@%#*#%@@@%%##########**++======");
    puts("####%@@@@@@@@@@@@%%%%%%@@@@@@@@@@@@@@@@@@@@@@@#:.................::-*%@@@@@@@@@%#*#@@@@%%%##############**++=");
    puts("####%@@@@@@@@@@@@%%%%%%@@@@@@@@@@@@@@@@@@@@@@%-.................:::*%@@@@@@@@@@@%#%@@@%%%%%%%%###############");
    puts("#####%@@@@@@@@@@@@@@%%%%@@@@@@%%@@@@@@@@@@@@%+.................:::=#@@@@@@@@@@@@@%@@@@%%%%%@@@%%%%%#########");
    puts("%%%%%%%%%%%%%%%%%@%%%%%%%@@@@%%%%%%%%%%%%%%%#==-----------=======+*%@@@@@%%%%@@@@@@@%%%%%%%%%%%%%%%%%%%%%%%%%");
    puts("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%");

    while (attempt < max_attempt) {

        printf("輸入密碼: ");
        scanf("%d", &userpassword);

        if (userpassword == password) {
            printf("密碼正確五條老師讓你通行.\n");
            break;
        } else {
            attempt++;
            if (attempt < max_attempt) {
                printf("錯誤五條老師準備對你發虛式「茈」 (%d 嘗試次數).\n", max_attempt - attempt);
            } else {
                printf("你看著茈朝你而來 你:會贏喔......\n");
                exit(EXIT_FAILURE); 
            }
        }
    }

    system("cls");

    puts("=====================================================");
    puts("                      主選單                          ");
    puts("-----------------------------------------------------");
    puts("選擇你想執行的選項：");
    puts("a. 畫出直角三角形");
    puts("b. 顯示乘法表");
    puts("c. 結束");
    puts("=====================================================");

    char choice;
    while (1) {
        printf("請輸入選擇(a, b, c): ");
        choice = getch(); 
        
        if (choice == 'a' || choice == 'A') {
            system("cls");
            printf("請輸入 'a' 到 'n' 的字母：");
            char letter;
            scanf(" %c", &letter);  

            if (letter >= 'a' && letter <= 'n') {
                int n = letter - 'a' + 1;
                printf("顯示 %c 對應的直角三角形:\n", letter);
                for (int i = 1; i <= n; i++) {
                    for (int j = 0; j < i; j++) {
                        printf("*");
                    }
                    printf("\n");
                }
                printf("\n按任意鍵返回主選單...");
                getch();  
                system("cls"); 
                continue;
            } else {
                printf("警告: 請輸入 'a' 到 'n' 的字母！\n");
            }
        }
        else if (choice == 'b' || choice == 'B') { 
            while (1) { 
                printf("請輸入1~9的循環n: ");
                if (scanf("%d", &n) == 1 && n >= 1 && n <= 9) { 
                    break; 
                } else {
                    printf("錯誤:請輸入有效的1~9之間的整數。\n");
                    while (getchar() != '\n'); 
                }
            }

            printf("生成的 %d 乘法表如下:\n", n);
            generatemultiplicationtable(n);

            printf("按任意鍵返回主菜單\n");
            getch(); 
            system("cls");
        } else if (choice == 'c' || choice == 'C') {
            printf("結束使用 五條老師向你離去的背影招手\n");
            break;
        } else {
            printf("無效的選擇，請重新輸入。\n");
        }
    }
    return 0;
}

void generatemultiplicationtable(int n) {
    for (int i = 1; i <= n; ++i) { 
        for (int j = 1; j <= n; ++j) { 
            printf("%d*%d=%-3d ", i, j, i * j); 
        }
        printf("\n"); 
    }
}




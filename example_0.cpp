#include <iostream>
#include <string>

// Credenziali di accesso
std::string validUser = "pippo";
std::string validPass = "pass123";

#define TRUE	(1)
#define FALSE	(0)

using namespace std;

int main(void)
{
    // varibile usate per salvare input dell'user
    std::string username;
    std::string password;
    // numero di tentativi di autenticazione
    int counter = 3;
    // variabile settata a TRUE in caso di autenticazione avvenuta con successso
    bool authOK = FALSE;   

    // Il ciclo serve per chiedere Username e Password. Si esce dal ciclo solo quando:
    // 1 -> Username e Password sono corretti
    // 2 -> Quando si e' raggiungo il numero massimo di tentativi
    do {

        std::cout << "Inserisci Username: ";
  	getline(std::cin, username);
        // controllo username
  	if (username == validUser) 
        {
    	    std::cout << "Inserisci Password: ";
    	    getline(std::cin, password);
            // controllo pass
    	    if (password != validPass) 
            {
      		std::cout << "Password Non Valida. Prova di nuovo. Hai ancora a disposzione " << counter << " tentativi"<< std::endl;
	        // il continue serve per far ritornare il controllo di nuovo all'inizio del do-while
		continue;
    	    }
            // se il codice ha raggiungo questo punto vuol dire che User e Pass sono corretti. Possiamo interrompere il do-while
	    authOK = TRUE;
            break;
  	} 
        else {
      	    std::cout << "Username Non Valida. Prova di nuovo. Hai ancora a disposzione " << counter << " tentativi"<< std::endl;
	}
     }
     while (counter--);
     
     // dentro questo if si va solo se l'autenticazione e' avvenuta con successo
     if(authOK)
     {
         std::cout << "Congratulazioni, da qui puoi inserire il tuo codice" << std::endl;
     }
     return 0;
}

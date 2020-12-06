#include <iostream>




int main() {

  int user_age = 18;
  std::string nickname;
  std::string password;
  std::string password_check;

  std::cout << "Szia! Hogy hívnak? ";
  std::cin >> nickname;
  std::cout << "Üdvözöllek az oldalamon kedves " << nickname << "!" << std::endl;

  std::cout << "Kérlek, add meg a jelszavad: ";
  std::cin >> password;
  std::cout << "Kérlek, add meg a ismét a jelszavad: ";
  std::cin >> password_check;

  if (password == password_check) {
    std::cout << "Köszönjük, a jelszavad elmentettük.\n";
  }

  if (user_age >= 18){
    std::cout << "Megtekintheti a tartalmat.\n";
  }
      else {std::cout << "A tartalmat csak 18 éven felüliek tekinthetik meg.\n";
  }
  
}

/*A kérésük az, hogy az általunk írt program:

kérdezze meg, hány éves a látogató,
és ha 18 éves vagy idősebb, írja ki, hogy minden oké,
ha pedig fiatalabb, írja ki, hogy sajnos még nem olvashatja el az adott cikket.*/
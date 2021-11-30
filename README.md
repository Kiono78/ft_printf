42 ft_printf project

Contains only the mandatory part: reprodction of:
• %c imprime un seul caractère.
• %s imprime une chaîne de caractères.
• %p L’argument de pointeur void * est imprimé en hexadécimal.
• %d imprime un nombre décimal (base 10).
• %i imprime un entier en base 10.
• %u imprime un nombre décimal non signé (base 10).
• %x imprime un nombre en hexadécimal (base 16).
• %% imprime un signe de pourcentage..

Note that single '%' does not behave the same way as the standard printf from stdio.h.
The first one writes the symbol (and includes it in the return length), the latter discard it.
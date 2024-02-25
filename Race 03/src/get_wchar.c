#include "../inc/matrix_rain.h"

wchar_t get_wchar(void) {
    wchar_t japanese_printable[] = {L"゠ァアィイゥウェエォオカガキギクグケゲコゴサザシジスズセゼソゾタ"
                         "ダチヂッツヅテデトドナニヌネノハバパヒビピフブプヘベペホボポマミ"
                         "ムメモャヤュユョヨラリルレロヮワヰヱヲンヴヵヶヷヸヹヺ・ーヽヾヿ"};
    return japanese_printable[rand() % 96];
}





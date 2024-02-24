#include "../inc/matrix_rain.h"

wchar_t get_japanese(void) {
    wchar_t japanese_printable[] = {
        L'ぁ', L'あ', L'ぃ', L'い', L'ぅ', L'う', L'ぇ', L'え', L'ぉ', L'お',
        L'か', L'が', L'き', L'ぎ', L'く', L'ぐ', L'け', L'げ', L'こ', L'ご',
        L'さ', L'ざ', L'し', L'じ', L'す', L'ず', L'せ', L'ぜ', L'そ', L'ぞ',
        L'た', L'だ', L'ち', L'ぢ', L'っ', L'つ', L'づ', L'て', L'で', L'と', L'ど',
        L'な', L'に', L'ぬ', L'ね', L'の', L'は', L'ば', L'ぱ', L'ひ', L'び', L'ぴ',
        L'ふ', L'ぶ', L'ぷ', L'へ', L'べ', L'ぺ', L'ほ', L'ぼ', L'ぽ', L'ま', L'み',
        L'む', L'め', L'も', L'ゃ', L'や', L'ゅ', L'ゆ', L'ょ', L'よ', L'ら', L'り',
        L'る', L'れ', L'ろ', L'ゎ', L'わ', L'ゐ', L'ゑ', L'を', L'ん', L'ゔ', L'ゕ',
        L'ゖ', L'゙', L'゚', L'゠', L'ァ', L'ア', L'ィ', L'イ', L'ゥ', L'ウ', L'ェ', L'エ',
        L'ォ', L'オ', L'カ', L'ガ', L'キ', L'ギ', L'ク', L'グ', L'ケ', L'ゲ', L'コ', L'ゴ'};
    
    return japanese_printable[rand() % 109];
}





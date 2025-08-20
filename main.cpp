#include <iostream>
#include <conio.h>   // _kbhit(), _getch()
#include <windows.h> // Sleep()

int main() {
    int pos = 10;       // ボールの位置 $
    const int width = 40; // 画面の横幅 $

    while (true) {
        // 画面をクリア
        system("cls");  //$

        // ボールを描画
        for (int i = 0; i < width; i++) {
            if (i == pos) std::cout << "O";
            else std::cout << "-";
        }
		std::cout << std::endl;  //$
		std::cout << "← → で移動, q で終了" << std::endl;  //$

        // キー入力チェック
        if (_kbhit()) {
            char c = _getch();
            if (c == 'q') break;         // 終了
            else if (c == 75 && pos > 0) pos--;          // ←キー
            else if (c == 77 && pos < width - 1) pos++;  // →キー
        }

        Sleep(50); // 50ms待つ
    }
    return 0;
}

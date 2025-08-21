#include <iostream>
#include <conio.h>   // _kbhit(), _getch()
#include <windows.h> // Sleep()

int main() {
    int x = 10;       // ボールの初期x座標 
	int y = 5;　　　 // ボールの初期y座標　
    const int width = 40; // 画面の横幅 $
    const int height = 20; // 画面の縦幅 $

    while (true) {
        // 画面をクリア
        system("cls");  //$

        // ボールを描画
        for (int i = 0; i < height; i++) {
            for (int j = 0; j < width; j++) {
                if (i == y && j == x) {
                    std::cout << "●"; // ボールを描画
                } else {
                    std::cout << " "; // 空白を描画
                }
            }
            std::cout << std::endl;
		}

        std::cout << std::endl;  //$
        std::cout << "← → で移動, q で終了" << std::endl;  //$

        // キー入力チェック
        if (_kbhit()) {
            char c = _getch();
            if (c == 'q') break;         // 終了
            else if (c == 75 && x > 0) x--;          // ←キー
            else if (c == 77 && x < width - 1) x++;  // →キー
            else if (c == 72 && y > 0) y++;  // ↑キー
            else if (c == 80 && y < height - 1) y++;  // ↓キー
        }

        Sleep(50); // 50ms待つ
    }
    return 0;
}



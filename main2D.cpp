#include <iostream>
#include <conio.h>   // _kbhit(), _getch()
#include <windows.h> // Sleep()

int main() {
    int x = 10;       // �{�[���̏���x���W 
	int y = 5;�@�@�@ // �{�[���̏���y���W�@
    const int width = 40; // ��ʂ̉��� $
    const int height = 20; // ��ʂ̏c�� $

    while (true) {
        // ��ʂ��N���A
        system("cls");  //$

        // �{�[����`��
        for (int i = 0; i < height; i++) {
            for (int j = 0; j < width; j++) {
                if (i == y && j == x) {
                    std::cout << "��"; // �{�[����`��
                } else {
                    std::cout << " "; // �󔒂�`��
                }
            }
            std::cout << std::endl;
		}

        std::cout << std::endl;  //$
        std::cout << "�� �� �ňړ�, q �ŏI��" << std::endl;  //$

        // �L�[���̓`�F�b�N
        if (_kbhit()) {
            char c = _getch();
            if (c == 'q') break;         // �I��
            else if (c == 75 && x > 0) x--;          // ���L�[
            else if (c == 77 && x < width - 1) x++;  // ���L�[
            else if (c == 72 && y > 0) y++;  // ���L�[
            else if (c == 80 && y < height - 1) y++;  // ���L�[
        }

        Sleep(50); // 50ms�҂�
    }
    return 0;
}



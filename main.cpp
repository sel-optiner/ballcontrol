#include <iostream>
#include <conio.h>   // _kbhit(), _getch()
#include <windows.h> // Sleep()

int main() {
    int pos = 10;       // �{�[���̈ʒu $
    const int width = 40; // ��ʂ̉��� $

    while (true) {
        // ��ʂ��N���A
        system("cls");  //$

        // �{�[����`��
        for (int i = 0; i < width; i++) {
            if (i == pos) std::cout << "O";
            else std::cout << "-";
        }
		std::cout << std::endl;  //$
		std::cout << "�� �� �ňړ�, q �ŏI��" << std::endl;  //$

        // �L�[���̓`�F�b�N
        if (_kbhit()) {
            char c = _getch();
            if (c == 'q') break;         // �I��
            else if (c == 75 && pos > 0) pos--;          // ���L�[
            else if (c == 77 && pos < width - 1) pos++;  // ���L�[
        }

        Sleep(50); // 50ms�҂�
    }
    return 0;
}

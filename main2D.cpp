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
        std::cout << "�� �� �� ���ňړ�, q �ŏI��" << std::endl;  //$

        // �L�[���̓`�F�b�N
        if (_kbhit()) {
            int c = _getch(); // �܂�1��ǂ�
            if (c == 224) {   // ���L�[�����L�[��224���Ԃ�
                c = _getch(); // ����1��ǂނƖ��L�[�̃R�[�h
                if (c == 75 && x > 0) x--;             // ��
                else if (c == 77 && x < width - 1) x++; // ��
                else if (c == 72 && y > 0) y--;         // ��
                else if (c == 80 && y < height - 1) y++; // ��
            }
            else if (c == 'q') {
                break; // q�ŏI��
            }
        }

        Sleep(50); // 50ms�҂i�_�Ŗh�~�j
    }

    return 0;
}




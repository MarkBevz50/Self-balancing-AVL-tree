#include <iostream>
#include "Tree.h"
#include <vector>;
#include <string>


int main() {
    // ��������� ���������� ������ ������
    Node* root = nullptr;

    std::cout << "Enter values that will be stored in AVL-tree (type \"stop\" to stop):\n";
    while (true) {
        std::string val;
        std::cin >> val;
        if (val == "stop") // �������� �� ����� � ����� ��� ������� ������� 'S'
            break;
        root = insert(root, std::stoi(val)); // ������� ��������� �������� � ������
    }

    std::cout << "AVL Tree (Graph representation) before deletion:\n";
    printTreeGraph(root, 0, 10); // ��������� ���������� ������������� ������

    int condition;
    std::cout << "Enter the element you want to delete: ";
    std::cin >> condition;
    try {
        root = deleteNode(root, condition); // ��������� ��������� �������� � ������

        std::cout << "AVL Tree (Graph representation) after deletion:\n";
        printTreeGraph(root, 0, 10); // ��������� ���������� ������������� ������ ���� ���������
    }
    catch (std::exception& e)
    {
        std::cerr << "Occured an error: " << e.what();
    }
    return 0;
}
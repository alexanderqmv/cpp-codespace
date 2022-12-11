#include <iostream>

using namespace std;

struct tnode
{
    int field;              // поле данных
    struct tnode *left;     // левый потомок 
    struct tnode* right;    // правый потомок
};

// Добавление узлов
struct tnode* addnode(int x, tnode* tree)
{   
    if (tree == NULL) // Если дерева нет, формируем корень
    {
        tree = new tnode;   // Память под узел
        tree->field = x;    // Поле Данных
        tree->left = NULL;
        tree->right = NULL;  // Ветви иницилизируются пустотой
    }
    else // иначе
    {
        if (x < tree->field) // Если элемент 'x' меньше корневого, уходим влево
        {
            tree->left = addnode(x, tree->left); // Рекурсивно добавляем элемент
            
        }
        else // иначе уходим вправо
        {
            tree->right = addnode(x, tree->right); // Рекурсивно добавляем элемент
        }
        
    }
    return tree; // Возвращаем tree

    
};

void treeprint(tnode* tree)
{
    if (tree != NULL)   // Пока не встретится пустой узел
    {
        treeprint(tree->left);      // Рекурсивная функция вывода левого поддерева
        cout << tree->field << " "; // Отображаем корень дерева
        treeprint(tree->right);     // Рекурсивная функция вывода правого поддерева
    }
}

void freemem(tnode* tree)
{
    if (tree != NULL) // Если дерево не пустое
     {
        freemem(tree->left);  // Рекурсивно удаляем левую ветку
        freemem(tree->right); // 
        delete tree;
    }
}

int main()
{
    struct tnode *root = 0;// Объявляем структуру дерева    

    int a;

    for (int i = 0; i < 8; ++i)
    {
        cout << i + 1 << " : ";
        cin >> a;
        root = addnode(a,root);
    }

    treeprint(root);
    freemem(root);
    cin.get(); cin.get();
    return 0;
}

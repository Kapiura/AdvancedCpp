#include <iostream>
#include <memory>

template<typename T>
class BTS
{
    private:
    struct Node
    {
        T data;
        std::unique_ptr<Node> left;
        std::unique_ptr<Node> right;
        Node* parent;
        Node(T data, Node* parent=nullptr):data(data), parent(parent){};
    };

    std::unique_ptr<Node> root;

    void printInOrder(const Node* node) const {
        if (node)
        {
            printInOrder(node->left.get());
            std::cout << node->data << " ";
            printInOrder(node->right.get());
        }
    }

    void insert(std::unique_ptr<Node>& current, T value, Node* parent)
    {
        if (!current)
            current = std::make_unique<Node>(value, parent);
        else if (value < current->data)
            insert(current->left, value, current.get());
        else
            insert(current->right, value, current.get());
    }

    public:

    void insert(T value)
    {
        insert(root, value, nullptr);
    }

    void printInOrder() const
    {
        printInOrder(root.get());
        std::cout << "\n";
    }
};


int main()
{
    BTS<int> drzewiec;
    for(int i = 0; i < 10; i++)
        drzewiec.insert(std::rand() % 10 + 1);
    drzewiec.printInOrder();
    return 0;
}
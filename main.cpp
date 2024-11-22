#include <iostream>

class Lista
{
	public:
		void insert(int n)
		{
			auto tmp = new Element{n, root};
			/*auto tmp = new Element{.value = n, .next = root};*/

			/*tmp->value = n;*/
			/*tmp->next = root;*/
			root = tmp;
		}

		void print() const
		{
			auto tmp = root;
			while(tmp != nullptr)
			{
				std::cout << tmp->value << " ";
				tmp = tmp->next;
			}
			std::cout << "\n";
		}

		void print2() const
		{
			printRecursively(root);
		}

		bool empty() const { return root == nullptr;}

		void pop()
		{
			if(empty()) return;
			Element* tmp = root->next;
			delete root;
			root = tmp;

		}

		int sum() const
		{
			auto p = root;
			int result = 0;
			while(p)
			{
				result += p->value;
				p = p->next;
			}
			return result;
		}

		int sum2() const 
		{
			return sumRecursive(root);
		}

	public:
		struct Element
		{
			int value;
			Element* next = nullptr;
		};

		Element* root = nullptr;
	private:
		void printRecursively(Element* root) const
		{
			if(!root)
			{
				std::cout << "\n";
				return;
			}
			std::cout << root->value << " ";
			printRecursively(root->next);
		}

		int sumRecursive(const Element* root) const
		{
			if(root)
			{
				return 0;
			}
			return root->value + sumRecursive(root->next);
		}
};

int main()
{
	Lista lista;
	lista.insert(6);
	lista.insert(16);
	lista.insert(26);
	lista.insert(36);
	lista.print();
	lista.print2();
	lista.pop();
	lista.print2();
	std::cout << lista.sum() << "\n";
	std::cout << lista.sum2() << "\n";
	std::cout << "dupa\n";
	return 0;
}
